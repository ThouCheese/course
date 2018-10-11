#include "user.ih"

User::User()
    :
        d_valid(false)
{
    passwd *data = getpwent();
    if (not data)
        return;
    else
        d_valid = true;
    
    d_user_name = data->pw_name;
    d_real_name = data->pw_gecos;
    d_user_id = data->pw_uid;
    d_group_id = data->pw_gid;
    d_home_dir = data->pw_dir;
    d_shell = data->pw_shell;
}
