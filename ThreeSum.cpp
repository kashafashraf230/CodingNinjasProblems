GoogleDocsLink: https://docs.google.com/document/d/1DM3CBS6AiBVOTKZO_0unjfn81Km47_sr7A4G6KKuLdA/edit?usp=sharing


vector<vector<int>> triplet(int n, vector<int> &arr)
{
    // Write your code here.

    vector<vector<int>> pair;

		sort(arr.begin(), arr.end());
		
		//int i =0;
        //int pointer2 = i+1;

        for(int i = 0; i < n; i++){

            //remove duplicates:
        if (i != 0 && arr[i] == arr[i - 1]) continue;

        int pointer2 = i+1;
        int pointer = n-1;
		while(pointer2 < pointer) {

		if(arr[i]+arr[pointer]+ arr[pointer2] == 0)
		{
                  pair.push_back({arr[i], arr[pointer2], arr[pointer]});
                  //pair.push_back(arr[pointer]);
                  //pair.push_back(arr[pointer2]);
                  pointer--;
                  pointer2++;

                while (pointer2 < pointer && arr[pointer2] == arr[pointer2 - 1]) pointer2++;
                while (pointer2 < pointer && arr[pointer] == arr[pointer + 1]) pointer--;
                  
        }

		else if(arr[i]+arr[pointer] + arr[pointer2] < 0)
		{
            pointer2++;
        }

        else {
			pointer--;
    
		}
                }
    }
				if(pair.size() == 0){
                pair.push_back({-1, -1, -1});
                }

        
                return pair;
}
