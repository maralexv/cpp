#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    int given;
    vector<int> result;
    cin >> given;

    if (given == 0)
    {
        cout << 0 << endl;
        return 0;
    }

    while (given > 0) 
    {
        result.push_back(given % 2);
        given = given / 2;
    }

    for (int i = result.size()-1; i >=0 ; i--) 
    {
      cout << result[i];
    }

    cout << endl;
    return 0;
}