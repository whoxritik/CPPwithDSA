// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         // two pass solution
//         int zeroes = 0;
//         int ones = 0;
//         int twos = 0;
//         for(int i=0; i<nums.size(); i++){
//             if(nums[i]==0) zeroes++;
//             else if(nums[i]==1) ones++;
//             else twos++;
//         }
//         // fill
//         for(int i=0; i<nums.size(); i++){
//             if(i<zeroes) nums[i]=0;
//             else if(i<(zeroes+ones)) nums[i]=1;
//             else nums[i]=2;
//         }
//         return;
//     }
// };





// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         // one pass solution - 3 pointer algorithm (Dutch Flag Algorithm)
//         int lo = 0;
//         int mid = 0;
//         int hi = nums.size()-1;
//         // 1) mid ke baare me socho
//         // 2) 0 to lo-1 -> 0 , hi+1 to end -> 2 , lo to mid-1 -> 1
//         while(mid<=hi){
//             if(nums[mid]==2){
//                 int temp = nums[mid];
//                 nums[mid] = nums[hi];
//                 nums[hi] = temp;
//                 hi--;
//             }
//             else if(nums[mid]==0){
//                 int temp = nums[mid];
//                 nums[mid] = nums[lo];
//                 nums[lo] = temp;
//                 lo++;
//                 mid++;
//             }
//             else if(nums[mid]==1){
//                 mid++;
//             }
//         }
//         return;
//     }
// };