#include <stdio.h>
int main(){

int a1,b1,a2,b2;
int i,j,k;

      printf("Enter The Matrix 1 [a]:");
      scanf("%d",&a1);

      printf("Enter The Matrix 1 [b]:");
      scanf("%d",&b1);

      printf("Enter The Matrix 2 [a]:");
      scanf("%d",&a2);

      printf("Enter The Matrix 2 [b]:");
      scanf("%d",&b2);

      if(b1==a2){
      
      int arr1[a1][b1]={};
      int arr2[a2][b2]={};

      printf("\n\nEnter The Value of Matrix:1 [%d][%d]:\n\n",a1,b1);

      for(i=0;i<a1;i++){
            for(j=0;j<b1;j++){
                  printf("Enter The Value for a[%d][%d]:",i+1,j+1);
                  scanf("%d",&arr1[i][j]);
            }
            printf("\n");
      }

      printf("\n\nThe Value of Matrix1:\n");

       for(i=0;i<a1;i++){
            for(j=0;j<b1;j++){
                  printf("%5d",arr1[i][j]);
            }
            printf("\n");
      }


       printf("\n\nEnter The Value of Matrix:2 [%d][%d]:\n\n",a2,b2);

      for(i=0;i<a2;i++){
            for(j=0;j<b2;j++){
                  printf("Enter The Value for a[%d][%d]:",i+1,j+1);
                  scanf("%d",&arr2[i][j]);
            }
            printf("\n");
      }

      printf("\n\nThe Value of Matrix1:\n");

       for(i=0;i<a2;i++){
            for(j=0;j<b2;j++){
                  printf("%5d",arr2[i][j]);
            }
            printf("\n");
      }
      //m=a1; n=b1; n=a1; p=b2 
      int sum[a1][b2];
      for(i=0;i<a1;i++){
            for(j=0;j<b2;j++){
                  sum[i][j]=0;
                        for(k=0;k<b1;k++){
                              sum[i][j]=sum[i][j]+((arr1[i][k])*(arr2[k][j]));     
                        }                         
            }
      }
      
      
      printf("\n\n The Multiplication is:\n");
      
      for(i=0;i<a1;i++){
            for(j=0;j<b2;j++){
                  printf("%5d",sum[i][j]);
            }
            printf("\n");
      }


      }
      else
      printf("\n\nIt's not possiable to Multiplication\n\n ");
 

}

