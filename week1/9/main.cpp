#include <iostream>

union Transfer {
    struct {
        int field0: 1;
        int field1: 3;
        int field2: 4;
        int field3: 5;
        int field4: 4;
        int field5: 4;
        int field6: 4;
        int field7: 4;
        int field8: 4;
        int field9: 5;
        int field10: 2;
        int rest: 24;
    };
    size_t number;
};

int main()
{
    std::cout 
        << std::hex 
        << Transfer{0, 7, 15, 10, 6, 7, 15, 15, 7, 0, 3, 0}.number 
        << '\n';
}
