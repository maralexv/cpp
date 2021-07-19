#include <iostream>
using namespace std;

int main () 
{
    int a, b;
    cin >> a >> b;

    if (b != 0)
    {
        int c = a / b;
        cout << c << endl;
    }
    else
    {
        cout << "Impossible\n";
    }
    
    return 0;
}