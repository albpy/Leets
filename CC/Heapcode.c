//max and min heap vedio
//heap sort implement by jhon williams
//Approach was opposit to selection sort - selection sort finds the smallest element among n elements and and smallest elements among n-1 elements and so on.
//Heap is a almost complete binary tree - may be the last tree ould be void
//MAX HEAP- when every node is greater than its both the child
//MIN HEAP-Whwn every node is smaller than its both the child
//preorder/postorder of maxheap

//-------------------------Heap sort MAX HEAPIFY-----------------



#include<stdio.h>										//[6,14,3,26,8,18,21,9,5]
#include<conio.h>
void maxheapify(int[], int, int );
void buildHeap(int a[], int n)							
{
	int lastNonLeafNodes=(n/2)-1;
	for(int k=lastNonLeafNodes;k>=0; k--)
		maxheapify(a, n, k);
}
void maxheapify(int a[], int n, int k){
	int max=k, l=2*k+1, r=k*2+2, t;
	if(l<n && a[l]>a[max])
		max=l;
	if(r<=n && a[r] > a[max])
		max=r;
	if(max!=k){
		t=a[k];
		a[k]=a[max];
		a[max]=t;
		maxheapify(a, n, max);
	}
}
// void heapsort(int a[], int size){
// 	int i, t;
// 	for(i=size; i>=2;i--){
// 		t=a[1];
// 		a[1]=a[i];
// 		a[i]=t;
// 		maxheapify(a, 1, i-1);

// 	}
// }
void main(){
	int a[4], i, j, h;
	printf("Enter Array elements:");
	for(i=1; i<4; i++)
		scanf("%d", &a[i]);
	for(h=1; h<4; h++)
		printf("%d",a[h]);
	int n= sizeof(a)/sizeof(a[0]);

	buildHeap(a, n);


	printf("\nSorted array: \n");
	for(j=1;j<4;j++)
		printf("%2d,", a[j]);
	
}