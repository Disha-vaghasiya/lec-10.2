#include<stdio.h>
int length(){
	int  i;
	int len=0;
	char  str[100];

	printf("enter string:-");
	scanf("%s",&str);
	
	for(i=0; str[i]>'\0'; i++){
	len++;
	}
	
	return len;
}
void main(){
	int s;
	s=length();
	printf("length is : %d",s);
	
}
