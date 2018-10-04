#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    char cArr[30];
    char cBrr[30];    
    
    printf("Enter a string:");
    scanf("%[^'\n']s",cArr);

    StrCpySmall(cArr,cBrr);
    printf("String 1:%s\n",cArr);    
    printf("String 2:%s\n",cBrr);

    return 0;
}
