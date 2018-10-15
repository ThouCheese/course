#ifndef DATAIMPL_H
#define DATAIMPL_H

#include <string>

class DataImpl 
{
    // std::string d_text;
    int d_value = 0;

    public:
        bool read();
        void display() const; 
};

#endif // DATAIMPL_H
