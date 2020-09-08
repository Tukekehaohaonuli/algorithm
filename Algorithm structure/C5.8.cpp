#include<iostream>
#include<cstring>
int main(){
	using namespace std;
	const int N=100;
	char temp[N][N];
	cin >>temp[0];
	int i=0;
	while(strcmp(temp[i],"done")){
		cout <<temp[i]<<" ";
		i++;
		cin >>temp[i];
	}
	cout <<i;
	return 0;
} 
