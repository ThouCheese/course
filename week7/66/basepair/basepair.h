#ifndef BASEPAIR_H
#define BASEPAIR_H

struct BasePair 
{
    unsigned d_acid_type : 2;  // no overhead allowed!

    // single letter variables, but confusion not really possible
    enum {
        A,
        C, 
        T,
        G,
    };

    BasePair() = default;
    BasePair(char ch);

    char to_char() const;
};

#endif // BASEPAIR_H
