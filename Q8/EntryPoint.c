#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    char cArr[30];
    char cBrr[30];    
    int iVar=0;
    BOOL bRet;
    printf("Enter 1st string:");
    scanf("%[^'\n']s",cArr);
    fflush(stdin);
    printf("Enter 2nd string:");
    scanf("\n%[^'\n']s",cBrr);
    printf("Enter number of characters to compare:");
    scanf("%d",&iVar);
    bRet=StrCmpX(cArr,cBrr,iVar);
    if(bRet==TRUE)
    {
        printf("Strings are equal.\n");

    }
    else if(bRet==FALSE)
    {
        printf("Strings are not equal.\n");
    }
    else
    {
        printf("Incorrect input!\n");

    }

    return 0;
}
