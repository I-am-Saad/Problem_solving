//Starting with the name of Allah.
//Source -> https://youtu.be/u0e29JIdxZU
class Solution {
    vector<vector<int>> vv;
    void subset(vector<int>&v,int pos,int last,vector<int>&subs){
    if(pos==last){
      vv.push_back(subs);
      return;
    }
    subset(v,pos+1,last,subs);
    subs.push_back(v[pos]);
    subset(v,pos+1,last,subs);
    subs.pop_back();
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>subs;
        subset(nums,0,nums.size(),subs);
        return vv;
    }
};
