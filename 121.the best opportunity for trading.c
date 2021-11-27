#include <stdio.h>
int maxProfit(int* prices, int pricesSize){
    int min=9999,i;
	int best_profit=0;
	for(i=0;i<pricesSize;i++){
        if(prices[i]<min){
            min=prices[i];
        }
        else if((prices[i]-min)>best_profit){
            best_profit=prices[i]-min;
        }
    }
    return best_profit;