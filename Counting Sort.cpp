#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter num of elements: ";
    cin >> n;
    int inputArray[n], outputArray[n], max = 0;

    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++){
        cin >> inputArray[i];
    }

    for (int i = 0; i < n; i++){     // for max value.
        if (inputArray[i] > max){
            max = inputArray[i];
        }
    }

    int countArray[max + 1];        // 0 value for all blocks of countArray 
    for (int i = 0; i <= max; i++){
        countArray[i] = 0;
    }

    for (int i = 0; i < n; i++){        // values of inputArray are incriments countArray index 
        countArray[inputArray[i]]++;
    }

    for (int i = 1; i <= max; i++){         // cumulative sum
        countArray[i] = countArray[i] + countArray[i - 1];
    }

    for (int i = n - 1; i >= 0; i--){       // main proccess of sorting
        outputArray[countArray[inputArray[i]] - 1] = inputArray[i];
        countArray[inputArray[i]]--;
    }

    cout<< "Sorted Array: "<< endl;
    for (int i = 0; i < n; i++)
    {
        cout << outputArray[i] << " ";
    }
    cout << endl;
}
