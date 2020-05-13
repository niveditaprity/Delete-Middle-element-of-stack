stack<int> deleteMid(stack<int>s,int sizeOfStack,int current)
{
 if(s.empty()||sizeOfStack==current)
{
return s;
}
int x=s.top();
s.pop();
stack<int> temp=deleteMid(s,sizeOfStack,current+1);
if(current!=sizeOfStack/2)
{
temp.push(x);
}
return temp;   //Your code here
}
