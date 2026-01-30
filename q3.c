#include <stdio.h>

void reverseString (char str[]) 
{
    int i = 0, j = 0;
    char temp;

    
    while (str[j] != '\0') 
	{
       j++;
    }
    j--;  
    while (i < j) 
	{
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }
}

int main() 
{
    char str[] = "SAHIL";

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}

