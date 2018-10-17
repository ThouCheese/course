#include "charcount.ih"

CharCount::CharCount()
    :
        d_char_info()
{
    d_char_info.ptr = raw_capacity(d_capacity); 
}