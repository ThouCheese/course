#ifndef USER_H
#define USER_H

class User
{
    bool d_valid;
    std::string d_user_name;
    std::string d_real_name;
    size_t d_user_id;
    size_t d_group_id;
    std::string d_home_dir;
    std::string d_shell;

public:
    User();
    bool valid() const;
    size_t groupId() const;
    std::string const &homeDir() const;
    bool inGroup(size_t const gid) const;
    std::string const &name() const;
    std::string const &realName() const;
    std::string const &shell() const;
    size_t userId() const;
};

#endif