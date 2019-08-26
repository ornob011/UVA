#include<stdio.h>
int main()
{
    int N;
    while(scanf("%d", &N)!=EOF)
    {
        int arr[N];
        int M;
        int i, j, temp;
        for(i=0; i<N; i++)
            scanf("%d", &arr[i]);
        scanf("%d", &M);
        for(i=0; i<N; i++)
        {
            for(j=0; j<N-i-1; j++)
            {
                if(arr[j]>arr[j+1])
                {
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        int max=1000001;
        int f_book, s_book;
        for(i=0; i<N; i++)
        {
            for(j=i+1; j<N; j++)
            {

                if((arr[i]+arr[j])==M && abs(arr[i]-arr[j])<max)
                {
                    f_book=arr[i];
                    s_book=arr[j];
                }
            }
        }
        printf("Peter should buy books whose prices are %d and %d.\n\n", f_book, s_book);
    }
    return 0;
}
