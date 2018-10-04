#include"MyHeader.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: StrCmpX
//  Description: Accepts base address of two strings and retuns true if N characters of both strings are equal otherwise retuns false.
//  Input: char[IN-OUT,IN-OUT],int[IN]
//  Output: BOOL[OUT]
//  Author: Vinayak Mahendra Patil
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL StrCmpX(char *src,char *dest,int iNum)
{
    if((src==NULL)||(dest==NULL))
    {
        return ERR;
    }

    while((*src!='\0')&&(*dest!='\0')&&(iNum>0))
    {
        if(*src!=*dest)
        {
            break;
        }
        iNum--;
        src++;
        dest++;
    }

    if(iNum==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}