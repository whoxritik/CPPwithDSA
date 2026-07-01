// #include <iostream>
// #include<vector>
// using namespace std;

// int main() {
// 	int n;
//     cin>>n;
//     vector<int> v;
//     for(int i=0; i<n; i++){
//         int q;
//         cin>>q;
//         v.push_back(q);
//     }
//     int x;
//     cin>>x;
//     for(int i=0; i<=n-2; i++){
//         for(int j=i+1; j<=n-1; j++){
//             if(v[i]+v[j]==x){
//                 cout<<v[i]<<" "<<v[j]<<endl;
//             }
//         }
//     }
// }



// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {
// 	int n;
//     cin>>n;
//     vector<int> v;
//     for(int i=0; i<n; i++){
//         int q;
//         cin>>q;
//         v.push_back(q);
//     }
//     int x;
//     cin>>x;
//     for(int i=n-1; i>=1; i--){
//         for(int j=i-1; j<=0; j--){
//             if(v[i]+v[j]==x){
//                 cout<<v[j]<<" "<<v[i]<<endl;
//                 break;
//             }
//         }
//     }
// }




#include <iostream>
#include <unordered_set>
using namespace std;
int main() {
    int n, x;
    cin >> n;
    if (n < 2) {
        cout << "0" << endl; // Not enough elements
        return 1;
    }
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cin >> x;
    unordered_set<int> seen;
    bool pairFound = false;
    for (int i = 0; i < n; ++i) {
        int complement = x - arr[i];
        if (seen.find(complement) != seen.end()) {
            cout << complement << " " << arr[i] << endl;
            pairFound = true;
            break; // Stop after finding the first pair
        }
        seen.insert(arr[i]);
    }
    if (!pairFound) {
        cout << "No pair found." << endl;
    }
    return 0;

}