#include "stdio.h"
#include "func.h"
int main()
{
    int ch;
    printf("Enter Coice :");
    scanf("%d",&ch);
    if(ch == 1) operationofFullwave();
    else operationofHalfwave();
    return 0;
}