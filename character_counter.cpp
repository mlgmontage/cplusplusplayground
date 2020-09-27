#include <bits/stdc++.h>
using namespace std;

/*
  Count the number of characters in sentence.
*/

int main()
{
  string sentence = "Hello, world. What a great day!";

  map<char, int> counter;

  int i;
  for (i = 0; i < sentence.size(); i++)
  {
    if (counter[sentence[i]])
    {
      counter[sentence[i]] = counter[sentence[i]] + 1;
    }
    else
    {
      counter[sentence[i]] = 1;
    }
  }

  for (map<char, int>::iterator ii = counter.begin(); ii != counter.end(); ++ii)
  {
    cout << (*ii).first << " " << (*ii).second << " times.\n";
  }
}