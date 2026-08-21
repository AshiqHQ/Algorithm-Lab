#include <iostream>
using namespace std;

void merge(int A[], int l, int mid, int h){
    int i = l;
    int j = mid + 1;
    int k = l;

    int temp[h + 1];

    while (i <= mid && j <= h){
        if (A[i] <= A[j]){
            temp[k] = A[i];
            i++;
        }
        else{
            temp[k] = A[j];
            j++;
        }
        k++;
    }

    while (i <= mid){
        temp[k] = A[i];
        i++;
        k++;
    }

    while (j <= h){
        temp[k] = A[j];
        j++;
        k++;
    }

    for (int idx = l; idx <= h; idx++){
        A[idx] = temp[idx];
    }
}

void mergeSort(int A[], int l, int h){
    if (l < h){
        int mid = (l + h) / 2;
        mergeSort(A, l, mid);
        mergeSort(A, mid + 1, h);
        merge(A, l, mid, h);
    }
}

int main(){
    int n;
    cout << "Enter the num of elements: ";
    cin >> n;
    int A[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++){
        cin >> A[i];
    }

    mergeSort(A, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++){
        cout << A[i] << " ";
    }
    cout << endl;
}

