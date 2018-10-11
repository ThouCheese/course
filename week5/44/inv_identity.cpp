#include "main.ih"

void inv_identity(int row[][10])
{
    for (int (*rowPtr)[10] = row; rowPtr != row + 10; ++rowPtr)
    {
        for (int *colPtr = *rowPtr, *mid = *rowPtr + (rowPtr - row); 
             colPtr != *rowPtr + 10; 
             ++colPtr)
        {
            *colPtr = colPtr == mid ? 0 : 1;
        }
    }
}