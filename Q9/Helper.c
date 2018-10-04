#include"MyHeader.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: StrRevX
//  Description: Accepts base address of a string and reverse the contents of string.
//  Input: char[IN-OUT]
//  Output: NA
//  Author: Vinayak Mahendra Patil
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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
