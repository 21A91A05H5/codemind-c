#include <stdio.h>
int factorial(int r) {
   int fact = 1;
   while(r>1) {
      fact = fact * r;
      r--;
   }
   return fact;
}
int check(int n) {
   int temp, rem, result = 0;
   temp = n;
   while(temp) {
      rem = temp % 10;
      result = result + factorial(rem);
      temp = temp/10;
   }
   if (result == n)
      return 1;
   else
      return 0;
}
int main(int argc, char const *argv[]) {
   int n ;
   scanf("%d",&n);
   if (check(n))
      printf("The number %d is a strong number
",n);
   else
      printf("The number %d is not a strong number
",n);
   return 0;
}
