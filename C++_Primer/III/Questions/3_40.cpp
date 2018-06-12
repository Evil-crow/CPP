#include <iostream>
#include <cstring>
int main(void)
{
    char str1[] = "Linux";
    char str2[] = "Kernel";
    char str3[100];

    strcpy(str3, str1);
    strcat(str3, " ");
    strcat(str3, str2);

    puts(str3);
    
    return 0;
}