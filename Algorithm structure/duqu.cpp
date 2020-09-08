#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ifstream in;
	in.open("student.txt");
	string str;
	while(getline(in,str)){
		cout<<str<<endl;
	}
	return 0;
}
