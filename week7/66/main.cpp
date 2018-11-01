#include "main.ih"

int main(int argc, char const *argv[])
{
    bool binary = argc == 2 and argv[1] == string("-d");
    IOHandler reader{binary, "/tmp/file.txt"};
    reader.start(cin);
}
