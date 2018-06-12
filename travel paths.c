#include<stdio.h>
#include<string.h>
char s[100][100],v;
int i,j,m,n,result;
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
	result=grid(0,0,s);
	printf("%d",result);
}
int grid(int x,int y,char s[100][100])
{
	if(s[x][y]=='f'||x==m||y==m)
	return 0;
	if(x==m-1&&y==n-1)
	return 1;
	return (grid(x+1,y,s)+grid(x,y+1,s));
}
