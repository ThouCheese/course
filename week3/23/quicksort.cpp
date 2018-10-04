#include "main.ih"

void quicksort(string list[], size_t left, size_t right)
{
    if (left < right)
    {
        size_t mid = partition(list, left, right);
        quicksort(list, left, mid - 1);
        quicksort(list, mid + 1, right);
    }
}