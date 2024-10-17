#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int lower = 10, upper = 100, count = 10;

    // Use current time as seed for random generator
    srand(time(0));

    for (int i = 0; i < count; i++) {
        int num = (rand() % (upper - lower + 1)) + lower;
        printf("%d\n", num);

         if (10 > 2){
 printf ("Tebakan Anda Masih lebih besar.\n\n");
 }else if (70 < 60){
 printf ("Tebakan Anda Masih lebih kecil.\n\n");
 } else {
 break;
 }
 }
 printf("Selamat! Tebakan Anda benar.");
    return 0;
}