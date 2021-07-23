#include <iostream>
#include <vector>
using namespace std;

void Reverse (vector<int>& numbers)
{
    int length = numbers.size();
    int temp;
    for (int i = 0; i < length / 2; i++) {
      temp = numbers[i];
      numbers[i] = numbers[length - i - 1];
      numbers[length - i - 1] = temp;
    }
}

int main()
{
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    Reverse(numbers);

    for (auto i : numbers)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}