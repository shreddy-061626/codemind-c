#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='u'||c=='o')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
}