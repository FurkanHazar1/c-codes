
#include <stdio.h>
 
int obeb(int, int);
 
int main() {
    int sayi1 = 48;
    int sayi2 = 180;
    int sonuc = obeb(sayi1, sayi2);
    printf("obeb(%d,%d) = %d\n", sayi1, sayi2, sonuc);
    return 0;
}
 
int obeb(int x, int y) {
    if (y == 0)
        return x;
    return obeb(y, x % y);
}
}
