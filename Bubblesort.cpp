//冒泡排序
//1.每次向前走一步，逆序就交换； 
//2.一趟之后，有序性+1； 
void Bubblesort1(ElementType A[],int N)
{
	int i=0,j=0;
	for(i=N-1;i>=0;i--)
	{
		for(j=0;j<i-1;j++)
		{
			if(A[j]<=A[j+1])  break;
			else swap(A[j],A[j+1]);
		}		
	} 
} 
//改进版
//有时运气很好，有一段原本就有序
//记住最后一次swap的位置，下次直接跳过顺序部分
 void Bubblesort(ElementType A[],int N)
{
	int i=0,j=0;
	int flag=N-1; //记下最后一次交换的位置--数组下标 
	for(i=N-1;i>=0;i--)
	{
		for(j=0;j<flag;j++) 
		{
			if(A[j]<=A[j+1])  break;
			else 
			{
				swap(A[j],A[j+1]);
				flag=j;
			}
		}		
	} 
} 
 














 
