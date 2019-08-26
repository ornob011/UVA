#include<stdio.h>
int main()
{

   int player, start, pass, i, j, T, last;
   scanf("%d", &T);
   for(i=1; i<=T; i++)
   {
          scanf("%d %d %d", &player, &start, &pass);
          last=start;
          for(j=1; j<=pass; j++)
          {
              if(last==player)
                {
                	last=1;
                }
              else
				{
					last++;
				}
          }
          printf("Case %d: %d\n", i, last);
      }
   return 0;
}
