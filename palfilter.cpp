#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool IsPalindrom(string given) {
  int n = given.size();
  for (int i = 0; i < n / 2; i++) {
    if (given[i] != given[n - i - 1]) {
      return false;
    }
  }
  return true;
}

vector<string> PalindromFilter(vector<string> words, int minLength) 
{
    vector<string> result;

    for (int i = 0; i < words.size(); i++)
    {
        if (words[i].size() >= minLength)
        {
            if (IsPalindrom(words[i]))
            {
                result.push_back(words[i]);
            }
        }
    }

    return result;
}

int main() 
{
  vector<string> input;
  int min = 3;
  input.push_back("weew");
  input.push_back("bro");
  input.push_back("code");
  input.push_back("aba");
  input.push_back("abacaba");
  input.push_back("");
  cout << input.size() << endl;
  vector<string> output = PalindromFilter(input, min);
  for (int i = 0; i < output.size(); i++)
  {
      cout << output[i] << ", ";
  }
  cout << "\n";
  return 0;
}