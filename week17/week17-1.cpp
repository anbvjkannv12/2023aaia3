class Solution {
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> ans;
        int perfixSum[words.size()+1];//累積有幾個勾勾
        perfixSum[0]=0;
        for(int i=0;i<words.size();i++){
            perfixSum[i+1]=perfixSum[i];
            if(words[i][0]=='a' || words[i][0]=='e' || words[i][0]=='i'||words[i][0]=='o' ||words[i][0]=='u'){
                int N=words[i].length();
                if(words[i][N-1]=='a' || words[i][N-1]=='e' ||words[i][N-1]=='i'||words[i][N-1]=='o' ||words[i][N-1]=='u' ){
                    perfixSum[i+1]++;
                }
            }
        }
        for(int i=0;i<queries.size();i++){
            int left=queries[i][0], right =queries[i][1];
            ans.push_back(perfixSum[right+1]-perfixSum[left]);
        }        
        return ans;
    }
};