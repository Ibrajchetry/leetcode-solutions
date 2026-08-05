class Solution {
public:
    int countNegatives(vector<vector<int>>& arr) {
        int n = arr.size(); //row
        int m = arr[0].size(); //col

        int row = n-1;
        int col = 0;

        int ans = 0;

        while(row>=0 && col < m){
            if(arr[row][col]<0){
                ans+=m-col;
                row--;
            }else{
                col++;
            }
        }
        return ans;
    }
    
};