#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    char cArr[30];
    char cBrr[30]; 
    int iVar=0;   
    
    printf("Enter 1st string:");
    scanf("%[^'\n']s",cArr);
    //fflush(stdin);
    printf("Enter 2nd string:");
    scanf("\n%[^'\n']s",cBrr);
    printf("Enter number of characters to concat:");\
    scanf("%d",&iVar);
    printf("Strings before concatenation:\n");
    printf("String 1:%s\n",cArr);    
    printf("String 2:%s\n",cBrr);
    StrNCatX(cArr,cBrr,iVar);
    printf("Strings after concatenation:\n");
    printf("String 1:%s\n",cArr);    
    printf("String 2:%s\n",cBrr);

    return 0;
}
