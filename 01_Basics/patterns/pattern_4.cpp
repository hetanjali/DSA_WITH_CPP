class Solution {
public:
    void pattern4(int n) {
        int i,j;
        for ( i = 1; i<= n ; i++){
            for( j=1; j<=i ; j++){
                cout << i;
            }
            cout << endl;
        }

    }
};
