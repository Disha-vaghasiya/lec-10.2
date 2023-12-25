#include<stdio.h>
int arraysum(){
	int  i, n;
	int sum=0;
	printf("Enter the size of array:- ");
	scanf("%d",&n);
	int array[n];
	for(i=0; i<n; i++){
		printf("enter a[%d]:- ", i);
		scanf("%d",&array[i]);
	}
	for(i=0; i<n; i++){
		sum=sum+array[i];
	}
	return sum;
}





void main(){
	int s;
	s=arraysum();
	printf("sum of array : %d",s);
	
}
