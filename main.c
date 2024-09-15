#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char mas[100];
    char mas_enc[200][2];
    int len_mas_enc = 0;
    
    scanf("%s", mas);
    int len_mas = (unsigned) strlen(mas);
    int len = len_mas;
    int i = 0;
    int k = 1;
    char c;
    while (len != 0) {
        while (mas[i] == mas[i+1]) {
            k += 1;
            i += 1;
        }
        len -= k;
        c = mas[i];
        mas_enc[i][0] = c;
        mas_enc[i][1] = k;
        len_mas_enc += 2;
        printf("%c%d", mas_enc[i][0], mas_enc[i][1]);
        k = 1;
        i += 1;
    }
    
    printf("\nk encoding: %d per\n", (int) (((float) len_mas / (float) len_mas_enc)*100-100));
    return 0;
}
