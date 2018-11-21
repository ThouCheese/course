#include "strings.ih"

Strings::Strings(size_t nIterate, bool copy)
:
    Strings()
{
    d_n_iter = nIterate;
    d_copy = copy;
    d_enlarge_ptr = copy ? &Strings::enlarge_by_copy : &Strings::enlarge_by_move;
}