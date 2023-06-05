vector<vector<int> > stockBuySell(vector<int> A, int n){
        vector<vector<int>> ans;
        int profit=0;
        for(int i=1;i<n;i++){
            if(A[i]>A[i-1]){
                ans.push_back({i-1,i});
            }
        }
        return ans;
}
