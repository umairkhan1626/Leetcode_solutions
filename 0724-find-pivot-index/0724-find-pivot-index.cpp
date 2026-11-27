class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        // int ans=-1,l,r;
        // for(int i=0; i<nums.size(); i++){
        //     int s1=0, s2=0;
        //     for(int j=0; j<i; j++){
        //         s1+=nums[j];
        //     }
        //     for(int k=i+1; k<nums.size(); k++){
        //         s2+=nums[k];
        //     }
        //     if(s1==s2){
        //         ans=i;
        //         break;
        //     }
        // }
        // return ans;                                     // time complexity - o(n^2)

        int total=0,left=0;
        for(int i=0; i<nums.size(); i++){
            total+=nums[i];
        }
        for(int i=0; i<nums.size(); i++){
            int right = total-left-nums[i];
            if(left==right){
                return i;
            }
            left+=nums[i];
        }
        return -1;                                       // time complexity - o(n)
    }
};