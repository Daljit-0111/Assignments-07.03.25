/* WAP to input a string and print that string in upper case, lower case, 
reverse case, sentence case and toggle case */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
main(){
	char str[50],temp[50],temp1[50];
	printf("Enter string: ");
	gets(str);
	
	strcpy(temp,str);
	printf("Upper case of a %s is %s\n", str, strupr(temp));
	printf("Lower case of a %s is %s\n", str, strlwr(temp));
	strcpy(temp1,str);
	printf("Reverse case of a %s is %s\n", str, strrev(temp1));
	
void toggleCase(char * str);


int main()
{
    char str[50];

    printf("Enter any string: ");
    gets(str);

    printf("String before toggling case: %s", str);

    toggleCase(str);

    printf("String after toggling case: %s", str);

    return 0;
}

{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i] = str[i] - 32;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            str[i] = str[i] + 32;
        }

        i++;
    }
}

}
