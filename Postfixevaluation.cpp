#include<iostream>
using namespace std;
class Stack
{
 public:
   int top=-1;
   int n[100];
   void push(int x)
   {
      n[++top]=x;
   }

   void pop()
   {
      top=top-1;
   }
   void check(int len,string str)
   {
    for(int i=0;i<len;i++)
    {
       char c3=str[i];
       if(c3==' ')
        continue;
        else if(c3=='+'||c3=='-'||c3=='*'||c3=='/')
        {
           int op2=n[top];
           n.pop();
           int op1=n[top];
           n.pop();
           int res=evaluate(c3,op1,op2);
           n.push(res);
        }
        else if(c3>='0'&&c3<='9')
        {
            n.push(c3);
        }
    }
    cout<<n[top];
    }
    int evaluate(char c3,int op1,int op2)
    {
       if(c3=='+')
         return op1+op2;
    else if(c3=='-')
    {
          return op1-op2;
    }
    else if(c3=='*')
    {
       return op1*op2;
    }
    else if(c3=='/')
    {
        return op1/op2;
     }
    }
};
int main()
{
    Stack s;
    string str;
    cout<<"Enter a string:\n";
    getline(cin,str)
    int len=str.length();
     s.check(len,str);
    return 0;
}
