#include<stdio.h>
#include<string.h>
main() 
{
	int i, n = 0;
	int item;
	char x[10] [12];
	char temp[12];
	
	printf("Liet ke cac ten theo thu tu abc \n\n");
	printf("Nhan 'END' de ket thuc buoc nhap va hien thi ket qua \n\n");
	/* read in the list of string */
	do {
		printf("Nhap vao ten %d :", n + 1);
		scanf("%s", x[n]);
	}while (strcmp(x[n++], "END"));
	/* reorder the list of string */
	n = n - 1;
	for(item = 0; item<n-1; ++item)
	{
		/* find lowest of remaining strings */
		for(i=item+1; i<n; ++i)
		{
		if(strcmp (x[item], x[i]) >0)
		{
			/* interchange two stings */
			strcpy(temp, x[item]);
			strcpy(x[item], x[i]);
			strcpy(x[i], temp);
		 } 
		}
	}
	/* Display the arranged list of strings */
	printf("Ket qua sap xep ten theo thu tu abc : \n");
	for(i = 0;i < n; ++i)
	{
		printf("\nTen %d la %s", i+1, x[i]);
	}
}
