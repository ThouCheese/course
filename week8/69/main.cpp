#include <iostream>

using namespace std;

struct Demo
{
    Demo() { cout << "constructed\n"; }
    ~Demo() { cout << "destructed\n"; }
    Demo(Demo &other) { cout << "copy constructed\n"; }
    Demo(Demo &&other) { cout << "move constructed\n"; }

    void operator=(Demo &other) { cout << "copy assigned\n"; }
    void operator=(Demo &&other) { cout << "move assigned\n"; }
};

Demo elides()
{
    Demo ret;
    return ret;
}

int main(int argc, char const *argv[])
{
    Demo demo1 = elides();      // demonstrate elision
    Demo demo2{move(demo1)};    // demonstrate move constructor
    demo1 = demo2;              // demonstrate copy assignment
    demo1 = move(demo2);        // demonstrate move assignment
}
