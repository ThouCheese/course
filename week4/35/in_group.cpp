#include "user.ih"

bool User::inGroup(size_t const gid) const
{
    return d_group_id == gid;
}