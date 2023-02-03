#include<stdio.h>
#include <stdbool.h>
int main(){
	char color[]="AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBBB";
	char *colors=color;
	char *tmp=colors;
	int cnt=0;
	int countA=0;
	int countB=0;
	int len=sizeof(color)-1;
	//printf("%d\n", len);
	//while(*colors!='\0')
	for(int i=0;i<len;i++){
		if(*colors=='A')
			cnt++;
		if(*colors=='B'){
			if(cnt>=3){
				countA+=cnt-2;
			}
			cnt=0;
		}
		*colors++;
	}
	cnt=0;
	for(int j=0;j<len;j++){
		if(*tmp=='B')
			cnt++;
		if(*tmp=='A' || j==len-1){
			if(cnt>=3){
				countB+=cnt-2;
			}
			cnt=0;
		}
		*tmp++;
	}	
	// printf("%d\n", countA );
	// printf("%d\n", countB );
	if(countA>countB){
		printf("%s\n", "true");
	}
	else{
		printf("%s\n", "false" );
	}
	return 0;
}