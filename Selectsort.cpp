//Selectsort
//每次从无序的元素中选出最大的放入有序中--减而治之 
void Selectsort(ElemetType A[],int N)
{
	int i,j;ElementType tmp;
	for( i=N-1;i>0;i--  )
	{
	tmp=A[0];
		for(j=0;j<=i;j++)  //选出最大元素 
		{
			if(tmp<A[j])
			swap(A[j],tmp);
		 }
		 swap(tmp,A[i]);
	}	
} 
//选择排序与冒泡排序区别
//选择：减而治之--每一次减掉最大的一个元素，使规模减小 
//冒泡：贪心 -- 每一步使两个元素从逆序-顺序 


