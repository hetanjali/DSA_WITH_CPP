class Solution {
public:
    void pattern3(int n) {
        int i,j;

        for(i=1; i<=n; i++){
            for(j=1; j<= i; j++){
                cout << j;
            }
            cout << endl;
        }


    }
};