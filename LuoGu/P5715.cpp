#include<iostream>
int main(){
	using namespace std;
	int a,b,c;
	cin >>a >>b>>c;
	int temp[101] = {0} ;
	temp[a]++;
	temp[b]++;
	temp[c]++;
	int t=0;
	int i=0;
	while(t<3){
		if(temp[i]!=0)
		{	cout << i <<' ';
		t++;
		
		temp[i]--;
		i=0;
		}
		i++;
	}
	return 0;
}
