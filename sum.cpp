#include<iostream>
#include<cstdlib>
using namespace std;

int main (int argc, char *argv[])
{
    if (argc < 3)
    {
        cout << "Usage: ./sum integer1 integer2\n";
        return 1;
    }

    // int a = atoi(argv[1]);
    // int b = atoi(argv[2]);
    cout << atoi(argv[1]) + atoi(argv[2]) << endl;

    return 0;
}