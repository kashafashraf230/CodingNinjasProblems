Problem Link: https://www.codingninjas.com/studio/problems/occurs-once_1214969?leftPanelTab=0

Google Docs: https://docs.google.com/document/d/1DM3CBS6AiBVOTKZO_0unjfn81Km47_sr7A4G6KKuLdA/edit?usp=sharing

#include <bits/stdc++.h> 
int occursOnce(vector<int> &a, int n){
	// Write your code here.
	sort(a.begin(), a.end());

	int occursOnce = a[0];

	for(int i = 1; i < n; i++){

		if(a[i] != a[i-1] && a[i] != a[i+1]) return occursOnce = a[i];
	}

	return occursOnce;
}
