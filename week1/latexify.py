from pathlib import Path

path = Path('.')


def parse_file(path, pathname):
    assert path.is_file()
    print(type(path))
    suffix = path.suffix;
    if suffix not in ('.cpp', '.h', '.ih', '.txt'):
        return ''
    result = f'\\subsection{{{pathname}}}\n'
    result += '\\begin{minted}[frame=lines, linenos, fontsize=\\large]{c++}\n'
    pathname = pathname.replace("_", "\\_");
    result += path.read_text();
    result += '\n\\end{minted}\n'

    return result


def append_files(path, pathname=''):
    result = ''
    for subpath in path.iterdir():
        if subpath.is_dir():
            result += append_files(subpath, pathname + subpath.name)
        else:
            result += parse_file(subpath, subpath.name)
    return result



result = r'''\documentclass{article}
\usepackage[utf8]{inputenc}
\usepackage[T1]{fontenc}
\usepackage[utf8]{inputenc}
\usepackage{lmodern}
\usepackage[a4paper, margin=1in]{geometry}

\usepackage{minted}
\large
\title{C++ Assignment 3}
\begin{document}
\begin{titlepage}
    \begin{center}
        \line(1,0){300}\\
        [0.65cm]
        \huge{\bfseries Assignment III}\\
        \line(1,0){300}\\
        \textsc{\Large C++ Course Part I}\\
        \textsc{\LARGE \today}\\
        [5.5cm]     
    \end{center}
    \begin{flushright}
        \textsc{\Large L. Wester\\S2755351}\\
        [0.5cm]
    \end{flushright}
\end{titlepage}
'''
for exercise in path.iterdir():
    if not exercise.is_dir() or exercise.name == '.git':
        continue
    result += f'\\section{{{exercise.name}}}\n'
    result += append_files(exercise)

result += r'\end{document}'
print(result)
