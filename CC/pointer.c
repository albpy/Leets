/*low byte of mem(RAM) had address 0
int-4 bytes, char-1 bytes ,float-4 requires bytes of memory 
A variable decleration for exmple, int char c; 
it allocates 1bytes of mem it creates an entry for it in an internal structure 
called lookup table says the character type and its address 

pointer are variable stores address of another variable
*/
#include<stdio.h>

int main(){
	int a =1025;
	//int *p = &a;
	//*p= 12;	//derefrencing

	//pointer arithmetic

	// printf("%d\n", p);
	// printf("%d\n", p+1);

	//pointer types, void pointer, pointer arithmetic
//----------------------------------------------------------------
	//int b=1025 == s0000000 00000000 00000100 00000001, where s is signbit
	//int a=1025;
	//char *p0;
	//p0=(char*)p;//typecasting
	// printf("%d, %d\n",p0, *p0);
	// printf("%d, %d\n",p0+1, *(p0+1));

	//void pointer 
	//void *p1;
	//p1=p;
	// printf("%d",p1);
//****************************************************************************

	//pointer to pointer
//  byte1																			       x
//	-------------------------------------------------------------------------------------------
//	|    |    |    |  |  |  |  |  |  |  |  |  |  |  |  | 225 |  |  |  |  |  |  |  |  |  |  5  |
//---------------------------------------------------------------------------------------------
//	 200   201  202										 p						          225
	// int x=6;
	// int *y=&x;
	// int **q=&y;
	// int*** r = &q;
	// printf("%d,%d,%d,%d\n",*y,*(*q),*(*(*r)),(*q));	
	// printf("%d\n",&r);	
	// printf("%d,%d\n",&q,r,&(*r));				
	// printf("%d,%d,%d,%d,%d\n",&y,q,&(*q),*r,&(*(*r)));				
	// printf("%d,%d,%d,%d,%d\n",&x,y,*q,&(*(*q)),*(*r));				



	//pointers as function arguement-call by reference
//-------------------------------------------------------

	int m[4][3]={1,2,3,1,2,5,5,6,9,4,3,2};
	int (*p)[3]=m;
	//printf("%d\n", p+1 );

	int c[3][2][2]={1,2,3,4,5,2,3,4,4,3,2,1};
	int (*d)[2][2] = c;
	printf("%d\n", (c+1));

}
void func()