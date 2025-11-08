class Solution {
public:
    bool hasDuplicate(vector<int>& nums){

        /*
        Brute forcee -> O(n^2) , O(1)
        int n = nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i] == nums[j]){
                    return true;
                }
            }
        }
        return false;
    */

    int n = nums.size();
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[nums[i]]++;
    }
    for(auto it: mpp){
        if(it.second > 1){
            return true;
        }
    }
    return false;
    }
};
