#include "user.ih"
#include <iostream>

int main()
{
    User luuk;
    std::cout 
        << "valid? " << luuk.valid() << '\n'
        << "group? " << luuk.groupId() << '\n'
        << "dir? " << luuk.homeDir() << '\n'
        << "name? " << luuk.name() << '\n'
        << "real name? " << luuk.realName() << '\n'
        << "shell? " << luuk.shell() << '\n'
        << "user id? " << luuk.userId() << '\n';
}
