#include<iostream>
const int N=1000001;
int temp[N];
#define f(i,j,n) for(int i=j;i<n;i++)
int main(){
	using namespace std;
	int n,k;
	cin >>n >>k;
	f(i,0,n-1)
	cin >>temp[i];
	int sum=0;
	f(i,0,n-1)
	sum+=temp[i]-k;
	cout<<sum;
	return 0;
}
