#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    char cArr[30];    
    
    printf("Enter a string:");
    scanf("%[^'\n']s",cArr);
    printf("String 1 before reverse:%s\n",cArr);
    StrRevX(cArr);
    printf("String 1 after reverse:%s\n",cArr);    
    

    return 0;
}
