#include <iostream>

using namespace std;

int Factorial(int x) {
  if (x > 0) {
    x = x * Factorial(x - 1);
  } else {
    x = 1;
  }
  return x;
}

int main ()
{
    int input;
    cin >> input;
    cout << Factorial (input) << endl;
    return 0;
}
