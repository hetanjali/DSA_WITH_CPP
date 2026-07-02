class Solution {
public:
    void pattern11(int n) {
        int i,j;
        for(i=0; i<n; i++){
            for(j=0; j<i+1; j++){
                if ((i+j)%2 == 0){
                    cout << 1;
                }
                else {
                    cout << 0;
                }
                cout << " ";
            }
            cout << endl;  // OUTSIDE inner loop
        }
    }
};