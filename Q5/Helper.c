#include"MyHeader.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: StrCatX
//  Description: Accepts base address of two strings and adds contents of second string into into first string.
//  Input: char[IN-OUT,IN-OUT]
//  Output: NA
//  Author: Vinayak Mahendra Patil
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void StrCatX(char *src,char *dest)
{
    if((src==NULL)||(dest==NULL))
    {
        printf("Incorrect input!\n");
	return;
    }

    while(*src!='\0')
    {
        src++;
    }
    *src++=' ';
    while(*dest!='\0')
    {
        *src++=*dest++;
        /*src++;
        dest++;*/
    }
    *src='\0';
}
