#include"MyHeader.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: StrCpyCap
//  Description: Accepts base address of two strings and copies capital characters from one string into second string.
//  Input: char[IN-OUT,IN-OUT]
//  Output: NA
//  Author: Vinayak Mahendra Patil
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void StrCpyCap(char *src,char *dest)
{
    if((src==NULL)||(dest==NULL))
    {
        printf("Incorrect input!\n");
	return;
    }

    while(*src!='\0')
    {
        if(((*src)>='A')&&((*src)<='Z'))
        {
        *dest=*src;
        *dest++;
        }
        *src++;
    }
    *dest='\0';
}
