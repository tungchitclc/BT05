#include <iostream>

using namespace std;

int toHop(int k, int n) {
    if (k == 0 || k == n) {
        return 1;
    } else {
        return toHop(k - 1, n - 1) + toHop(k, n - 1);
    }
}

int main() {
    int k, n;

    while (true) {
        cin >> k >> n;
        if (k == -1 && n == -1)
            break;
        cout << toHop(k,n) << endl;
    }

    return 0;
}
