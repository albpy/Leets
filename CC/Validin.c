#include<stdio.h>
#include<stdbool.h>

int main(){
	char stri[] = "+9asd1.93e25";
	char cur_char;
	char *s=stri;
	int i = 0;
	bool decimal=false;
	bool numbrseen=false;
	if (stri[i]=='+'||stri[i]=='-'){
		i++;
		//printf("(%d)\n",i );
	}

	while(i<(sizeof(stri)/sizeof(stri[0]))){
		cur_char=stri[i];
		if((cur_char>='A'&&cur_char<='Z')||(cur_char>='a'&&cur_char<='z')){
			if(cur_char!='E'||cur_char!='e')
				return false;
			else{
				return numbrseen==true&&(cur_char>='0'&&cur_char<='9');
				numbrseen=true;
			}
		

		}
		else if(cur_char=='.'){
			if(decimal==true){
				return false;
			}else{
				decimal=true;
	
			}
		}else if(cur_char=='+'||cur_char=='-'){
			return false;
		}else{numbrseen=true;}
		i++;
	}
	return numbrseen;
	printf("%d\n", decimal);
	
	
}		