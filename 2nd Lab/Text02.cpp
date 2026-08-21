#include <iostream>
using namespace std;


int main(){
    int n;
    cout<< "Enter num of elements: ";
    cin>> n;
    int array01[n], array02[n];

    cout<< "Input array elements:" << endl;
    for(int i = 0; i<n; i++){
        cin>> array01[i];
        array01[i] = array02[i];
        cout<< array02[i];
    }


}