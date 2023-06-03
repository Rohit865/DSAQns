#include<iostream>
using namespace std;
//1st Approach
void find(int arr[], int N){
int total = (N) * (N + 1) / 2;
  int sum=0;
  for(int i=0;i<n;i++){
    sum+=arr[i];
  }
  cout<<total-sum<<endl;
}
//second approach
void find(int arr[], int N){
   sort(array.begin(),array.end());
        int i=1;
        for(int j=0;j<n;j++){
            if(array[j]!=i){
               cout<< i<<endl;;
        }
        i++;
}
int main(){
int arr={1,2,3,5};
  int size=5;
  find(arr,size);
}
