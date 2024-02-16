// // // #include <bits/stdc++.h>
// // // using namespace std;

// // // int main() {
// // // 	// your code goes here
// // // //    int t;
// // // //    cin>>t;
// // // //    while(t--){

   
// // // //    }
// // // string s;
// // // cin>>s;
// // // vector<string>str;
// // // int j=s.size()-1;
// // // for(int i=0;i<j;i++){
// // // if(s[i]!='+'){
// // //     str.push_back(s[i]);
// // // }
// // // }
// // // // int n=t.size();
// // // sort(str.begin(),str.end());
// // // for(int i=0;i<str.size();i++){
// // //     cout<<str[i]<<"+";
// // // }
// // // cout<<endl;

// // // }

// // #include <bits/stdc++.h>

// // using namespace std;

// // int main(){
    
// //     string s;
// //     cin >> s;
// //     vector<char> v;
// //     for(auto &c :s){
// //         if(c=='1' || c=='2' || c=='3'){
// //             v.push_back(c);
// //         }
// //     }
// //     sort(v.begin(), v.end());
// //     for (int i = 0; i < v.size(); ++i)
// //     {
// //         if(i==0)
// //             cout << v[i];
// //         else
// //             cout<< '+'<<v[i];
// //     }


// //     return 0;
// // }


// #include <iostream>
// #include <vector>

// using namespace std;

// pair<int, int> max_min_people(int T, vector<int>& N) {
//     pair<int, int> result(0, 0);
//     for (int i = 0; i < T; i++) {
//         int max_people = 0;
//         int min_people = 0;
//         vector<bool> used(N[i], false);
//         for (int j = 0; j < N[i]; j++) {
//             if (!used[j]) {
//                 max_people++;
//                 min_people++;
//                 int k = j + 1;
//                 while (k < N[i] && !used[k]) {
//                     max_people++;
//                     k++;
//                 }
//                 for (int l = j; l < k; l++) {
//                     used[l] = true;
//                 }
//             }
//         }
//         result.first = max(result.first, max_people);
//         result.second = min(result.second, min_people);
//     }
//     return result;
// }

// int main() {
//     int T;
//     cin >> T;
//     vector<int> N(T);
//     for (int i = 0; i < T; i++) {
//         cin >> N[i];
//     }
//     pair<int, int> result = max_min_people(T, N);
//     cout << result.first << " " << result.second << endl;
//     return 0;
// }


#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--){
       int i;
       cin>>i;
       int d=ceil(i/2.0);
       int e=ceil(i/3.0);
       cout<<d<<" "<<e<<endl;;
    }
}