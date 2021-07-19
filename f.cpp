#include <iostream>
#include <string>

using namespace std;

int main ()
{
    string userinput;
    int counter = 0;
    int position = 0;
    cin >> userinput;

    for (int i = 0; i < userinput.size(); i++)
    {
        if (userinput[i] == 'f' || userinput[i] == 'F')
        {
            counter ++;
            if (counter == 2)
            {
                position = i;
            }
        }
    }

    if (counter == 1)
    {
        position = -1;
    } else if (counter == 0)
    {
        position = -2;   
    }

    cout << position << endl;

    return 0;
}
