#include <iostream>
using namespace std;

int main()
{
    int n, j, key;
    cout << "Enter an integer num:" << endl;
    cin >> n;

    int temp = n, dCount = 0;
    while( temp != 0){
        temp = temp/10;
        dCount++;
    }

    int arrayD[dCount];
    temp = n;
    for(int i = dCount - 1; i >= 0; i--){
        arrayD[i] = temp % 10;
        temp = temp/10;
    }

    for (int i = 1; i < dCount; i++) 
    {
        key = arrayD[i];
        j = i - 1;

        while (j > 0 && arrayD[j] < key) 
        {
            arrayD[j + 1] = arrayD[j];
            j = j - 1;
        }

        arrayD[j + 1] = key;
    }

    cout << "Insert in Descending:" << endl;
    for (int i = 0; i < dCount; i++) 
    {
        cout << arrayD[i] << " ";
    }
    cout << endl;

    return 0;
}
