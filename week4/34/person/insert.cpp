#include "person.ih"

void Person::insert(std::ostream &ostream) const
{
    ostream 
        << "name is " << d_name << '\n'
        << "address is " << d_address << '\n'
        << "phone is " << d_phone << '\n'
        << "mass is " << d_mass << '\n';
}
