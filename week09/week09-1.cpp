class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
     int m=accounts.size();//有幾個人
     int n=accounts[0].size(); //這個人有幾個帳戶
     int ans=0;
     for(int i=0;i<m;i++)//第i個人
        int total=0;
        
        for(int j=0;j<n;j++){
            total+=accounts[i][j];
        }
        if(total>ans) ans=total;
     }
     return ans;
    }
};