//�򵥼�����
//����һ��ֻ����+-*/�� �Ǹ�����������ʽ������ñ��ʽ��ֵ��

/*˼·��
1.��׺���ʽ���׺���ʽ����ջ�� 
2.�����׺���ʽ ����ջ�� 
*/ 
#include <iostream>
#include <cstdio>
#include<string>
#include<stack>
#include<queue>
#include<map>
using namespace std;
struct node
{
	double num;//������ 
	char op;//������ 
	bool flag;//ture Ϊ����flase Ϊ�� 
};
string str;
stack<node> s;
queue<node> q;
map<char,int> op; 
void Change()
 {
 	double num;
 	int i=0;
 	node t;
 	while(i<str.length())
 	{
 		if (str[i]>='0'&&str[i]<='9')
 		{
 		 t.flag=true;
 		 t.num=str[i++] -'0';
 		 while(i<str.length() && str[i]>='0'&&str[i]<='9')
 		 {
 		 	t.num=t.num * 10 +(str[i]-'0');i++;
 		 }
 		 q.push(t);
 		}
 		else{
 			t.flag=false;
 			while(!s.empty() && op[str[i]]<=op[s.top().op])
 			{
 				q.push(s.top());
 				s.pop();
 			}
 			t.op=str[i];
 			s.push(t);
 			i++;
 		}
 		
 	}
 	while(!s.empty())
 		{
 			q.push(s.top());
 			s.pop();
 		}
 }
double Cal()
{
double t1,t2;
	node c,t;
	
	while(!q.empty())
	{
		
		c=q.front();
		q.pop();
		if(c.flag==true) s.push(c);
		else
		{
			t2=s.top().num;
			s.pop();
			t1=s.top().num;
			s.pop();
			t.flag=true;
			if(c.op=='+')  t.num=t1+t2;
			else if (c.op=='-') t.num=t1-t2;
			else if(c.op=='*')  t.num=t1*t2;
			else t.num=t1/t2;
			s.push(t);
		}
	}
	return s.top().num;
}
 
int main()
{
	op['+']=op['-']=1;//���ò��������ȼ�
	op['*']=op['/']=2;
	while(getline(cin,str),str!="0")
	{
		for(string::iterator it =str.end();it!=str.begin();it--)
		{
			if(*it==' ')  str.erase(it);
		}
	
	 while(!s.empty())  s.pop();
	 Change();//��---��
	 printf("%.2f\n",Cal()); 
}
return 0;
} 
 
