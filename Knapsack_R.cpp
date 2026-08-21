
#include<iostream>
using namespace std;
float fknapsack(int n, string name[], int capasityLeft, int profit[], int quantity[], int knapsack[] ){
    float totalProfit=0, profitPerUnit[n]={0};
    for(int i=0;i<n;i++)
    profitPerUnit[i]=(float)profit[i]/quantity[i];

    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(profitPerUnit[j]<profitPerUnit[j+1]){
            swap(name[j],name[j+1]);
            swap(profitPerUnit[j],profitPerUnit[j+1]);
            swap(profit[j],profit[j+1]);
            swap(quantity[j],quantity[j+1]);}}}
    
    for(int i=0;i<n;i++){
        if(capasityLeft==0)break;
        int unitTaken=min(quantity[i],capasityLeft); 
        totalProfit+=unitTaken*profitPerUnit[i]; 
        quantity[i]-=unitTaken;
        knapsack[i]+=unitTaken;
        capasityLeft-=unitTaken; 
    } 
    return totalProfit;
}
int main(){       
    int capasityLeft; 
    cin>>capasityLeft;
    int n;
    cin>>n;
    string name[n];
    for(int i=0;i<n;i++)cin>>name[i];
    int profit[n];
    for(int i=0;i<n;i++)cin>>profit[i];
    int quantity[n];
    for(int i=0;i<n;i++)cin>>quantity[i];
    
    int knapsack[n]={0};
    int totalProfit=fknapsack(n, name, capasityLeft, profit, quantity, knapsack );
    cout<< "---------------\nName \t=\tKnapsack\n";
    for(int i=0;i<n;i++){
        cout<<name[i] <<"\t=\t"<< knapsack[i]<< "\n";
    }
    cout<<"Total Profit: "<< totalProfit<<"\n";
}
