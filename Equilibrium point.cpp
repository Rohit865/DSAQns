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
// void solve1(long long arr[], long long n){
 
// }

int solve2(long long arr[], long long n){
//    int firstElement,totalSum=0,sumTillNow=0;
//    //bool isEqual=false;
//    for(firstElement=0;firstElement<n;firstElement++){
//            totalSum+=arr[firstElement];
//           }

//           for(int element=0;element<n;element++){
//             if(sumTillNow==totalSum-sumTillNow-arr[element]){
//                 return element+1;
//             }
//             sumTillNow+=arr[element];
//           }
// return -1;
      int left=0,right=n-1,leftsum=0,rightsum=0;
      while(left<=right){

              if(left==right&&leftsum==rightsum){
                return left+1;
              }

              if(leftsum<rightsum){
                leftsum+=arr[left];
                left++;
              }
              else{
                rightsum+=arr[right];
                right--;
              }

      }
      return -1;
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
long long ans=solve2(arr,n);
//int ans=solve1(arr,n);
cout<<ans<<endl;
}

return 0;
}
