#include<stdio.h>
#include"malloc.h"
#define TRUE 1
#define FALSE 0
#define ERR -1
#define NULL ((void *)0)

typedef unsigned int BOOL;
BOOL StrChkPallindrome(char *);
void StrRevX(char *);
BOOL StrCmpX(char *src,char *dest);