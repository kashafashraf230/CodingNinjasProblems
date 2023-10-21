Problem Link: https://www.codingninjas.com/studio/problems/pascal-s-triangle_1089580?leftPanelTab=1

Google Docs Link: https://docs.google.com/document/d/1DM3CBS6AiBVOTKZO_0unjfn81Km47_sr7A4G6KKuLdA/edit?usp=sharing

#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.

  vector<vector<long long int>> pascalTriangle;
  
  for(int row = 0; row <n ; row++){

    vector<long long int> inner;
    
    for(int col = 0; col <= row; col++){

      if(row == col || col == 0){
       inner.push_back(1);
      }

      else{

        inner.push_back(pascalTriangle[row-1][col-1]+pascalTriangle[row-1][col]);
      }

    }
     pascalTriangle.push_back(inner);
  }
  return pascalTriangle;

}
