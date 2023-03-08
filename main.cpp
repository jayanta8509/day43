// Write Program to find the array type
#include <iostream>
using namespace std;
void xyz(int arr[], int n) {
  int c = 0, k = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] % 2 == 1) {
      c++;
    }
    if (arr[i] % 2 == 0) {
      k++;
    }
  }
  if (c == n) {
    cout << "odd" << endl;

  } else if (k == n) {
    cout << "Even";
  } else {
    cout << "mixd";
  }
}

int main() {
  int arr[] = {1, 3, 5};
  int n = 3;
  xyz(arr, n);
}