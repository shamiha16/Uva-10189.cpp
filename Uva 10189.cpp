#include<stdio.h>
int main()
{




    char a[10][10],b[10][10];
    int i,j,m,n,count;
    scanf("%d%d",&m,&n);
    for (i=0;i<m;i++)
    {
         for (j=0;j<n;j++)
         {
              scanf(" %c",&a[i][j]);
         }
    }
    for (i=0;i<m;i++)
    {
         for ( j=0;j<n;j++)
            count=0;
         if (a[i][j]!='*')
         {
              if (a[i-1][j-1]=='*'&& (i-1>=0) && (j-1>=0))
              {

               count++;}
               if (a[i-1][j]='*'&& (i-1>=0))
               {
                   count++;
               }
               if (a[i-1][j+1]=='*'&& (i-1>=0) && (j+1<=n-1))
               {
                    count++;
               }
               if (a[i][j-1]=='*' && (j-1>=0))
               {
                    count++;
               }

               if (a[i][j+1]=='*' && (j+1<=n-1))
               {
                    count++;
               }
               if (a[i+1][j-1]=='*' && (i+1<=m)&&(j-1>=0))
               {
                    count++;
               }
               if (a[i+1][j]=='*' && (i+1<=m-1))
               {
                    count++;
               }
               if (a[i=1][j+1]=='*' && (i+1<=m-1) && (j+1<=n-1))
               {
                   count++;
               }
               b[i][j]=count;}
               else
                { b[i][j]='*';}




                         printf("%c ",b[i][j]);
                    }

return 0;}





