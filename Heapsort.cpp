//堆排序 
//由选择排序改进而来 
//选择排序取最大元素效率低  o(N^2)
// 使用最大堆取出最大元素 o(NlogN) 
void heapsort(ElementType A[],int N)
{
	BuildHeap(A);
	ElementType tmp;
	for(i=N-1;i>0;i--)
	{
		swap(A[i],A[0]);
		AdjustHeap(A,0,i-1);//将未排序数组重新调整为最大堆 
	}
	
}
