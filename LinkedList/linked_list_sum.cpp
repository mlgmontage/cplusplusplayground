#include <bits/stdc++.h>
using namespace std;

int main()
{
  int sum = 0;

  forward_list<int> linked;
  linked.insert_after(linked.before_begin(), 1);
  linked.insert_after(linked.before_begin(), 2);
  linked.insert_after(linked.before_begin(), 3);
  linked.insert_after(linked.before_begin(), 4);

  for (auto it = linked.begin(); it != linked.end(); ++it)
  {
    sum += *it;
  }

  cout << "Sum of linked list is " << sum << "\n";
}