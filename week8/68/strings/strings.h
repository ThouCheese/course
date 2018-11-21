#ifndef INCLUDED_STRINGS_
#define INCLUDED_STRINGS_

#include <iosfwd>

class Strings
{
    size_t d_size = 0;
    size_t d_capacity = 1;
    std::string **d_str;            // now a double *
    bool d_copy = false;
    size_t d_n_iter = 0;
    std::string **(Strings::*d_enlarge_ptr)();

    public:
        Strings();
        Strings(Strings const bitand other);
        Strings(Strings and other);

        Strings(int argc, char *argv[]);
        Strings(char **environLike);
        Strings(size_t nIterate, bool copy = true);

        ~Strings();

        size_t size() const;
        size_t capacity() const;
        std::string const &at(size_t idx) const;    // for const-objects
        std::string &at(size_t idx);                // for non-const objects

        void add(std::string const &next);          // add another element

        void resize(size_t newSize);
        void reserve(size_t newCapacity);

        Strings &operator=(Strings const &other);
        Strings &operator=(Strings &&other);

        void iterate(char **environLike);
        
    private:
        std::string &safeAt(size_t idx) const;      // private backdoor
        std::string **storageArea();                // to store the next str.
        void destroy();                 
        std::string **enlarge_by_copy();                   // to d_capacity
        std::string **enlarge_by_move();                   // to d_capacity
        std::string **rawPointers(size_t nPointers);
        void swap(Strings &other);
};

inline size_t Strings::size() const         // potentially dangerous practice:
{                                           // inline accessors
    return d_size;
}

inline size_t Strings::capacity() const     // potentially dangerous practice:
{                                           // inline accessors
    return d_capacity;
}

inline std::string const &Strings::at(size_t idx) const
{
    return safeAt(idx);
}

inline std::string &Strings::at(size_t idx)
{
    return safeAt(idx);
}

        
#endif

