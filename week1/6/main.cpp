#include <iostream>

using namespace std;

int main()
{
    size_t value;
    cin >> value;
    // any number not divisible by 2 is odd
    cout << (value % 2 ? "odd" : "even") << '\n';
    // any number with a 1 as final digit is odd
    cout << (value & 1 ? "odd" : "even") << '\n';
    // if we remove the final bit, and the value changes, it was odd
    cout << (value >> 1 << 1 == value ? "even" : "odd") << '\n';
    // the same trick with different operators
    cout << (value / 2 * 2 == value ? "even" : "odd") << '\n';
    // overwrite the last bit and see if anything changes
    cout << ((value | 1) == value ? "odd" : "even") << '\n';
    // if value is odd, subtracting one will only alter the finaly bit
    // and the xor will be precisely 1
    cout << ((value ^ (value - 1)) == 1 ? "odd" : "even") << '\n';
}
