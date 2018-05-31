void BubbleOne(int *datax)
{
	int i,j,temp;
	printf("由大到小:");
	for(j=10;j>0;j--)
	{
	    for	(i=0;i<j-1;i++)
		{
			if(datax[i]>datax[i+1])
			{
				temp = datax[i+1];
				datax[i+1]=datax[i];
				datax[i]=temp;
			}
		}
    printf("  %d",datax[i]);
    }

}
