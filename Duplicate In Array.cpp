Problem Link: https://www.codingninjas.com/studio/problems/duplicate-in-array_893397?leftPanelTab=0

Google Docs: https://docs.google.com/document/d/1DM3CBS6AiBVOTKZO_0unjfn81Km47_sr7A4G6KKuLdA/edit?usp=sharing

#include <bits/stdc++.h> 

int findDuplicate(vector<int> &arr) 
{
    // Write your code here
	sort(arr.begin(), arr.end());

    int occurs = arr[0];

	for(int i = 1; i < arr.size(); i++){

		if(arr[i] == arr[i-1]) return occurs = arr[i];
	}

	return occurs;
}
