#include "person.ih"

void Person::extract(std::istream &istream)
{
    getline(istream, d_name, ',');
    getline(istream, d_address, ',');
    getline(istream, d_phone, ',');
    std::string mass_str;
    getline(istream, mass_str, '\n');
    d_mass = std::stoul(mass_str);
}
