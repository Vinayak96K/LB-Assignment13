#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    char cArr[30];
        
    BOOL bRet;
    printf("Enter 1st string:");
    scanf("%[^'\n']s",cArr);
    
    
    
    bRet=StrChkPallindrome(cArr);
    if(bRet==TRUE)
    {
        printf("String is pallindrome.\n");

    }
    else if(bRet==FALSE)
    {
        printf("String is not pallindrome.\n");
    }
    else
    {
        printf("Incorrect input!\n");

    }

    return 0;
}
