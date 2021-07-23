#include <iostream>
#include <vector>
#include <string>
using namespace std;

void MoveStrings(vector<string>& source, vector<string>& destination)
{
    // for (int i = 0; i < source.size(); i++)
    // {
    //     destination.push_back(source[i]);
    // }
    for (auto e : source) 
    {
      destination.push_back(e);
    }
    source.clear();    
}


int main() 
{
    vector<string> sour = {"a", "b", "c"};
    vector<string> dest = {"d", "e", "f", "g"};

    MoveStrings(sour, dest);
    for (int i = 0; i < dest.size(); i++)
    {
        cout << dest[i] << " ";
    }
    cout << endl;
    
    return 0;
}