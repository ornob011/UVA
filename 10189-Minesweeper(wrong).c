#include<stdio.h>
int main()
{
    char field[100][101];
    int Case=1, lines, i, j, k, l, columns, count;
    while(scanf("%d %d", &lines, &columns)==2)
    {
        if(Case>1)
        {
            printf("\n");
        }
        if(lines==0 && columns==0)
        {
            break;
        }
        for(i=0; i<lines; i++)
            scanf("%s", &field[i]);

        for(i=0; i<lines; i++)

            for(j=0; j<columns; j++)

                if(field[i][j]=='.')
                {
                    count=0;
                    for(k=i-1; k<=i+1; k++)

                        for(l=j-1; l<=j+1; l++)

                            if(k>=0 && k<lines && l>=0 && l<columns && field[k][l]=='*')
                                count++;
                    field[i][j]=count+48;

                }


        printf("Field #%d:\n", Case++);
        for(i=0; i<lines; i++)

            printf("%s\n", field[i]);

    }
    return 0;
}
