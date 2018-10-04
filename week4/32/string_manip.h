#ifndef STRING_MANIP_H
#define STRING_MANIP_H

class StringManip
{
    std::string &d_source;

    public:
        explicit StringManip(std::string const &source);

        std::string lc() const;         // return a copy of d_source in 
                                        // lower-case chars 
        std::string uc() const;         // return a copy in upper-case 
                                        // chars

        int compare(std::string const &rhs);
                                        // -1: d_source first, 0: equal
                                        // 1: rhs first, case insensitive
                                        // comparison. 

        std::string copy() const;       // return a copy of d_source
};

#endif // STRING_MANIP_H