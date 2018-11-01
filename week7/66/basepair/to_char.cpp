#include "basepair.ih"

char BasePair::to_char() const
{
    switch (d_acid_type) {
        case A:
            return 'a';
        case C:
            return 'c';
        case T:
            return 't';
        case G:
            return 'g';
    }
}