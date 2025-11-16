class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n=mat[0].size();
        int ans=0;
       
        int index=0;
        for(int i=0;i<mat.size();i++){
             int count=0;

            for(int j=0;j<n;j++){
                if(mat[i][j]==1)
                count++;
            }
            if(count>ans){
                ans=count;
                index=i;
            }
        }
        return {index,ans};
    }
};