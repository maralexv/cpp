#include <iostream>
using namespace std;

int factorial (int x)
{
    if (x > 0)
    {
        x = x * factorial(x - 1);
    }
    else 
    {
        x = 1;
    }
    
    return x;
}

int main ()
{
    int input, output;
    cin >> input;

    output = factorial (input);
    cout << output << endl;

    return 0;
} 