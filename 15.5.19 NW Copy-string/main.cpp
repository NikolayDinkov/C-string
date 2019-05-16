#include <iostream>

using namespace std;
int string_copy(char *a, char *b)
{
    int ia=0;
    int ib=0;
    while(a[ia]!='\0')
    {
        b[ib]=a[ia];
        ib++;
        ia++;
    }
    return ia+1;
}
int main()
{
    char a[7]="Hello\n";
    char b[7];
    int lenght = string_copy(a, b);
    printf("%d %s", lenght, b);
    return 0;
}
