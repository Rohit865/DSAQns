   vector<pair<int,int>>v;
        pair<int,int>p;
       unordered_map<int,int>mp;
       for(int i=0;i<N;i++){
           mp[a[i]]++;
       }
       
       for(int i=0;i<M;i++){
           if(mp.find(X-b[i])!=mp.end()){
               p.first=X-b[i];
               p.second=b[i];
               v.push_back(p);
           }
           
       }
       sort(v.begin(),v.end());
        return v;
