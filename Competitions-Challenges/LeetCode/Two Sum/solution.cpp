class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> st;
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            if(st.find(target-nums[i]) != st.end()){
                res.push_back(st[target-nums[i]]);
                res.push_back(i);
                break;
            }
            else{
                st[nums[i]] = i;
            }
        }
        return res;
    }
};