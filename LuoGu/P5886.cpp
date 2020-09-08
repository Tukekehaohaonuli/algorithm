#include<iostream>
int main(){
	using namespace std;
	int n,m,p;
	cin >> n >> m >> p;
	int *pt=new int [1000001];
//	int pt[1000001]={0};
	int num=0;
	for(int i=0;i<n;i++){
		int a;
		cin >> a;
		for(int j=0;j<a;j++){
			int b;
			cin >> b;
			pt[b]++;
		}
	}
	for(int i=1;i<=m;i++)
		if(pt[i]==p)
		 num++;
	cout << num <<endl;
	for(int i=1;i<=m;i++){
		if(pt[i]==p)
		cout << i << ' ';
	}
	delete [] pt;
	return 0;
}
