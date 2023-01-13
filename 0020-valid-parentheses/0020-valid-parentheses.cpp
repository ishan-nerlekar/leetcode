#include<stack>
#include<iostream>
using namespace std;
class Solution {
public:
    
    bool isMatching(char a,char b){
        return ((a=='('&&b==')') || (a=='['&&b==']') || (a=='{'&&b=='}'));            
    }
    
    
    
    bool isValid(string s) {
        stack<char> stack;
        
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                stack.push(s[i]);
            }
            else{
                if(stack.empty()) return false;
                else if(isMatching(stack.top(),s[i])==false) return false;
                else{
                    stack.pop();
                }
            }
        }
        
        
        return stack.empty();
    }
};