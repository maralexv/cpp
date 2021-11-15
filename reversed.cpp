#include <iostream>
#include <vector>
using namespace std;

vector<int> Reversed (const vector<int> &numbers) 
{
  vector<int> result;
  for (int i = numbers.size() - 1; i >= 0; --i) 
  {
    result.push_back(numbers[i]);
  }

  return result;
}

int main() 
{
  vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  numbers = Reversed(numbers);

  for (auto i : numbers) 
  {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}