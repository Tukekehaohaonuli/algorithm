#include<iostream>
const int N=101;
#define f(i,j,n) for(int i=j;i<n;i++) 
int main(){
	using namespace std;
	int temp[N];
	int n;
	cin >>n;
	int k=n;
	int num=0;
	n--;
	while(n>=0){
		cin >> temp[n];
		f(i,n+1,k){
			if(temp[i]<temp[n])
			num++;
		}
		cout << num <<' ';
		num=0;
		n--;
	}
}
