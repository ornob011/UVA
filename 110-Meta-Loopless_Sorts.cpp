#include<bits/stdc++.h>
using namespace std;

int t, n, i;

vector<int>cc(10);

void insert(int num, vector<int>cc)
{
	int i;

	if(num==n)
	{
		int nu=num*2;

		while(nu--)
		{
			printf(" ");	
		}
		printf("writeln(");

		for (i = 0; i < n - 1; i++)
			printf("%c,", cc[i] + 'a');

		printf("%c)\n", cc[n - 1] + 'a');
			return;
	}
	vector<int>c(10);

	for(i=0; i<num; i++)
		c[i]=cc[i];

	for(i=num; i>=0; i--)
	{
		if(num==i)
		{
			int nu=num*2;

			while(nu--)
			{
				printf(" ");
			}
			c[i]=i;
			printf("if %c < %c then\n", c[i - 1] + 'a', num + 'a');
			insert(num + 1, c);
		}
		else if(i==0)
		{
			int nu=num*2;

			while(nu--)
			{
				printf(" ");
			}

			cout<<"else\n";
			swap(c[i], c[i+1]);
			insert(num+1, c);
		}
		else
		{
			int nu=num*2;

			while(nu--)
			{
				printf(" ");
			}
			printf("else if %c < %c then\n", c[i - 1] + 'a', num + 'a');
			swap(c[i], c[i + 1]);
			insert(num + 1, c);
		}
	}
}

void out()
{
	printf("program sort(input,output);\n");
	printf("var\n");

	for(i=0; i<n-1; i++)
		printf("%c,",'a' + i);

	printf("%c : integer;\n", 'a' + n - 1);
	cout<<"begin"<<endl;
	printf("  readln(");
	
	for(i=0; i<n-1; i++)
		printf("%c,",'a' + i);

	printf("%c);\n", 'a' + n - 1);
	insert(1, cc);

	printf("end.\n");
	if (t) 
		printf("\n");
}

int main()
{   
    freopen("/home/ornob/Downloads/Practice/input.txt", "r", stdin);
	freopen("/home/ornob/Downloads/Practice/output.txt", "w", stdout);

	cin>>t;
	while(t--)
	{
		for(i=0; i<10; i++)
			cc[i]=0;
		cin>>n;

		out();

	}
	return 0;
}