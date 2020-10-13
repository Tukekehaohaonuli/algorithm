#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vi;
    for(int i=0;i<5;i++){
        vi.push_back(i);
    }
    vector<int> ::iterator it;
    for(it=vi.begin();it!=vi.end();it++){
        cout<<*it<<endl;
    }
    system("pause");
    return 0;
}