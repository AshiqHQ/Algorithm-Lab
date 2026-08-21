// 01. User input two 2D array as 2x2 matrix then Add and Sub the array and show the result.

#include <iostream>
using namespace std;
int main(){
    int u = 2, v = 2, x = 2, y = 2;

    int a[u][v];
    cout << "Enter 1st 2x2 matrix: " << endl;
    for (int i = 0; i < u; i++){
        for (int j = 0; j < v; j++){
            cin >> a[i][j];
        }
    }

    int b[x][y];
    cout << "Enter 2nd 2x2 matrix: " << endl;
    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
            cin >> b[i][j];
        }
    }

    int c[2][2];
    cout << "The Add of these matrix: " << endl;
    for (int i = 0; i < u; i++){
        for (int j = 0; j < x; j++){
            c[i][j] = 0;
            c[i][j] = a[i][j] + b[i][j];
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    cout << "The Sub of these matrix: " << endl;
    for (int i = 0; i < u; i++){
        for (int j = 0; j < x; j++){
            c[i][j] = 0;
            c[i][j] = a[i][j] - b[i][j];
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}

