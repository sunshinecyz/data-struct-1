//˳��洢�����飩 
//�洢
#define MAXSIZE 100
typedef struct LNode *List;
struct LNode 
{
	ElementType Data[MAXZISE];
	int last;
} ;

//��ʼ��
List MakeEmpty()
{
	List P;
	P=(List)malloc(sizeof(struct  LNode));
	P->last=-1;
	return P;
} 
//����
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
//����
 void Insert (ElementType x,int i,List L)
 {
 	if(p->last==MAXSIZE-1)
 	{
 	printf("��������");
 	return ;
 	}
	 if(i<1||i>p->last+2)
	 {
	 printf("λ�ò��Ϸ�!\n");
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
 //ɾ��
  void Delete (int i,List P )
  {
  	if(P->last==-1)
  	{
  		printf("���");
		  return; 
  	}
  	if (i<1||i>P->last+1)
  	{
  		printf("λ�ò��Ϸ�");
  		return ;
  	}
  	int j;
  	for(j=i;j<=P->last;j++)
  		P->Data[j-1]=P->Data[j];
  	p->last--;
  	return;
  }
