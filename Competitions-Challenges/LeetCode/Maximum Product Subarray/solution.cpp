class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int cur_max = 0, cur_min = 0, cur= INT_MIN;
        for(const int& ele: nums){
            cur = max(cur, ele);
            if(ele > 0){
                cur_max = cur_max?cur_max * ele : ele;
                cur_min = cur_min * ele;
            }
            else if(ele < 0){
                int temp = cur_max;
                cur_max = cur_min * ele;
                cur_min = temp?temp * ele:ele;
            }
            else{
                cur_max = cur_min = 0;
                cur = max(cur, 0);
            }
            if(cur_max) cur = max(cur, cur_max);
        }
        return cur;
    }
};