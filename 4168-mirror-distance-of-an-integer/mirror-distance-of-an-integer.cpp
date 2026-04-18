class Solution {
public:
    int mirrorDistance(int n) {
        int rev=0,rem=0;
        int ans;
        int temp=n;
        while(n){
            rem=n%10;
            rev=rev*10+rem;
            n/=10;
        }
        ans=abs(rev-temp);
        return ans;
    }
    
};