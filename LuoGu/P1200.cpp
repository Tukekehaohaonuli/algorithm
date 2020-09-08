#include<iostream>
int main(){
	using namespace std;
	string a,b;
	cin >>a >>b;
	int i=0;
	int ans1=1;
	while(a[i]!='\0'){
		ans1*=(a[i]-64);
		i++;
	}
	int ans2=1;
	i=0;
	while(b[i]!='\0'){
		ans2*=(b[i]-64);
		i++;
	}
	if(ans1%47==ans2%47)
	cout << "GO";
	else
	cout << "STAY";
	return 0;
}
