class Solution {
public:
    int GCD(int even,int odd){
        if(odd==0)
        return even;

        return GCD(odd,even%odd);
    }
    int gcdOfOddEvenSums(int n) {
        int sumodd = 0;
        int sumeven = 0;

        for (int i = 1; i <= n; i++) {
            sumodd += (2 * i - 1); 
            sumeven += (2 * i);    
        }
        return GCD(sumeven,sumodd);
    }
};