#include <iostream>
#include "checkprime.h"


using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}
    void print_checked(int *arr, int arrSize) {
        cout << "So nguyen to tren la: ";
    for (int k = 0; k < arrSize; k++) {
            if (isPrime(arr[k])) {
                cout << arr[k] << " ";
            }
        }
    
        cout << endl;
    
     
}
