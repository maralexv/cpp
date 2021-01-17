#include<iostream>
#include<string>
using namespace std;

int main ()
{
    string strg;
    cout << "Now please type something: ";

    // We use getline function instead of cin, 
    // since cin object treats speces as text terminator
    // and thus captures on ly one word as a string
    getline(cin, strg);

    cout << "You just typed '" << strg << "'\n";

    return 0;
}