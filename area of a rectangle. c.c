//program to calculate area of a rectangle
// the user is required to input:length and width
#include<stdio.h>
int main ( ) {
  int length=0;
  int width=0;
  printf("length:");
  scanf("%d", &length);//input length
  printf("width:");
  scanf("%d", &width);//input width
  int area=length*width;
  printf("area:%d\n", area);//output area according to formula A,=L*W
  return 0;
}
