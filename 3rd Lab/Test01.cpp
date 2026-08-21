#include <iostream>
using namespace std;

int main()
{
    int n, j, key;
    cout << "Enter the num of elements:" << endl;
    cin >> n;

    int array[n]; 
    cout << "Enter the elements:" << endl;
    for (int i = 1; i <= n; i++) 
    {
        cin >> array[i];
    }

    for (int i = 2; i <= n; i++) 
    {
        key = array[i];
        j = i - 1;

        while (j > 0 && array[j] > key) 
        {
            array[j + 1] = array[j];
            j--;
        }

        array[j + 1] = key;
    }

    cout << "Insert in Assending:" << endl;
    for (int i = 1; i <= n; i++) 
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
