#include<bits/stdc++.h>
int main(){
	using namespace std;
	int ans=0;
	int a;
	char b;
	cin >>a;
	ans+=a;
	cin >> b>>a;
	while(b=='+'||b=='-'){
		cin >>a;
		if(b=='+')
		ans+=a;
		else
		ans-=a;
		cin >>b>>a;
	}
	cout << ans;
	return 0;
}
