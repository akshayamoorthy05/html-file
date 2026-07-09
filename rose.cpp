#include<stdio.h>
int main(){
	char name[50];
  	printf("enter your full name:");
    fgets(name,sizeof(name),stdin);
	printf("name=%s",name);
	return 0;
		}		
