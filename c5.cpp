#include <iostream>

using namespace std;

int isPrime(int num) {
  if (num <= 1) {
    return 0;
  }
  for (int i = 2; i * i <= num; i++) {
    if (num % i == 0) {
      return 0;
    }
  }
  return 1;
}


int main() {
  int n;

  cout << "Enter a positive integer: ";
  cin >> n;

  cout << "All prime numbers less than " << n << ":" << endl;

  for (int i = 2; i < n; i++) {
    if (isPrime(i)) {
      cout << i << endl;
    }
  }

  return 0;
}
