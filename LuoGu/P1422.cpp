#include<iostream>
int main(){
	using namespace std;
	double a;
	cin >>a;
	double sum=0;
	if(a<=150)
	sum=0.4463*a;
	else if(a<=400)
	sum=0.4463*150+(a-150)*0.4663;
	else
	sum=150*0.4463+250*0.4663+(a-400)*0.5663;
	cout <<fixed;
	cout.precision(1);
	cout<<sum;
	return 0;
}
