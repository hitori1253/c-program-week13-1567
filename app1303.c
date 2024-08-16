#include<stdio.h>
#include<string.h>
void main(){
    char str[1000]= "";
    int i;
    printf("Enter a string: ");
    gets(str);
    int result = strlen(str);
    printf("Text: %d\n",result);
    for ( i = 0; i<= result -1; i++)
    printf("str[%d] = %c\n",i,str[i]);
    
}