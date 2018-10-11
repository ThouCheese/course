#ifndef CHARCOUNT_H
#define CHARCOUNT_H

class CharCount 
{
    CharInfo d_ch_info;
public:
    CharCount();
    void count(std::istream &in);
    CharInfo const &info() const;

private:
    
};

#endif // CHARCOUNT_H
