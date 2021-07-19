#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    int given;
    vector<int> result;
    cin >> given;

    while (given > 0) 
    {
        result.push_back(given % 2);
        given = given / 2;
    }

    reverse(result.begin(), result.end());

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i];
    }
    cout << endl;

    return 0;
}