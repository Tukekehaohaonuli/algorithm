#include<iostream>
int main(){
	using namespace std;
	char temp[9];
	cin.getline(temp,9);
	int num=0;
	for(int i=0;i<8;i++)
	if(temp[i]=='1')
	num++;
	cout<<num;
}
