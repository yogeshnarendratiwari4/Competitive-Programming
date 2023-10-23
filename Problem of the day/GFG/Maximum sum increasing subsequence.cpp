int maxSumIS(int arr[], int n)  
	{  
	   vector<int> dp(n,0);
      for(int i=0 ; i<n ; i++) dp[i] = arr[i];
	    for(int ind=1 ; ind<n ; ind++){
	        for(int prev = 0 ; prev<ind ; prev++){
	            if(arr[prev]<arr[ind]){
	                if(dp[prev]+arr[ind]>dp[ind]) {
	                    dp[ind] = arr[ind]+dp[prev];
	                    
	                }
	            }
	        }
	    }
	        int ans = -1e9;
	        for(int i=0 ; i<n ; i++) ans = max(ans,dp[i]);
	        return ans;
	        
	    }