#include"MyHeader.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: StrCpyX
//  Description: Accepts base address of two strings and copies N contents of one string into second string.
//  Input: char[IN-OUT,IN-OUT],int[IN]
//  Output: NA
//  Author: Vinayak Mahendra Patil
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void StrCpyX(char *src,char *dest,int iNum)
{
    if((src==NULL)||(dest==NULL))
    {
        printf("Incorrect input!\n");
	return;
    }

    while((*src!='\0')&&(iNum>0))
    {
        *dest=*src;
        *src++;
        *dest++;
        iNum--;
    }
    *dest='\0';
}
