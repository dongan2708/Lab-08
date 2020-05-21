//chuong trinh nhap cac so sau vao mot mang va dai nguoc mang//

#include <stdio.h>

int main() {
   int array[5] = {34, 45, 56, 67, 89 };

   int loop;

   printf("In tat ca phan tu cua mang theo chieu dao nguoc: \n\n");
   for(loop = 4; loop >= 0; loop--)
      printf("%d ", array[loop]);
      
   return 0;
}
