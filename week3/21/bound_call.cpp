#include "main.h"

void boundCall(int argc, char const *argv[])
{
    cout << 
        "Value at " << combine(argc, argv).nr << 
        " is " << combine(argc, argv).value << '\n';
}