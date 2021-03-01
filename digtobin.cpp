#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    int given, temp;
    vector<int> result;
    cin >> given;

    while (given / 2 != 0) 
    {
      result.push_back(given % 2);
      cout << "remainder " << given % 2 << " -> vector" << endl;
      temp = given / 2;
      cout << "factor " << temp << endl;
      given = temp;
    }

    cout << "vector size " << result.size() << endl;

    for (int i = (result.size() - 1); i == 0; i--)
    {
        cout << result[i];
    }

    cout << endl;

    return 0;
}