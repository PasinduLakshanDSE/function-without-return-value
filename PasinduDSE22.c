#include<stdio.h>
void find_max(){
	int num1;
	int num2;
	
	
	printf("Enter the num1:");
	scanf("%d",&num1);
	printf("Enter the num2:");
	scanf("%d",&num2);
	
	if(num1>num2){
		printf("Max number is num1:%d\n",num1);
	}else if(num1<num2){
		printf("Max number is num2:%d\n",num2);
	}else{
		printf("num1 and num2 are equal");
	}
}
int main(){
		find_max();
		return 0;
	}
	
