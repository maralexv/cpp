#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main ()
{
    string dict[3];
    cin >> dict[0] >> dict[1] >> dict[2];

    int size = sizeof(dict) / sizeof(dict[0]);
    
    sort(dict, dict + size);
    cout << dict[0] << '\n';
    
    return 0;
}