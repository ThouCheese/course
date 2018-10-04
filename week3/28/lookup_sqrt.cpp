#include "main.ih"

size_t lookupSqrt(size_t num)
{
    for (size_t index = 0; index != 10; ++index)
        if (index * index > num)
            return index - 1;

    // // Alternative method using switch:

    // switch(num)
    // {
    //       default:
    //           return 0;
    //     case 1 ... 3:
    //         return 1;
    //     case 4 ... 8:
    //         return 2;
    //     case 9 ... 15:
    //         return 3;
    //     case 16 ... 24:
    //         return 4;
    //     case 25 ... 35:
    //         return 5;
    //     case 36 ... 48:
    //         return 6;
    //     case 49 ... 63:
    //         return 7;
    //     case 64 ... 80:
    //         return 8;
    //     case 81 ... 99:
    //         return 9;
    // }
}
