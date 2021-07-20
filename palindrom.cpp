#include <iostream>
#include <string>
using namespace std;

bool IsPalindrom(string given) {
  int n = given.size();
  for (int i = 0; i < n / 2; i++) {
    if (given[i] != given[n - i - 1]) {
        return false;
    }
  }
  return true;
}

int main() {
    string input;
    getline(cin, input);

    cout << IsPalindrom(input) << endl;

    return 0;
}
