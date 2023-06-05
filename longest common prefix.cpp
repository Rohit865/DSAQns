  string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        string ans="";
        for(int i=0;i<arr[0].length();i++){
            char ch=arr[0][i];
            int j=1;
            while(arr[j][i]==ch&&j<N){
                j++;
            }
            
            if(j==N){
                ans.push_back(ch);
            }
            else{
                break;
            }
        }
        if(ans.empty()){
            return "-1";
        }
        else{
            return ans;
        }
