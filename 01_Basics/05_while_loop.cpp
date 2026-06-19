class Solution {
public:
    int whileLoop(int d) {
        int sum = 0;
        int count = 0;
        int num = d;
        
        while (count < 50) {
            sum += num;
            num += 10;  // Next number ending with d
            count++;
        }
        
        return sum;
    }
};