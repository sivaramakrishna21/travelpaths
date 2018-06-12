#include<stdio.h>
#include<string.h>
char s[100][100],v,b[100][100]={0},c;
int i,j,m,n,result,a1[100][100]={0};
main()
{
	printf("enter number of rows and columns of a matrix");
	scanf("%d%d",&m,&n);
	scanf("%c",&v);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%c",&s[i][j]);
		}
		scanf("%c",&v);
	}
	b[m-1][n-1]=1;
	for(i=m-1;i>=0;i--)
	{
		for(j=n-1;j>=0;j--)
		{
			if(s[i][j]!='f'){
				if(s[i][j+1]=='-')
				b[i][j]+=b[i][j+1];
				
				if(s[i+1][j]=='-')
				b[i][j]+=b[i+1][j];
			}
			
		}
	}
	printf("%d",b[0][0]);
}
