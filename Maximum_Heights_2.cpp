#include<bits/stdc++.h>
using namespace std;
#define PI 3.14159
#define add(a,b) (a+b)
#define multiply(a,b) (a*b)
#define divide(a,b) (a/b)
 
void inputarray(int arr[], int n){//-------------------------------->Input array of long long-----------------------> 
   for(int i=0;i<n;i++){
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
int solve2(int arr[], int n, int k){//------------------>Solve Inside This function---------------------->
    sort(arr,arr+n);
    int max_diff_til_now=arr[n-1]-arr[0];
    int May_be_smallest=arr[0]+k;
    int May_be_largest=arr[n-1]-k;
    int minimum,maximum;
    for(int i=0;i<n-1;i++){
    	minimum=min(May_be_smallest,arr[i+1]-k);
    	maximum=max(May_be_largest,arr[i]+k);
    	if(minimum<0)continue;
    	max_diff_til_now=min(max_diff_til_now,maximum-minimum);
    }

    return max_diff_til_now;
}




int main(){
//---------------------->Test Case-------------------------------------------<
int t;
cin>>t;
while(t--){
int n;
int k;
cin>>k>>n;
int arr[n];
inputarray(arr,n);
//--------------------->Function calling--------------------------------------< 
int ans=solve2(arr,n,k);
cout<<ans<<endl;
}

return 0;
}
