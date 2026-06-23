class Solution {
public:
    void pattern6(int n) {
        int i,j;
        for (int i = 0; i < n; i++){
            for (int j = n; j > i; j--){
                cout << n - j + 1 ;
            }
            cout << endl;
    }
}
};