#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.

	int candidate = arr[0];
	int votes = 1, f = 0;

        for (int i = 0; i < n; i++) {
        
		if(arr[i] == candidate){
			votes++;
		}

		else{
			votes--;
		}

                if (votes == 0) {
                        candidate = arr[i];
                        votes = 1;
                }
        }

		for(int i = 0; i <n; i++){
			if(arr[i] == candidate) f++;
		}

		if(f > n/2) return candidate;
		return -1;
}



------------------------------------------------

int painters(vector<int> &boards, int cap) {

    int n = boards.size();
    int remCap = cap;
    int paintersNumber = 1;
    for(int i = 0; i<n ; i++){

        if(boards[i] < remCap){
        remCap -= boards[i];
        }

        else {
            paintersNumber++;
            remCap = cap-boards[i];
        }
        
    }

    return paintersNumber;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.

    int max_val = 0, sum = 0;
    int n = boards.size();

    for(int i =0; i<n; i++ ){

        sum += boards[i];
        max_val = max(max_val, boards[i]);
    }

    int s = max_val, e = sum, result =0;
    while(s<=e){

        int m= s+(e-s)/2;
        int reqPainters = painters(boards,m);

        if (reqPainters <= k) {
            result = m;     
            e = m-1;
        
        }

        else{
            s = m+1;
        }
    }

    return result;

}

--------------------
int floorSqrt(int n)
{
    // Write your code here.
    if(n==0) return 0;
    int s = 1, e=n, ans = 0;

    while(s<=e){
        int m = s+(e-s)/2;

        if(m*m <= n){
            ans = m;
            s=m +1;
        }
        else e= m-1;
    }

    return ans;
}


----------------------------

bool isPossible(vector<int> &boards, int n, int k, int mid)

{

    int painterCount = 1;

    int unitSum = 0;

    for(int i=0; i<n; i++)

    {

        if(unitSum + boards[i] <= mid)

        {

            unitSum += boards[i];

        }

        else{

            painterCount++;

            if(painterCount>k || boards[i]>mid)

            {

                return false;

            }

            unitSum = boards[i];

        }

    }

    return true;

}

 

int findLargestMinDistance(vector<int> &boards, int k)

{

    int n = boards.size();

    

    int start = 0;

    int sum = 0;

    for(int i=0; i<n;  i++)

    {

        sum += boards[i];

    }

    int end = sum;

    int mid = start+(end-start)/2;

    int ans = -1;

    while(start<=end)

    {

        if(isPossible(boards, n, k, mid))

        {

           ans = mid;

           end = mid - 1; 

        }

        else

        {

            start = mid + 1;

        }

        mid = start+(end-start)/2;

    }

    return ans;

}