// WAP for Bubble sort of A = 4 5 1 0 9

#include <iostream>
using namespace std;

int main(){

    int n, temp;
    cout << "Enter num of terms: ";
    cin>> n;
    int array[n];

    cout << "Enter " << n << " elements:" << endl;
    for(int i = 1; i <= n; i++){
        cin>> array[i];
    }

    for(int i = 1; i <= n-1; i++){
        for(int j = 1; j <= n-i; j++){

            if(array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    cout << "Sorted array:" << endl;
    for(int i = 1; i <= n; i++){
        cout<< array[i] << " ";
    }
    
}

