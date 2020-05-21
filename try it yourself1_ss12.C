//chuong trinh C de tim gia tri nho nhat va gia tri lon nhat trong mot mang//
 #include<stdio.h>
 main()
 {
 	int ary[5];
 	int i,n,max,min;
 	do
 	{
 		printf("nhap so phan tu cua mang: ");
 		scanf("%d",&n);
	 }
	 while(n > 5 || n < 1 );
	 
	 for(i = 0;i < n;i++)
	 {
	 	printf("nhap phan tu thu %d: ");
	 	scanf("%d",&ary[i]);
	 }
	 max = ary[0];
	 min = ary[0];
	 for(i = 1;i < n;i++) {
	 	if(ary[i] > max) {
	 		max = ary[i];
		 }
		 else(ary[i] < min); 
		 {
		 	min = ary[i];
		 }
	 }
	 printf("gia tri lon nhat la %d\n, gia tri nho nhat la %d\n",max, min);
 }
