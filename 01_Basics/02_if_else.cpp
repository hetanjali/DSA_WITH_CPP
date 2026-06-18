#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cout << "Enter Your Marks: ";
    cin >> x;

    if (x >= 90) {
        cout << "Grade A" << endl;
    }
    else if (x >= 70) {
        cout << "Grade B" << endl;
    }
    else {
        cout << "Fail" << endl;
    }

    return 0;
}
