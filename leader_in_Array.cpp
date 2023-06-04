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
//Write func
void solve1(long long arr[], long long n){
vector<int>v;
int max=0;
for(int i=n-1;i>=0;i--){
    if(arr[i]>=max){
        max=arr[i];
        v.push_back(arr[i]);
    }
}
reverse(v.begin(),v.end());
printvec(v);
 
}

// int solve2(long long arr[], long long n){


// }





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
solve1(arr,n);
//printarr(arr,n);
}

return 0;
}
