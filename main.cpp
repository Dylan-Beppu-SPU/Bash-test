#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    while(true) {
        string first, last;
        cout << "Enter first and last name: ";
        cin >> first >> last;

        if (first.empty() || last.empty()) {
            break;
        }

        cout << "\nFirst name: " << first << endl;
        cout << "Last name: " << last << endl;
    }

    return 0;
}