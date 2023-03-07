#include <iostream>
#include <time.h>
#include <math.h>

using namespace std;


void randomArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 50;
    }
}

void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printTriple(int* arr, int size) {
    for (int i = 0; i < size - 2; i++) {
        for (int j = i + 1; j < size - 1; j++) {
            for (int k = j + 1; k < size; k++) {
                if ((arr[i] + arr[j] + arr[k]) % 25 == 0) {
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                }
            }
        }
    }
}

int main() {
    int N;
    cin >> N;
    srand(time(nullptr));
    int arr[N];
    randomArray(arr, N);
    printArray(arr, N);
    cout << "Triplets with sum divisible by 25:" << endl;
    printTriple(arr, N);
    return 0;
}
