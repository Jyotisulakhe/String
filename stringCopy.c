#include<stdio.h>
#include<string.h>
//copy string
int main()
{
    char oldStr[]="Jyoti";
    char newStr[]="jyoti :)";
    strcpy(oldStr,newStr);
    puts(newStr);
    return 0;
}
