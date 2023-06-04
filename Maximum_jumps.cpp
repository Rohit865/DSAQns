long long Maxmimumjumps(long long arr[],long long n){
    if(arr[0]==0&&n>1)return -1;
        if(n==1)return 0;
        long long  j=0,pos=0,des=0;
        for(long long i=0;i<n-1;i++){
            des=max(des,arr[i]+i);
            if(pos==i){
                pos=des;
                j++;
            }
              if(i==pos){
                return -1;
            }
        }
        return j;
}
void inputarray(long long arr[], long long n){
   for(int i=0;i<n;i++){
      cin>>arr[i];
	}
}

int main(){
long long  t;
cin>>t;
while(t--){
long long n;
cin>>n;
long long arr[n];
inputarray(arr,n);
//function call
long long ans=solve(arr,n);
cout<<ans<<endl;
}

return 0;
}
