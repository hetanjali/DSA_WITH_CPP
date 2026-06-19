class Solution{
public:
    void reverse(vector <int> &arr){
        int n = arr.size();
        int i = 0;
        int j = n - 1;
        
        while(i < j){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
};