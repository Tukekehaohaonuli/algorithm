#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<fstream>
using namespace std;
const int maxn=1010;
struct stuinfo{
	char name[101];
	int id;
	int chinese;
	int math;
	int english;
	int sum;
}stu[maxn];
bool cmp(stuinfo a,stuinfo b){
	if(a.sum!=b.sum)return a.sum>b.sum;
	return a.id<b.id;
}
int main(){
	fstream in("student.txt");
//	in.open("student.txt",ios::in);
	char line[1000];
	in.getline(line,1000);
	int cnt=0;
	while(in>>stu[cnt].name>>stu[cnt].id>>stu[cnt].chinese>>stu[cnt].math>>stu[cnt].english){
		stu[cnt].sum=stu[cnt].chinese+stu[cnt].math+stu[cnt].english;
		cnt++;
	}
	sort(stu,stu+cnt,cmp);
	for(int i=0;i<cnt;i++){
		cout<<stu[i].name<<" "<<stu[i].id<<" "<<stu[i].chinese<<" "<<stu[i].math<<" "<<stu[i].english<<endl;
	}
	return 0;
}

