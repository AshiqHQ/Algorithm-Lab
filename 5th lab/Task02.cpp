// WAP for giving the fibonacci series for (0 - 21)

#include <iostream>
using namespace std;

int fib(int a){
    if(a <=1){
        return a;
    }
    else{
        return (fib(a-1) + fib(a-2));
    }
}

int main(){
    int n;
    cout << "Enter num of terms: ";
    cin>> n;

    for(int i = 0; i <= n; i++){
        cout<< fib(i) << " ";
    }

}

