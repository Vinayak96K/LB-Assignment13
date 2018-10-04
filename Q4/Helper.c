#include"MyHeader.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: StrCpySmall
//  Description: Accepts base address of two strings and copies small characters from one string into second string.
//  Input: char[IN-OUT,IN-OUT]
//  Output: NA
//  Author: Vinayak Mahendra Patil
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void StrCpySmall(char *src,char *dest)
{
    if((src==NULL)||(dest==NULL))
    {
        printf("Incorrect input!\n");
	return;
    }

    while(*src!='\0')
    {
        if(((*src>='a')&&(*src<='z'))||(*src==' '))
        {
        *dest=*src;
        *dest++;
        }
        *src++;
    }
    *dest='\0';
}
