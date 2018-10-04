#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    char cArr[30];
    char cBrr[30];    
    BOOL bRet;
    printf("Enter 1st string:");
    scanf("%[^'\n']s",cArr);
    fflush(stdin);
    printf("Enter 2nd string:");
    scanf("\n%[^'\n']s",cBrr);
    
    bRet=StrCmpX(cArr,cBrr);
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
