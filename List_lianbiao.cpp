//链式存储
//存储
typedef struct LNode *List;
typedef LNode
{
	List Next;
	ElementType Data;
} ;
//求表长
int Length(List P)
{
	List q=P;
	int i=0;
	while (q)
	{
		q=q->Next; 
		i++;
	}
return i;
} 
//查找（按序号查找）
List FindKth(int k,List L)
{
	List P=L;
	int i;
	for(i=1;i<k&&P;i++)
	{
		P=P->Next;
	}
	if(i==k) return P;
	else  return NULL;
	 
} 
//按值查找
List Find (ElementType x,List L)
{
	List P=L;
	while(P&&P->Data!=x)
	{
		P=P->Next;
	}
	
	return P;
} 
//插入
List Insert (ElementType x,int i,List L)
{
	List P,S;
	if(i==1)
	{
		S=(List) malloc (sizeof(LNode));
		S->Data=x;
		S->Next=L;
		L=S;
	}
	P=Findkth(i-1,L);
	if(!P) 
	{
		printf("不合法")；
		return NULL;
	 
	}
	else 
	{
		S=(List) malloc (sizeof(struct LNode));
		S->Data=x;
		S->Next=P->Next;
		P->Next=S; 
		return L;
	}
} 

//删除
List Delete(int i,List L)
{
	List P,S;
	if(i==1)
	{
		S=L;
		L=L->Next;
		free(S);
		return L;
	}
	P=Findkth(i-1,L);
	if(!p)
	{
		printf("位置不存在");
		return NULL; 
	}
	else if(P->Next==NULL)
	{
		printf("位置不存在");
		return NULL; 
	}
	else 
	{
		S=P->Next;
		P->Next=S->Next;
		free(S);
		return  L;
	}	
	
} 





