#include<iostream>
#include<climits>
const int N=3001;
#define f(i,j,n) for(int i=j;i<n;i++) 
int main(){
	using namespace std;
	int n,m;
	cin >> n >>m;
	int temp[N];
	f(i,0,n)
	cin >> temp[i];
	int min=INT_MAX;
	int sum=0;
	f(i,0,n-m+1){
		f(j,i,i+m){
			sum+=temp[j];
		}
		if(sum<min) min=sum;
		sum=0;
	}
	cout <<min;
	return 0;
}
