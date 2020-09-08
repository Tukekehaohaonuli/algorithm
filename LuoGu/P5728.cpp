#include<iostream>
#define f(i,j,n) for(int i=j;i<n;i++)
int sub(int a,int b){
	return a>b?a-b:b-a;
}
int main(){
	using namespace std;
	int n;
	cin>>n;
	const int N=1001;
	int temp[N][3];
	f(i,0,n)
		f(j,0,3)
		cin>> temp[i][j];
	int sum1=0,sum2=0,ans=0;
	f(i,0,n-1)
		f(j,i+1,n){
			if(sub(temp[i][0],temp[j][0])<=5&&sub(temp[i][1],temp[j][1])<=5&&sub(temp[i][2],temp[j][2])<=5){
				sum1=temp[i][0]+temp[i][1]+temp[i][2];
				sum2=temp[j][0]+temp[j][1]+temp[j][2];
				if(sub(sum1,sum2)<=10)
				 {
					ans++;
					sum1=0;
					sum2=0;
				}
			}
		}
	cout << ans;
	return 0;
} 
