class Solution{
public:
    void pattern8(int n) {
        int i,j;
        for(i=0; i<n; i++){
            for(j=0; j<i; j++){
                cout << " ";
            }
            
            for(int j = 0; j < 2 * (n - i - 1) + 1; j++){
                cout << "*";
        }
        cout << endl;

    }
    }
};