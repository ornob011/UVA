#include<stdio.h>
#include<algorithm>
#include<stdlib.h>
int main()
{
	int t, test=0, n, i, ans;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		int *p=(int*)malloc(sizeof(int)*n);
		for(i=0; i<n; i++)
			scanf("%d", (p+i));
		
		std::sort(p, p+n);
		ans=n/2;
		
		printf("Case %d: %d\n", ++test, *(p+ans));	
	}
	return 0;
}
