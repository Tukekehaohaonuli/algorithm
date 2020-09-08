#include<iostream>
#include<climits>
#define f(i,j,n) for(int i=j;i<n;i++)
int main(){
	using namespace std;
	int n;
	cin >>n;
	int num[6],price[6];
	f(i,0,3){
		cin >>num[i]>>price[i];
	}
	int endprice=0;
	int sum=0;
	int min=INT_MAX;
	f(i,0,3){
		while(sum<n){
			sum+=num[i];
			endprice+=price[i];
		}
		if(endprice<min){
			min=endprice;
		}
		sum=0;
		endprice=0;
	}
	cout<<min;
	return 0;
}
