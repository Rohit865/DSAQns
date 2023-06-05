string isSubset(int a1[], int a2[], int n, int m) {
      sort(a1,a1+n);
      sort(a2,a2+m);
      string yes="Yes";
      string no="No";
      int j=0,i=0;
      while(j<m&&i<n){
          if(a2[j]!=a1[i]){
              
              i++;
              
          }
          else{
             j++;
             i++;
          }
      }
      if(j==m){
          return yes;
      }
      else{
          return no;
      }
      
      //map approach;
    
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[a1[i]]++;
    }
    for(int i=0;i<m;i++){
        if(mp[a2[i]]==0){
            return "No";
        }
        else mp[a2[i]]--;
    }
    return "Yes";
