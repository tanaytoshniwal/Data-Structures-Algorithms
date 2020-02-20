class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> uniq;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0;i<n-2;i++){
            int x = i+1, y = n-1;
            while(x<y){
                int sum = nums[i]+nums[x]+nums[y];
                if(sum == 0){
                    vector<int> temp(3);
                    temp[0] = nums[i];
                    temp[1] = nums[x];
                    temp[2] = nums[y];
                    uniq.insert(temp);
                    x++;
                    y--;
                }
                else if(sum > 0){
                    y--;
                }
                else if(sum < 0){
                    x++;
                }
            }
        }
        vector<vector<int>> res(uniq.begin(), uniq.end());
        return res;
    }
};