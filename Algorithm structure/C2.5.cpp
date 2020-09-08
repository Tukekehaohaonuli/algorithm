#include<iostream>
double  temperature(double t){
	return t*1.8+32.0;
}
int main(){
	using namespace std;
	cout << "Please enter a Celsius value:";
	double celsius;
	cin >> celsius;
	cout << temperature(celsius);
}
