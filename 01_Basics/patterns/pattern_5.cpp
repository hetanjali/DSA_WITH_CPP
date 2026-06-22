class Solution {
public:
    void pattern5(int n) {
        int i,j;
        for(i=0; i<n; i++){
            for(j=n; j>i; j--){
                cout << "*";
            }
            cout << endl;
        }

    }
};
