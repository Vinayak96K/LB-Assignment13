#include"MyHeader.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: StrCatX
//  Description: Accepts base address of two strings and adds N contents of second string into into first string.
//  Input: char[IN-OUT,IN-OUT],int[IN]
//  Output: NA
//  Author: Vinayak Mahendra Patil
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void StrNCatX(char *src,char *dest,int iNum)
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
    while((*dest!='\0')&&(iNum>0))
    {
        *src++=*dest++;
        iNum--;
        /*src++;
        dest++;*/
    }
    *src='\0';
}
