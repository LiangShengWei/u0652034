#include <stdio.h>
#include <stdlib.h>
#define Size 10
void BubbleSort(const int* ,int *,int);

int main()
{
   int NumBer[10]={5,3,4,2,1,10,9,8,7,6};
    int a=0;
    
    
    printf("�Ƨǫe:");
    
     for( a = 0; a < 10; a++ ) {
        printf("%3d", NumBer[a]);
    }
   
    BubbleSort(NumBer,NumBer,10);
   
    printf("\n\n�Ƨǫ�:");
    for( a = 0; a < 10; a++ ) {
        printf("%3d", NumBer[a]);
    }
    
    printf("\n\n");
  system("PAUSE");	
  return 0;
}
