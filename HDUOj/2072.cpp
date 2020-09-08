#include<cstdio>
#include<string>
#include<set>
using namespace std;
int main(){
	string s;
	set<string> s;
	while(scanf("%s",&s),s!="#"){
		while(scanf("%s",&s),s!='\n'){
			s.insert(s);
		}
		printf("%d",s.size());
	}
	return 0;
}
