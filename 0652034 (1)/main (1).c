#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*指向非常數資料的非常數指標*/ 

void BubbleOne(int *data1);

int main(void)
{
	int x[10]={5,15,45,4,12,36,3,9,27,2};
	
	BubbleOne(x);
}
