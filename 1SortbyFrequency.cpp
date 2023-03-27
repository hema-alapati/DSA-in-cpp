//Sorting Elements of an Array by Frequency

class Solution {
public:
    static bool cmp(pair<int,int>&a, pair<int,int>&b) {
        return  (a.second==b.second) ? a.first>b.first : a.second<b.second;
    }
    vector<int> frequencySort(vector<int>& nums) {
        if(nums.size()==1) 
            return nums;
        map<int,int> mp;
        for(int i=0;i<nums.size();i++) 
        {
            mp[nums[i]]++;
        }
        vector<pair<int,int>> val_freq;
        for(auto m : mp) 
        {
            val_freq.push_back(m);
        }
        sort(val_freq.begin(),val_freq.end(),cmp);
        vector<int> result;
        for(auto v : val_freq) {
            for(int i=0;i<v.second;i++) {
                result.push_back(v.first);
            }
        }
        return result;
    }
};

vector<int> frequencySort(vector<int>& nums) {
	map<int, int> freq;
	for (int n : nums)
		freq[n]++;
	sort(nums.begin(), nums.end(),[&freq](const int& a, const int& b) {return (freq[a] == freq[b]) ? a > b : freq[a] < freq[b];});
	return nums;
}