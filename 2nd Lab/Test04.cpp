#include <iostream>
using namespace std;

int main(){
    int n, even=0, odd=0;
    cout<< "Enter num of elements: ";
    cin>> n;
    int array[n];

    cout<< "Input array elements:" << endl;
    for(int i = 0; i<n; i++){
        cin>> array[i];
        if(array[i]%2=0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<< "Even: " << even << endl << "Odd: " << odd;
    
}
