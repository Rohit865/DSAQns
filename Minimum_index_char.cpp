#include<bits/stdc++.h>
using namespace std;
#define PI 3.14159
#define add(a,b) (a+b)
#define multiply(a,b) (a*b)
#define divide(a,b) (a/b)
 
void inputarray(long long arr[], long long n){//-------------------------------->Input array of long long-----------------------> 
   for(long long i=0;i<n;i++){
      cin>>arr[i];

    }
}
void printarr(long long arr[], int n){//------------------------------------>Print Array of Long long-------------------------------->
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
void printvec(vector<int>v){//---------------------------------------->Print Vector------------------------------> 
    for(auto x:v){
        cout<<x<<" ";
    }cout<<endl;
}
void printvec2d(vector<vector<int>>vec){//---------------------->print 2D vector------------------------>
     for (int i = 0; i < vec.size(); i++) {
        for (int j = 0; j < vec[i].size(); j++)
            cout << vec[i][j] << " ";
        cout << endl;
    }
}
int solve2(string a, string b){//------------------>Solve Inside This function---------------------->
     

      map<char,int>mp;
      for(int i=0;i<b.length();i++){
      	mp[b[i]]++;
      }
      for(int i=0;i<a.length();i++){
      	if(mp.find(a[i])!=mp.end()){
           return i;
      	}
      }
   return -1;
}
int solve(string a, string b){//------------------>Solve Inside This function---------------------->
     

     string s="";
     for(int i=0;i<a.length();i++){
     	s+=a[i];
     	if(b.find(s))return i;
     	s="";
     }

     return -1;
}




int main(){
//---------------------->Test Case-------------------------------------------<
long long t;
cin>>t;
while(t--){
// long long n;
// cin>>n;
// long long arr[n];
// inputarray(arr,n);
	string a,b;
	cin>>a>>b;
//--------------------->Function calling--------------------------------------< 
int v=solve(a,b);
// printvec2d(v);
cout<<v<<endl;
}

return 0;
}
