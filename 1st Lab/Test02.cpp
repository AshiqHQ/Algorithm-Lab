#include <iostream>
using namespace std;

int x,y,z;

void input(){
    cout<<"Enter 3 integers: "<<endl;
    cin>>x>>y>>z;
}

void output(){
    cout<<"Output: "<<x+y+z;
}

int main(){
    
    input();
    output();

}
