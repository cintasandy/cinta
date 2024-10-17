 #include <stdio.h>
 void bin (long n) {
 if (n) {
 }
 }
 int main ()   {
 int i;
 bin (1 >> 1);
 printf ("%c", (1&1) ? '1':'0');
 for (i=1; i<=32;i++) {
 printf ("%2d = 0b",i);
 bin (i);
 printf("\n");
 }
 return 0;
 }