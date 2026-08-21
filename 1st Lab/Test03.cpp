#include <iostream>
using namespace std;

int main(){

    int n, count=0;
    cout<< "Input an integer: ";
    cin>> n;
    int array[n];

    for(int i=0; i<n; i++){
        cin>>array[i];

        if(array[i]<0){
            count++;
        }
    }
    cout<<"Negative num: " << count;
    
}
