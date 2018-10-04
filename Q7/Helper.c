#include"MyHeader.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: StrCmpX
//  Description: Accepts base address of two strings and retuns true if both strings are equal.
//  Input: char[IN-OUT,IN-OUT]
//  Output: BOOL[OUT]
//  Author: Vinayak Mahendra Patil
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL StrCmpX(char *src,char *dest)
{
    if((src==NULL)||(dest==NULL))
    {
        return ERR;
    }

    while((*src!='\0')&&(*dest!='\0'))
    {
        if(*src!=*dest)
        {
            break;
        }
        src++;
        dest++;
    }

    if((*src=='\0')&&(*dest=='\0'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}