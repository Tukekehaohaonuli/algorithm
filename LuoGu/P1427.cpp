#include<iostream>
int main(){
	using namespace std;
	int temp[101];
	int i;
	for(i=0;i<100;i++){
		cin>>temp[i];
		if(temp[i]==0){
			break;
		}
	}
	for(int j=i-1;j>=0;--j){
		cout<<temp[j]<<" ";
	}
	return 0;
}
