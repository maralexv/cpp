#include <iostream>
 using namespace std;

 int main ()
 {
    int A, B;
    cin >> A >> B;

    if (A % 2 != 0)
    {
        A++;
    }

    while (A <= B)
    {
        cout << A << endl;
        A += 2;
    }

    return 0;
 }