#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
    if (argc < 4)
    {
        cout << "Usage: ./square A B C where A, B and C represent equasion A * x^2 + B * x + C = 0\n";
        return 1;
    }

    // Convert argument input into floats
    float a = atof(argv[1]);
    float b = atof(argv[2]);
    float c = atof(argv[3]);

    // Linesr case
    if (a == 0)
    {
        float x = -c / b;
        cout << x << endl;
        return 0;
    }

    // Quadratic case
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