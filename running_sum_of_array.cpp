#include <bits/stdc++.h>
using namespace std;

/*
  Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
  Return the running sum of nums.
*/

vector<int> runningSum(vector<int> &nums)
{
  vector<int> result;
  int sum = 0;
  int i;
  for (i = 0; i < nums.size(); i++)
  {
    sum += nums[i];
    result.push_back(sum);
  }
  return result;
}

int main()
{
  vector<int> nums = {1, 2, 3, 4};
  vector<int> running_sum = runningSum(nums);

  int i;
  for (i = 0; i < running_sum.size(); i++)
  {
    cout << running_sum[i] << ", ";
  }

  cout << "\n";
}