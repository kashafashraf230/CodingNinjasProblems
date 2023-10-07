GoogleDocsLink: https://docs.google.com/document/d/1DM3CBS6AiBVOTKZO_0unjfn81Km47_sr7A4G6KKuLdA/edit?usp=sharing

#include<bits/stdc++.h>

vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
{
	// Write your code here.
        
		vector<pair<int,int>> pair;

		sort(arr.begin(), arr.end());
		int pointer = n-1;

		int i =0;

		while(i < pointer) {

		if(arr[i]+arr[pointer] == target)
		{
            pair.push_back({arr[i], arr[pointer]});
			i++;
			pointer--;
        }

		else if(arr[i]+arr[pointer] < target)
		{
            i++;
        }

        else {

			pointer--;

		}
                }

				if(pair.size() == 0){
			pair.push_back({-1, -1});
		}
        
                return pair;
}
