class Solution {
public:
    void pattern12(int n) {
        int i,j;
        for ( i=0; i<n; i++ ) {
            for ( j=1; j<=i+1; j++){
                cout << j;
            }
            
            for ( j=0; j<(n-i-1)*2; j++){
                cout << " ";
            }

            for ( j=i+1; j>=1; j--){
                cout << j;
            }
            cout << endl;
        }
    }
};