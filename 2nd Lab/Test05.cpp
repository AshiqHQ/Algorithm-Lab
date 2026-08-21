#include <iostream>
using namespace std;

int main(){
    int n;
    cout<< "Enter num of elements: ";
    cin>> n;
    int array[n];

    cout<< "Input array elements:" << endl;
    for(int i = 0; i<n; i++){
        cin>> array[i];
    }

    int max = 0;
    for(int i = 0; i<n; i++){
        if(array[i]>max){
            max = array[i];
        }
    }
    cout << max;

    int min = 0;
    for(int i = 0; i<n; i++){
        if(array[i]<min){
            min = array[i];
        }
    }
    cout << min;

}
