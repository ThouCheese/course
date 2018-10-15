#ifndef INCLUDED_DATA_
#define INCLUDED_DATA_

#include "dataimpl/dataimpl.h"

class Data
{
    DataImpl *d_data_impl;

    public:
        Data();
        bool read();
        void display() const; 
};
        
#endif
