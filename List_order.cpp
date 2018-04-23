//顺序存储（数组） 
//存储
#define MAXSIZE 100
typedef struct LNode *List;
struct LNode 
{
	ElementType Data[MAXZISE];
	int last;
} ;

//初始化
List MakeEmpty()
{
	List P;
	P=(List)malloc(sizeof(struct  LNode));
	P->last=-1;
	return P;
} 
//查找
int Find(ElementType x,List P)
{
	int i=0;
	for(i=0;i<=P->last;i++)
	{
		if(x==p->Data[i])
		return i;
	}
	return -1;
} 
//插入
 void Insert (ElementType x,int i,List L)
 {
 	if(p->last==MAXSIZE-1)
 	{
 	printf("表已满！");
 	return ;
 	}
	 if(i<1||i>p->last+2)
	 {
	 printf("位置不合法!\n");
	 return ;
	 }	
	 int j;
	 for(j=P->last;j>=P->Data[i-1];j++)
	 	P->Data[j+1]=P->Data[j];
	 P->Data[i-1]=x;
	 P->last++;
	 return ;
	 } 
 }
 //删除
  void Delete (int i,List P )
  {
  	if(P->last==-1)
  	{
  		printf("表空");
		  return; 
  	}
  	if (i<1||i>P->last+1)
  	{
  		printf("位置不合法");
  		return ;
  	}
  	int j;
  	for(j=i;j<=P->last;j++)
  		P->Data[j-1]=P->Data[j];
  	p->last--;
  	return;
  }
