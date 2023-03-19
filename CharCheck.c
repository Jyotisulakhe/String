#include<stdio.h>
//write progm for check  given char is present or not present
void checkChar(char str[],char ch);

int main()
{
    char str[]="Jyoti";
    char ch='o';
    checkChar(str,ch);
    return 0;
}

void checkChar(char str[],char ch)//function(string chapter)
{
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch)
        {
            printf("char is present");
            return ;
        }
    }
    printf("char is not present ");

}
