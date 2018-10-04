#include"MyHeader.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: StrChkPallindrome
//  Description: Accepts base address of a string and retuns true if string is pallindrome.
//  Input: char[IN-OUT]
//  Output: BOOL[OUT]
//  Author: Vinayak Mahendra Patil
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL StrChkPallindrome(char *str)
{
    if(str==NULL)
    {
        return ERR;
    }
    char *strrev=NULL;
    BOOL bRet=FALSE;

    int iCnt=0;
    while(str[iCnt]!='\0')
    {
        iCnt++;
    }
    strrev=(char *)calloc(iCnt,sizeof(char));
    iCnt=0;
    while(str[iCnt]!='\0')
    {
        strrev[iCnt]=str[iCnt];
        iCnt++;
    }
    StrRevX(strrev);
    printf("%s\n",strrev);
    printf("%s\n",str);
    bRet=StrCmpX(str,strrev);
    return bRet;
}

void StrRevX(char *src)
{
    char *Start=src;
    char *Last=src;
    char cTemp;
    if(src==NULL)
    {
        printf("Incorrect input!\n");
	return;
    }

    while(*Last!='\0')
    {
        Last++;
    }
    Last--;
    while(Start<=Last)
    {
        cTemp=*Start;
        *Start=*Last;
        *Last=cTemp;
        Start++;
        *Last--;
    }

}

BOOL StrCmpX(char *src,char *dest)
{
    if((src==NULL)||(dest==NULL))
    {
        return ERR;
    }
    char cTemp;
    //int iCnt=0;

    while((*src!='\0')&&(*dest!='\0'))
    {
        cTemp=*src;
        if(((*src)>='A')&&((*src)<='Z'))
        {
            cTemp=cTemp+32;
        }
        else if(((*src)>='a')&&((*src)<='z'))
        {
            cTemp=cTemp-32;
        }
        if((*src==*dest)||(cTemp==(*dest)))
        {
        src++;
        dest++;
        }
        else
        {
            break;
        }
        
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