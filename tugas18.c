 #include <stdio.h>
 #include <stdbool.h>
 #include <string.h>
 #include <stdbool.h>
 #include <ctype.h>  // Add this line to declare isspace
bool iswhitespace(int c) {
    return isspace(c) || c == '\t';
}
 /*left trim: menghapus karakter spasi/tab yang mengawali string */
 char *ltrim(char *s) {
 while (iswhitespace(*s)) s++;
 return s;
 }
 /*right trim: ,menghapus karakter spasi/tab yang mengakhiri string */
 char *rtrim(char *s) {
 /* pointer p diinisialisasi untuk menunjukan karakter terakhir*/
 char *p = s + strlen(s)- 1;
 while (p > s &&iswhitespace(*p)) p--;
 *(p+1) = '\0'; /* akhir string */
 return s;
 }
 /* trim : menghapus spasi/tab di awal dan diakhr string */
 char *trim(char *s) {
 s =ltrim(s);
 s =rtrim(s);
 return s;
 }
 int main() {
 char str1[] = " Ada5spasidiawalstring";
 char str2[] = "Ada 5 spasi di awali string ";
 char str3[] = " Ada5spasidiawalstring dan di akhir string ";
printf("Sebelum spasi dibuang: \n");
 printf("str1: %s (jumlah karakter: %ld)\n", str1, strlen(str1));
 printf("str2: %s (jumlah karakter: %1d)\n", str2, strlen(str2));
 printf("str3: %s (jumlah karakter: %1d)\n", str3, strlen(str3));
 strcpy(str1, ltrim(str1));
 strcpy(str2, rtrim(str2));
 strcpy(str3, trim(str3));
 printf("\nSetelah spasi dibuang: \n");
 printf("str1: %s (jumlah karakter: %ld)\n", str1, strlen(str1));
 printf("str2: %s (jumlah karakter: %ld)\n", str2, strlen(str2));
 printf("str3: %s (jumlah karakter: %ld)\n", str3, strlen(str3));
 return 0;
 }