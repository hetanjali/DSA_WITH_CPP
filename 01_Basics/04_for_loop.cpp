
    
    class Solution {
public:
    int forLoop(int low, int high, int i) {
        int sum = 0;
        for (low = low; low <= high; low++) {
            sum += low;
        }
        return sum;

}
};