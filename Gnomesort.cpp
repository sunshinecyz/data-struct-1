//Gnomesort 
// 贪心的每次比较两个 
// 顺序则向前走
//逆序则交换，并向回转身逐个比较直至顺序再回头
void Gnomesort(ElementTpey A[],int N) 
{
	int i;
	for(i=0;i<N;i++)
	{
		if(A[i]>A[i+1]) 
	 {
	 	swap(A[i],A[i+1]);
	 	while(A[i]<A[i-1] || i>0)
	 	{
	 		swap(A[i],A[i-1]);
	 		i--;
	 	}
	 }
	}
}



//改进版
// 当遇到一个很小的元素，将它顺序后再转身，很长一段已经有序，再转身会浪费时间
//improve: 记住向回转身的位置，直接跳过中间有序的一段
 void Gnomesort(ElementTpey A[],int N)
{
	int i;int j;
	for(i=0;i<N;i++)
	{
		if(A[i]>A[i+1]) 
	 {
	 	swap(A[i],A[i+1]);
	 	j=i;           //用i记住交换的位置 
	 	while(A[j]<A[j-1] || j>0)
	 	{
	 		swap(A[j],A[j-1]);
	 		j--;
	 	}
	 }
	}
}
