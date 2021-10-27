#include<stdio.h>

int main(){

    int A[3][4];

    for (int b=0;b<3;b++)
    {
        for (int k=0;k<4;k++)
        {
            printf("A[%d][%d]=", b, k);
            scanf("%d", &A[b][k]);
            if (k == 3)
            {
                printf("\n");
            }
        }
    }

printf("Two Dimensional array elements:\n");
   for(int b=0; b<3; b++) {
      for(int k=0;k<4;k++) {
         printf("%d ", A[b][k]);
         if(k==3){
            printf("\n");
         }
      }
   }
   return 0;
}