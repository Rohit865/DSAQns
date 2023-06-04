#include<bits/stdc++.h>
using namespace std;
#define PI 3.14159
#define add(a,b) (a+b)
#define multiply(a,b) (a*b)
#define divide(a,b) (a/b)
 


//Write func
void solve1(long long arr[], long long n){

  long long start=0,mid=0,high=n-1;
      while(mid<=high){
        if(arr[mid]==0){
            swap(arr[start],arr[mid]); 
            start++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
       else{
            swap(arr[mid],arr[high]);
            high--;
        }
      }
}

// int solve2(long long arr[], long long n){


// }



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
printarr(arr,n);
}

return 0;
}
