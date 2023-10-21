Problem Link: https://www.codingninjas.com/studio/problems/stocks-are-profitable_893405?leftPanelTab=0

Google Docs: https://docs.google.com/document/d/1DM3CBS6AiBVOTKZO_0unjfn81Km47_sr7A4G6KKuLdA/edit?usp=sharing

#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int size = prices.size();
    int min = prices[0];
    int maximumProfit = 0;
    for(int i= 1; i < size; i++ ){

        if(prices[i] - min > maximumProfit){
            maximumProfit = prices[i] - min;
        }

        if(prices[i] < min){
            min = prices[i];
        }
    }

    return maximumProfit;
}