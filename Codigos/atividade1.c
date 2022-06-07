#include <stdio.h>
#include <stdlib.h>

int main(){
   int i, j, n, matriz[100][100];
   
   scanf("%d",&n);

   for(i=0;i<n;i++)
      for(j=0;j<n;j++)
         scanf("%d", &matriz[i][j]);
   i=0;
   j=0;
   printf("%d ", matriz[0][0]);

   while (i!=n-1 || j!=n-1) //enquanto i nao for igual a n-1 ou se j nao for igual a n-1
   {
      if (i==0 || j==n-1) // se i for igual a 0 ou j for igual a n-1
      {
         if (j!=n-1)  // se o j for diferente de n-1 
         j++;
         else i++; 
         printf("%d ",matriz[i][j]);

         while (j>0 && i<n-1) 
         {
            i++;
            j--;
            printf("%d ",matriz[i][j]);
         }
      }
      if (j==0 || i==n-1) 
      {
         if (i!=n-1)
            i++;
         else j++;

         printf("%d ",matriz[i][j]);
         
         while (i>0 && j<n-1) {
            j++;
            i--;
            printf("%d ",matriz[i][j]);
         }
      }
   }
   return 0;
}