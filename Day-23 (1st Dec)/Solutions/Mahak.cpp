class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int a = 1, b=1;;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i]!=nums[i-1]){
                nums[b]=nums[i];b++;
            }
        }
        return b;
    }
};