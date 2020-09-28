#include <bits/stdc++.h>
using namespace std;

string reverser(string s)
{
  int i, j;

  for (i = 0, j = s.size() - 1; i < j; i++, j--)
  {
    char temp = s[i];
    s[i] = s[j];
    s[j] = temp;
  }

  return s;
}

int main()
{
  string s = "Hello, world";

  cout << s << "\n";
  cout << reverser(s) << "\n";
}