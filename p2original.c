#include <stdio.h>

int input_side()
{
  int side;
  printf("Enter a side of the triangle:\n");
  scanf("%d", &side);
  return side;
}

int check_scalene(int a, int b, int c)
{
  if (a != b && a != c && b != c)
  {
    return 1;
  }
  return 0;
}

void output(int a, int b, int c, int isscalene)
{
  if(isscalene)
  {
    printf("The triangle with sides %d, %d and %d is scalene\n", a, b, c);
  }
  else
  {
    printf("The triangle with sides %d, %d and %d is not scalene\n", a, b, c);  
  }
}

int main()
{
  int A=input_side();
  int B=input_side();
  int C=input_side();
  int res=check_scalene(A, B, C);
  output(A , B , C , res);
  return 0;
}