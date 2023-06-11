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
vector<pair<int,int>> solve2(long long arr[],long long arr1[], long long n,long long m ,long long x){//------------------>Solve Inside This function---------------------->
      unordered_map<int,int>mp;
     vector<pair<int,int>>v;
      pair<int,int>p;
      for(int i=0;i<n;i++){
      	mp[arr[i]]++;
      }


      for(int i=0;i<m;i++){
      	if(mp.find(x-arr1[i])!=mp.end()){
               p.first=x-arr1[i];
               p.second=arr1[i];
               v.push_back(p);
      	}
      }

      sort(v.begin(),v.end());
      return v;
}




int main(){
//---------------------->Test Case-------------------------------------------<
long long t;
cin>>t;
while(t--){
long long n,m,X;
cin>>n>>m>>X;
long long arr[n];
long long arr1[m];
inputarray(arr,n);
inputarray(arr1,m);
//--------------------->Function calling--------------------------------------< 
vector<pair<int,int>>v=solve2(arr,arr1,n,m,X);
int sz=v.size();
if(sz==0){
	cout<<-1<<endl;
}
else{
	for(int i=0;i<sz;i++){
		if(i==0){
           cout<<v[i].first<<" "<<v[i].second;

		}
		else{
			cout<<", "<<v[i].first<<" "<<v[i].second;
		}
	}
	cout<<endl;
}
//printvec2d(v);
}

return 0;
}
