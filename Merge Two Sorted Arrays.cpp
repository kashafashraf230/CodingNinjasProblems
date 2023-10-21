Google Docs Link: https://docs.google.com/document/d/1DM3CBS6AiBVOTKZO_0unjfn81Km47_sr7A4G6KKuLdA/edit?usp=sharing



#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.

	int j =0 ;

	for(int i = m ; i < m+n; i++){
		arr1[i] = arr2[j];
		j++;
	}

	sort(arr1.begin(), arr1.end());

	return arr1;
}