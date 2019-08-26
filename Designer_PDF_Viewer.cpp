#include <stdio.h>
#include <string.h>
int main()
{
	int n,i,area,uccota,suru=0,big;
	int letter[27];
	for(i=0; i<26; i++)
	{
		scanf("%d",&letter[i]);
	}
	getchar();
	char word[11];
	scanf("%s",word);
	for(i=0; i<strlen(word); i++){

		for(int j=0; j<26; j++){

			if(word[i]-97 == j){
					uccota=letter[j];
				if(uccota>suru){
					big=uccota;
					suru=uccota;
				}
			}
		}
	}
	area=strlen(word)*1*big;
	printf("%d\n",area);
	return 0;
}
