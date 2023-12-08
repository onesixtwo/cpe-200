#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Item {
    int w;
    int v;
    double valuePerWeight;
};

bool compareItems(const Item& item1, const Item& item2) {
    return item1.valuePerWeight > item2.valuePerWeight;
}

double fractionalKnapsack(int capacity, vector<Item>& items) {
    for (auto& item : items) {
        item.valuePerWeight = static_cast<double>(item.v) / item.w;
    }

    sort(items.begin(), items.end(), compareItems);

    double totalValue = 0.0;
    int currentWeight = 0;

    for (const auto& item : items) {
        if (currentWeight + item.w <= capacity) {
            currentWeight += item.w;
            totalValue += item.v;
        } else {
            int remainingCapacity = capacity - currentWeight;
            totalValue += item.valuePerWeight * remainingCapacity;
            break;
        }
    }
    return totalValue;
}

int main() {
    int cap, numItem;

    cout << "Enter the knapsack capacity: ";
    cin >> cap;

    cout << "Enter the number of items: ";
    cin >> numItem;

    vector<Item> items(numItem);

    cout << "Enter the weight and value of each item:" << endl;
    for (int a = 0; a < numItem; ++a) {
        cout << "Item " << a + 1 << " weight: ";
        cin >> items[a].w;

        cout << "Item " << a + 1 << " value: ";
        cin >> items[a].v;
    }

    double maxValue = fractionalKnapsack(cap, items);
    cout << "Maximum value that can be obtained: " << maxValue << endl;

    return 0;
}
