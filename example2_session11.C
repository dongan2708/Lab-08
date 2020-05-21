/* Input values are accepted from the user into the array ary[10]*/

#include<stdio.h>
main()
{
	int ary[10];
	int i, total,high;
	for (i = 0; i<10;i++)
	{
		printf("\n Enter  value: %d : ", i+1);
		scanf("%d",&ary[i]);
	}
	/* Displays highest of the entered values*/     //hien thi cao nhat trong cac gia tri da nhap 
	high = ary[0];
	for (i=1;i<0;i++)
	{
		if (ary[i] > high)
		high=ary[i];
	}
	printf("\nHighest values entered was %d", high);
	/* prinfs average of values entered for ary[10]*/  // In trung binh cac gia tri duoc nhap cho ary[10]
	
	for (i=0,total=0; i<10;i++)
	    total = total + ary[i];
	 printf("\nThe average of the elements of ary is %d", total/i);   
}
