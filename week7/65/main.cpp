#include "main.ih"

int main(int argc, char const *argv[])
{
    string pacct_path = "/var/log/account/pacct";
    bool all = false;
    handle_input(all, pacct_path, argc, argv);
    print_pacct(all, pacct_path);
}