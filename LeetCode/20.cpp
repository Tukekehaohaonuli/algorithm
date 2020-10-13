#include<iostream>
#include<string>
#include<stack>
using namespace std;
class Solution{
    public :
    bool isValid(string s) {
        stack <char> vi;
        char c;
        if(s=="")
        return true;
        for(int i=0;i<s.size();i++){
            switch (s[i]){
                case '(':vi.push(s[i]);
                break;
                case '{':vi.push(s[i]);
                break;
                case '[':vi.push(s[i]);
                break;
                case ')':
                    c=vi.top();
                    vi.pop();
                    if(c!='(')
                    return false;
                ;

                case '}':
                    c=vi.top();
                    vi.pop();
                    if(c!='{'){
                        return false;
                    }
                ;
                case ']':
                    c=vi.top();
                    vi.pop();
                    if(c!='['){
                        return false;
                    }
                ;
            }
        }
        if(vi.size()==0)
        return true;
        else
        return false;
    }
};
int main(){
    Solution s;
    cout<<s.isValid("()")<<endl;;
    system("pause");
    return 0;
}