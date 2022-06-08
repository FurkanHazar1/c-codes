#include<stdio.h>
int main()
{
    int x=12,y=13,z=15;
    int sonuc= ( x > y ) ? (( x > z ) ? x : z) : (( y > z ) ? y : z );
    printf("%d",sonuc);
    return 0;
}
