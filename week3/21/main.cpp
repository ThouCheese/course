#include "main.h"

int main(int argc, char const *argv[])
{
    if (not structCall(argc, argv))
        return 1;
    boundCall(argc, argv);
}
