#include <bits/stdc++.h>
using namespace std;

/*
  Given string s check if it's palicdromic.
*/

bool palicdromic_check(string s)
{
  int i, j;

  for (i = 0, j = s.size() - 1; i < j; i++, j--)
  {
    if (s[i] != s[j])
      return false;
  }

  return true;
}

int main()
{
  cout << "ello : " << palicdromic_check("ello") << "\n";
  cout << "elle : " << palicdromic_check("elle") << "\n";
  cout << "abba : " << palicdromic_check("abba") << "\n";
}