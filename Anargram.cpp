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
void printvec(vector<char>v){//---------------------------------------->Print Vector------------------------------> 
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
bool solve2(string a, string b){//------------------>Solve Inside This function---------------------->

       if(a.length()!=b.length()){
      
        return false;
       }

       unordered_map<char,int>mp;
           for(auto x:a){
        mp[x]++;
       }

       for(auto y:b){
       	if(mp.find(y)==mp.end()|| mp[y]==0){
             return false;     
       	}
        else{
           mp[y]--;
           
        }
       }
       	return true;
}




int main(){
//---------------------->Test Case-------------------------------------------<
long long t;
cin>>t;
while(t--){
// long long n;
// cin>>n;
//long long arr[n];
//inputarray(arr,n);
string s,s1;
cin>>s>>s1;

//--------------------->Function calling--------------------------------------< 
bool v=solve2(s,s1);
//printvec2d(v);
if(v==true){
	cout<<"True"<<endl;
}
else{
	cout<<"False"<<endl;
}
}

return 0;
}
