#include<iostream>
using namespace std;
class Solution{
    public :
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int value=x;
        int ans=0;
        while(x!=0){
            int b=x%10;
            x/=10;
            ans=ans*10+b;
        }
        if(ans==value){
            return true;
        }else{
            return false;
        }
    }
};
int main(){
    Solution s;
    cout<<s.isPalindrome(10)<<endl;
    return 0;
}