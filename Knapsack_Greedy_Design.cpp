#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    double capacityLeft;
    cout << "Enter the capacity of the knapsack: ";
    cin >> capacityLeft;

    int num;
    cout << "Enter the number of items: ";
    cin >> num;

    double profit[num];
    double quantity[num];
    double knapsack[num] = {0};
    double totalProfit = 0;

    cout << "Enter profits for each item:\n";
    for (int i = 0; i < num; i++) {
        cin >> profit[i];
    }

    cout << "Enter quantities for each item:\n";
    for (int i = 0; i < num; i++) {
        cin >> quantity[i];
    }

    double profitPerUnit[num] = {0};
    for (int i = 0; i < num; i++) {
        profitPerUnit[i] = profit[i] / quantity[i];
    }

    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num - 1; j++) {
            if (profitPerUnit[j] < profitPerUnit[j + 1]) {
                swap(profitPerUnit[j], profitPerUnit[j + 1]);
                swap(profit[j], profit[j + 1]);
                swap(quantity[j], quantity[j + 1]);
            }
        }
    }

    for (int i = 0; i < num; i++) {
        if (capacityLeft == 0) {
            break;
        }

        double unitTaken = min(quantity[i], capacityLeft);
        totalProfit = totalProfit + (unitTaken * profitPerUnit[i]);
        quantity[i] = quantity[i] - unitTaken;
        knapsack[i] = knapsack[i] + unitTaken;
        capacityLeft = capacityLeft - unitTaken;
    }

    cout << "Pre Profit\t Profit/Unit\t Knapsack\n";
    for (int i = 0; i < num; i++) {
        cout << profit[i] << "\t\t " << profitPerUnit[i] << "\t\t " << knapsack[i] << "\n";
    }
    cout << "Total Profit: " << totalProfit << "\n";
}
