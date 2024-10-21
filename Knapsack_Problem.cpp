#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, capacity;

    cout << "Input the number of items:-> ";
    cin >> n;

    cout << "Input the capacity of the bag:-> ";
    cin >> capacity;

    vector<int> profits(n), weights(n);
    vector<double> ratios(n);
    vector<int> indices(n);

    cout << "Give the profit of each item:->" << endl;
    for (int i = 0; i < n; i++) {
        cin >> profits[i];
    }

    cout << "Give the weight of each item:->" << endl;
    for (int i = 0; i < n; i++) {
        cin >> weights[i];
        ratios[i] = (double)profits[i] / weights[i];  // Calculate profit-to-weight ratio
        indices[i] = i;  // Track the original indices
    }

    // Sort items by profit-to-weight ratio using the indices
    sort(indices.begin(), indices.end(), [&](int i, int j) {
        return ratios[i] > ratios[j];
    });

    double totalProfit = 0;
    int currentWeight = 0;

    // Fractional Knapsack algorithm
    for (int i = 0; i < n; i++) {
        int idx = indices[i];
        if (currentWeight + weights[idx] <= capacity) {
            // Take the whole item
            totalProfit += profits[idx];
            currentWeight += weights[idx];
        } else {
            // Take the fraction of the remaining capacity
            int remainingCapacity = capacity - currentWeight;
            totalProfit += profits[idx] * ((double)remainingCapacity / weights[idx]);
            break;
        }
    }

    cout << "Maximum Profit: " << totalProfit << endl;

    return 0;
}
