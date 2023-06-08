long long findMinDiff(vector<long long> a, long long n, long long m){
        sort(a.begin(),a.end());
        long long minVal=INT_MAX;
        int minI=0;
        int maxI=m-1;
        while(maxI<n){
            minVal=min(minVal, a[maxI]-a[minI]);
            minI++;
            maxI++;
        }
        return minVal;
    }   
