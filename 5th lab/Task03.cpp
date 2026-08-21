// WAP for counting sort of user inputs

#include <iostream>
using namespace std;

int main(){

    int n, max = 0;
    cout << "Enter num of terms: ";
    cin>> n;
    int A[n];

    cout << "Enter " << n << " elements:" << endl;
    for(int i = 0; i < n; i++){
        cin>> A[i];
    }

    for(int i = 0; i < n; i++){
        if(A[i] > max){
            max = A[i];
        }
    }

    int C[max+1];
    for(int i = 0; i <= max; i++){
        C[i] = 0;
    }

    for(int i = 0; i < n; i++){
       C[A[i]]++;
    }

    for(int i = 1; i <= max; i++){
       C[i] = C[i] + C[i-1];
    }

    int O[n];
    for(int i = n-1; i >=0 ; i--){
       O[C[A[i]]-1] = A[i];
       C[A[i]]--;
    }

    cout << "Output Array:" << endl;
    for(int i = 0; i < n; i++){
        cout << O[i] << " ";
    }

    cout<< endl;

}

