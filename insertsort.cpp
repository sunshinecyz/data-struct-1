//插入排序
//每次从乱序中拿出一个元素 ，向前查找比它小的元素
//insert 进去
void insertsort(ElementType A[],int n)
{
	int i;
	int j;
	ElementType tmp;
	for(i=1;i<N;i++)
	{
		j=i;tmp=A[i];
		while(A[i]<A[j-1] ||j>0)
		{
			A[j-1+1]=A[j-1];
			j--;
		}
		A[j]=tmp;
	}
} 
//插入排序输入敏感 



