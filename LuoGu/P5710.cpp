#include<iostream>
bool isEven(int x){
	if(x%2==0)
	return true;
	else
	return false;
}
bool isYes(int x){
	if(x>4&&x<=12)
	return true;
	else
	return false;
}
int main(){
	using namespace std;
	int x;
	cin >> x;
	if(isEven(x)&&isYes(x))
	cout <<"1"<< " ";
	else
	cout <<"0"<<" ";
	if((isEven(x)+isYes(x))>=1)
	cout <<"1"<<" ";
	else
	cout <<"0"<<" ";
	if((isEven(x)+isYes(x))==1)
	cout <<"1" <<" ";
	else
	cout << "0" <<" ";
	if(!isEven(x)&&!isYes(x))
	cout <<"1" <<" ";
 	else
 	cout <<"0" <<" ";
 	return 0;
} 
