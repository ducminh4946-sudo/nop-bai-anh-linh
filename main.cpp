#include <iostream>
#include <cstdlib>
#include <ctime>
#include "checkprime.h"


using namespace std;

int main() {
    int n;

    cout << "nhap so phan tu: " <<endl;
    cin >> n;
    cout <<"so phan tu cua ban: "<< n<<endl;
    if (n <= 100)  {
          int *arr = new int [n];
    srand(time (0));
    for (int i = 0; i < n; i++) {
        arr[i] =  rand() % 100;
    }
    cout << "cac so nguyen da chon: ";
    for (int j = 0; j < n; j++) {
        cout << arr[j] << " "; 
    }
    cout << endl;
    cout<<"Cac so nguyen to: ";

    print_checked(arr, n);

        delete[] arr;    
    }  
    
    else {
        cout << "nhap so phan tu: " <<endl;
        cin >> n;
    }
    return 0;
}

    

   

