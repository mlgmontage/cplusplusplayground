#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
  int value;
  ListNode *next;
  ListNode() : value(0), next(nullptr) {}
  ListNode(int x) : value(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : value(x), next(next) {}
};

int main()
{
  ListNode node3 = ListNode(23);
  ListNode node2 = ListNode(12, &node3);
  ListNode node1 = ListNode(4, &node2);

  ListNode *ii = &node1;

  while (ii != nullptr)
  {
    cout << "value : " << ii->value << "\n";
    ii = ii->next;
  }
}