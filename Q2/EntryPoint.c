#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    char cArr[30];
    char cBrr[30]="\0";    
    int iVar=0;
    
    printf("Enter a string:");
    scanf("%[^'\n']s",cArr);
    printf("Enter number of characters to copy:");
    scanf("%d",&iVar);
    StrCpyX(cArr,cBrr,iVar);
    printf("String 1:%s\n",cArr);    
    printf("String 2:%s\n",cBrr);

    return 0;
}
