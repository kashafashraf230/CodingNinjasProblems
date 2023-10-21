Problem Link: https://www.codingninjas.com/studio/problems/move-zeros-to-left_1094877

Google Docs Link: https://docs.google.com/document/d/1DM3CBS6AiBVOTKZO_0unjfn81Km47_sr7A4G6KKuLdA/edit?usp=sharing

#include <bits/stdc++.h> 
void moveZerosToLeft(int *arr, int n) 
{
    
    int i=n-1;    

      for(int j=n-1;j>=0;j--){        

          if(arr[j]!=0){            

              swap(arr[i],arr[j]);            

              i--;        

            }    

        }

}
