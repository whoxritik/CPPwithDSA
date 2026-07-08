// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         if(k>nums.size()) k=k%nums.size();
//         for(int i=0, j=nums.size()-k-1; i<j; i++,j--){
//             int t = nums[i];
//             nums[i] = nums[j];
//             nums[j] = t;
//         }

//         for(int i=nums.size()-k, j=nums.size()-1; i<j; i++,j--){
//             int t = nums[i];
//             nums[i] = nums[j];
//             nums[j] = t;
//         }

//         for(int i=0, j=nums.size()-1; i<j; i++,j--){
//             int t = nums[i];
//             nums[i] = nums[j];
//             nums[j] = t;
//         }

//     }
// };





// class Solution {
// public:

// void kRotate(int i, int j, vector<int>& nums){
//     while(i<j){
//         int temp = nums[i];
//         nums[i] = nums[j];
//         nums[j] = temp;
//         i++;
//         j--;
//     }
// }
//     void rotate(vector<int>& nums, int k) {
//         if(k>nums.size()) k=k%nums.size();

//         kRotate(0,nums.size()-k-1,nums);
//         kRotate(nums.size()-k,nums.size()-1,nums);
//         kRotate(0,nums.size()-1,nums);

//     }
// };