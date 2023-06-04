#include<bits/stdc++.h>
using namespace std;
#define PI 3.14159
#define add(a,b) (a+b)
#define multiply(a,b) (a*b)
#define divide(a,b) (a/b)
 

void inputarray(long long arr[], long long n){
   for(long long i=0;i<n;i++){
      cin>>arr[i];

    }
}
void printarr(long long arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
void printvec(vector<int>v){
    for(auto x:v){
        cout<<x<<" ";
    }cout<<endl;
}
void printvec2d(vector<vector<int>>vec){
     for (int i = 0; i < vec.size(); i++) {
        for (int j = 0; j < vec[i].size(); j++)
            cout << vec[i][j] << " ";
        cout << endl;
    }
}
//Write func
// void solve1(long long arr[], long long n){
 
// }


vector<vector<int>> solve2(long long arr[], long long n){
vector<vector<int>>v;
       int mini=0,maxi=0;
       for(int i=1;i<n;i++){
        if(arr[maxi]<arr[i]){
            maxi++;   
        }
        else{
            if(maxi>mini){
                v.push_back({mini,maxi});
            }
            maxi++;
            mini=maxi;
        }
        
       }
       if(maxi>mini){
         v.push_back({mini,maxi});
       }
       return v;
}




int main(){
long long t;
cin>>t;
while(t--){
long long n;
cin>>n;
long long arr[n];
inputarray(arr,n);
//function calong long
//long long ans=solve2(arr,n);
//int ans=solve1(arr,n);
vector<vector<int>>v=solve2(arr,n);
printvec2d(v);
}

return 0;
}
