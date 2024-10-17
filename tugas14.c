 #include <stdio.h>
 #include <string.h>
 int main() {
 int i =0;
 char str[100] = "C C++, C#;Java:Perl;Python|Ruby";
 char A[7][8];
 char delimiters[] = " ,;:I";
 printf("String:\n\"%s\"\n\n", str);
  /* memecahstring menjadi daftar token */
 char *token = strtok(str, delimiters);
 while (token){
 strcpy(A[i++],token);
 token = strtok(NULL, delimiters);
 }
 printf("Array:\n");
 /* menampilakn daftar token di dalam array */
 for (i=0; i<7; i++){
 printf("A[%d]: %s\n", i, A[i]);
 }
 return 0;
 }