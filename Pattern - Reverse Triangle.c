#include <stdio.h>
#include <stdlib.h>

void program()
{ 
  char sym;
  printf("Enter any character: ");
  scanf("%c", &sym);
  
  for(int a=1; a<=10+1; a++){
    for(int b=1; b<=a; b++)
      printf("%c  ", sym);
    printf("\n");
  }
  for(int a=10; a>=1; a--){
    for(int b=1; b<=a; b++)
      printf("%c  ", sym);
    printf("\n");
  }
  
}

int main()
{
  system("clear");
  program();
  printf("\n");
  return 0;
}
