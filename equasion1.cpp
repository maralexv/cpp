#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Convert argument input into floats
    float a, b, c;
    cin >> a >> b >> c;

    //  Constant case
    if (a == 0 && b == 0)
    {
        return 0;
    }

    //  Linear equasiuon case
    if (a == 0)
    {
        float x = -c / b;
        cout << x << endl;
        return 0;
    }

    // Quadratic equasion case
    // Calculate determinant
    float d = pow(b, 2) - (4 * a * c);

    //  If d < 0 – no slolutions
    if (d < 0) 
    {
        return 0;
    }
    // If d = 0 – one soluton
    else if (d == 0)
    {
        float x = -b / (2 * a);
        cout << x << endl;
        return 0;
    }
    // If d > 0 – 2 solutiouns
    float x1 = (-b - sqrt(d))/(2 * a);
    float x2 = (-b + sqrt(d))/(2 * a);
    cout << x1 << " " << x2 << endl;
    return 0;
}