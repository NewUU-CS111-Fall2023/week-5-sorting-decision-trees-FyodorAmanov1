#include <iostream>

using namespace std;

int countElements(int arr[], int n) {
  int count = 0;
  for (int i = 1; i < n - 1; i++) {
    if (arr[i - 1] < arr[i] && arr[i + 1] < arr[i]) {
      count++;
    }
  }
  return count;
}

int main() {
  int arr[] = {5, 1, 7, 3, 2, 6};
  int n = sizeof(arr) / sizeof(arr[0]);
  int count = countElements(arr, n);
  cout << count << endl;
  return 0;
}