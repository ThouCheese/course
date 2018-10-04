#include "main.ih"

int main()
{
    while(true)
    {
        cout << "? ";
        string text;
        if (not getline(cin, text))
            break;
        size_t input = stoul(text);
        size_t sqrt = sqrtGn(input);
        cout << "sqrt: " << sqrt << " (" << sqrt * sqrt << ")\n";
    }
}