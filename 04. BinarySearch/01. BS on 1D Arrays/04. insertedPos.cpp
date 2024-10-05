#include <bits/stdc++.h>
using namespace std;


int insertedPos(vector<int> &arr, int x) {
  int low = 0;
  int high = arr.size() - 1;
  int index = arr.size();
  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (arr[mid] >= x) {
      index = mid;
      high = mid - 1;
    } else
      low = mid + 1;
  }
  return index;
}

int main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  int x;
  cin >> x;
  cout << insertedPos(arr, x);
  return 0;
}
