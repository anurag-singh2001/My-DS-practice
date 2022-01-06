vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	 vector<int> v;   
	 sort(arr, arr + n, greater<int>());
	 for (int i = 0; i < k; i++)
      v.push_back(arr[i]);
     
     return v; 

	}