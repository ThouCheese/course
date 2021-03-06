import os
from pathlib import Path

path = Path('.')


def sort(path):
    if path.suffix == '.txt':
        return '0' + path.name
    elif path.suffix == '.ih':
        return '1' + path.name
    elif path.suffix == '.h':
        return '2' + path.name
    elif path.suffix == '.cpp':
        return '3' + path.name
    # elif path.name == 'frame' or path.name == 'program':
        # do nothing
    return '4' + path.name
    raise ValueError(f'Unknown file extension on {path.name}')



def parse_file(path, pathname):
    assert path.is_file()
    suffix = path.suffix;
    if suffix not in ('.cpp', '.h', '.ih', '.txt'):
        return ''
    pathname = pathname.replace("_", "\\_");
    result = ''
    if suffix == '.txt':
        result += result + path.read_text() +'\n';
    else:
        result += f'\\subsection*{{{pathname}}}\n'
        result += '\\begin{minted}[frame=lines, linenos, fontsize=\\large]{c++}\n'
        result += path.read_text() + '\n';
        result += '\\end{minted}\n'
    return result


def append_files(path, pathname=''):
    result = ''
    for subpath in sorted(path.iterdir(), key=sort):
        if subpath.is_dir():
            result += append_files(subpath, pathname + '/' + subpath.name)
        else:
            result += parse_file(subpath, pathname + '/' + subpath.name)
    return result + '\n'



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
for exercise in sorted(path.iterdir()):
    if not exercise.is_dir() or exercise.name == '.git':
        continue
    result += f'\\section*{{Exercise {exercise.name}}}\n'
    result += append_files(exercise)

result += '\n\\end{document}'
print(result)
