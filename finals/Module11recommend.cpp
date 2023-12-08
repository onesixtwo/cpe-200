#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct ComputerPackage {
    char name;
    string packageName;
    double processorSpeed;
    int RAMSize;
    int storageSize;
    int price;
};

bool compareByPrice(const ComputerPackage &a, const ComputerPackage &b) {
    return a.price > b.price;
}

void recommendPackage(vector<ComputerPackage> &packages, int budget) {
    sort(packages.begin(), packages.end(), compareByPrice);

    for (const auto &pkg : packages) {
        if (budget >= pkg.price) {
            cout << "Package recommended: " << pkg.name << endl;
            cout << "Remaining budget: " << budget - pkg.price << endl;
            break;
        }
    }
}

int main() {
    int userBudget;
    cout << "Enter your budget: ";
    cin >> userBudget;

    vector<ComputerPackage> availablePackages = {
        {'A', "Ultimate Package", 5.0, 64, 2048, 49999},
        {'B', "Premium Package", 4.0, 32, 1024, 29999},
        {'C', "Standard Package", 3.0, 16, 512, 19999}
    };

    cout << "\nPackages available:" << endl;
    for (const auto &pkg : availablePackages) {
        cout << pkg.name << ".\nPackage: " << pkg.packageName << "\nProcessor Speed: "
             << pkg.processorSpeed << " GHz\nRAM Size: " << pkg.RAMSize << " GB\nStorage Size: "
             << pkg.storageSize << " GB\nPrice: " << pkg.price << endl
             << endl;
    }

    recommendPackage(availablePackages, userBudget);

    return 0;
}
