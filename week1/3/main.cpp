#include <iostream>

char const *text = R"S(
^\s+Encryption key:(\w+)
^\s+Quality=(\d+)
^\s+E?SSID:"([[:print:]]+)"
^\s+ssid="([[:print:]]+)"
)S";

int main(int argc, char *argv[])
{
    std::cout << text;
}
