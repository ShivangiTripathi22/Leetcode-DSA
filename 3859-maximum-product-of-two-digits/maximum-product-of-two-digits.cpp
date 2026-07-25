class Solution {
public:
    int maxProduct(int n) {
        int current_product=0;
        int max_product=0;
        int temp;
        vector<int>arr;
        while(n!=0){
            temp=n%10;
            arr.push_back(temp);
            n=n/10;
        }
        sort(arr.begin(),arr.end());
        for(int i=1;i<arr.size();i++){
            current_product=arr[i-1]*arr[i];
            max_product=max(current_product,max_product);
        }
        return max_product;
        
    }
};