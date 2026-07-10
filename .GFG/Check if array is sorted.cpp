// class Solution {
//   public:
//     bool isSorted(vector<int>& arr) {
//         // code here
//         if(arr.size()==1){
//             return true;
//         }
//         else{
//             int i=0;
//             int j=i+1;
//             while(j<arr.size()){
//                 if(arr[i]>arr[j]){
//                     i++;
//                     j++;
//                     return false;
//                 }
//                 else if(arr[i]==arr[j] || arr[i]<arr[j]){
//                     i++;
//                     j++;
//                 }
//             }
//             return true;
//         }
//     }
// };