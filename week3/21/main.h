#include <iostream>

using namespace std;

struct ReturnValues
{
    bool ok;
    size_t nr;
    string value;
};

bool structCall(int argc, char const *argv[]);

void boundCall(int argc, char const *argv[]);

ReturnValues combine(int argc, char const *argv[]);
