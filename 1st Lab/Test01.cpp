#include <iostream>
using namespace std;

int main(){

    int a,b,c;
    cout<< "Inter 3 num (for cin): ";
    cin>> a >> b >> c;
    cout<<"Output: "<< a+b+c << endl;

    cout<< "Inter 3 num (for scanf): ";
    scanf("%d %d %d",&a,&b,&c);
    printf("Output: %d",(a+b+c));

    
}
