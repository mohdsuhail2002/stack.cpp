#include<iostream>
using namespace std;
class stack
{
  int s[100];
  int top;
  int size;
  public:
  stack()
  {
      top=-1;
      size=0;
  }
  ~stack()
  {
      top=-1;
      size=0;
  }
  void push(int value)
  {
      top++;
      size++;
      s[top]=value;
  }
  int pop()
  {
      top--;
      size--;
      return s[top+1];
  }
  void modifiedstack()
  {
      int middle=(size+1)/2;
      for(int i=middle;i<size;i++)
      {
          s[i-1]=s[i];
      }
      size--;
      for(int i=0;i<size;i++)
      {
          cout<<s[i]<<" ";
      }
  }
};
int main()
{
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.pop();
    s.push(4);
    s.push(5);
    s.modifiedstack();
    return 0;
}