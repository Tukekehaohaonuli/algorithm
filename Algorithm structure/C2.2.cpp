#include<iostream>
int distance(int x);
int main(){
	using namespace std;
	cout <<"Please intput long:";
	int x;
	cin>>x;
	int ma=distance(x);
	cout << x      <<"distance ="          << ma        <<"ma"          << endl; 
} 
int distance(int x){
	return x*220;
}
