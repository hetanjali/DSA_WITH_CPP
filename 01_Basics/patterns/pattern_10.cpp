class Solution {
public:
    void pattern10(int N) {
        int i,j;
        for (int i = 0; i < N; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    // BOTTOM HALF
    for (int i = N - 1; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    }
};