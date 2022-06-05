#include <stdio.h>
#include <string.h>
#define MAX 100

int main()
{

    char str[MAX];
    int len,i=0;
   //printf("Input\n");
    scanf("%s",str);
   //printf("Output\n");
    for (int i = 0; str[i]!='\0'; i++){
        if (str[i]>='A'&&str[i]<='Z')
        {
            str[i]=str[i]+32;//case conversion

        }
        if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i] =='u'||str[i]=='y')
        {
            str[i]=-1;//Do a false deletion here
        }
        if (str[i]!=-1)
        {
            printf(".");
            printf("%c",str[i]);
        }

    }

    printf("\n");
    return 0;

}