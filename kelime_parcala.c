#include <stdio.h>
#include <string.h>
// klavyeden girilen metni ekrana alt alta parçalanmış şekilde yazdır
/* input melis
m
m e
m e l
m e l i 
m e l i s
*/

int main()

{
  
 char kelime[20];
 int i = 0;
 
 printf("kelime girin: ");
 gets(kelime);
 
 while(i < strlen(kelime))
 {
     
  int j = 0;
  
  while(j <= i)
  {
   printf("%c ",kelime[j]);
   j++;
  }
  
  printf("\n");
 
  i++;
 
 }

 return 0;
 
}