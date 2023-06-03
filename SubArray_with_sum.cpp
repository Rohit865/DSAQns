#include<iostream>
using namespace std;
void subarray(int arr,int size,int sum){
   int currsum=0,j=0;
      for(int i=0;i<n;i++){
         currsum+=arr[i];
         while(currsum>s&&j<=i){
             currsum-=arr[j++];
         }
         if(currsum==s&&j<=i){
             cout<<j+1<<" "<<i+1<<endl;
         }
    }
    cout<<-1<<endl;;
}
int main(){
  int arr[]={1,2,3,5,7};
  int size= sizeof(arr)/sizeof(int);
  subarray(arr,size,10);
}

//Sliding Window Technique
