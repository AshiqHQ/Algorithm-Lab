#include <iostream>
using namespace std;

int x=1;

void input(){
    cout<< x <<endl;
    x++;

    if(x<=10){
        input();
    }
}

int main(){
    
    input();

}
