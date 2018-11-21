#include "wrap.ih"

void Wrap::swap(Wrap &other)
{
    char swapspace[sizeof(Wrap)];
    memcpy(this, &swapspace, sizeof(Wrap));
    memcpy(&other, this, sizeof(Wrap));
    memcpy(&swapspace, &other, sizeof(Wrap));
}