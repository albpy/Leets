#include<stdio.h>
#include<stdbool.h>
int main(){
	bool isNumber(char *s){

	    int n, m;
	    while(*s == ' ') s++;
	    n=m=0;
	    if(*s == '+' || *s=='-')s++;
	    while(*s>='0' && *s<='9'){
	        n++;
	        s++;
	    }
	    if (*s=='.'){
	        s++;
	        while(*s>='0'&& *s<='9'){
	            m++;
	            s++;
	        }
	        if(!n &&!m) return false;
	    }else if(!n) {
	        return false;
	    }
	    if(*s=='e'||*s=='E'){
	        s++;
	        if(*s=='+'||*s=='-')
	            s++;
	        n=0;
	        while(*s>='0' && *s <='9'){
	            n++;
	            s++;
	        }
	        if(!n) return false;
	    }
	    while(*s == ' ') s++;
	    return *s == 0 ? true: false; 
	}	
	printf("%d",isNumber("34e5.6"));
}
