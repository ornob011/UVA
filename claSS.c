#include <stdio.h>
#include <math.h>
int main()
{
	int i,j;
	int num[10];
	for(i=0; i<10; i++){
		scanf("%d",&num[i]);
	}
	for(i=0; i<10; i++){
			if(i != 9){
				printf("Roll - 0%d    Marks - %d\n",i+1,num[i]);
			}
		else{
				printf("Roll - %d    Marks - %d\n", i+1, num[i]);
		}
	}
	return 0;
}
