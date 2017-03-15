#include<stdio.h>
#include<stdlib.h>
void multiply(int m,int n,int ar[m][n],int p,int q,int br[p][q])
{if(n!=p)
 exit(0);
 int c[20][20];
 for(int i=0;i<m;i++)
 {
  for(int j=0;j<q;j++)
  {
   c[i][j]=0;
   for(int k=0;k<n;k++)
   {
    c[i][j]+=ar[i][k]*br[k][j];
    }
   }
  }
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<q;j++)
    {
     printf("%d \t               ",c[i][j]);
     }
     printf("\n");
   }
  }
  void getmatrix(int m,int n,int a[m][n])
  {
   printf("Enter the elements");
   for(int i=0;i<m;i++)
   {
    for(int j=0;j<n;j++)
    {
     scanf("%d",&a[i][j]);
     }
    }
   }
   int main()
   {
    int m,n;
    int a[20][20],b[20][20];
    printf("Enter the number of rows for the first matrix");
    scanf("%d",&m);
    printf("Enter the number of columns for the first matrix");
    scanf("%d",&n);
    int p,q;
    printf("Enter the number of rows for the second matrix");
    scanf("%d",&p);
    printf("Enter the number of columns for the second matrix");
    scanf("%d",&q);
    getmatrix(m,n,a);
    getmatrix(p,q,b);
    multiply(m,n,a,p,q,b);
    return 0;
    }
      
