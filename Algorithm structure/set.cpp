#include<cstdio>
#include<set>
using namespace std;
int main(){
	set<int> st;
	st.insert(3);
	st.insert(5);
	st.insert(9);
	set<int>::iterator it=st.find(5);
	st.erase(it,st.end());
	st.clear();
	printf("%d",st.size());
	for(set<int>::iterator it=st.begin();it!=st.end();it++){
	
}
return 0;
}
