#include <iostream>
using namespace std;

int main()
{
    int n, i, j, temp;
    cout << "Enter the number of elements:" << endl;
    cin >> n;

    int array[n];
    cout << "Enter the elements:" << endl;
    for (int i = 1; i <= n; i++)
    {
        cin >> array[i];
    }

    for (i = 1; i <= n - 1; i++) 
    {
        for (j = 1; j <= n - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    cout << "Bubble sorted array:" << endl;
    for (i = 1; i <= n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}

