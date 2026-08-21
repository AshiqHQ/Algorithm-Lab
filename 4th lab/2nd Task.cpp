// 02. input a string then reverse the string but make sure but make sure the character case are correct. Ex: "BanglaDesh" Output: "HsedalGnab"

#include <iostream>
#include <string>
using namespace std;
int main(){

    string input;
    cout<< "Input a string:" << endl;
    cin >> input;
    int n = input.length();

    char output[n];
    bool Case[n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j <= (n - 1) - i; j++){
            output[j] = input[i];

            if ((output[j] >= 'a' && output[j] <= 'z')){
                Case[i] = false;
            }
            else{
                output[j] = output[j] + 32;
                Case[i] = true;
            }
        }
    }

    cout<< endl << "Output:" << endl;
    for (int i = 0; i < n; i++){
        if (Case[i] == true){
            output[i] = output[i] - 32;
        }

        cout << output[i];
    }

    cout << endl;
    return 0;
}

