#include<stdio.h> 

int main(){

int i;

char arr1[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N',
                'O','P','Q','R','S','T','U','V','W','X','W','Z'};
char arr2[] = {'Q','W','E'};

for (i = 0; i < 100 && arr1[i] != '\0'; i++)
    arr1[i] = arr2[i];
 
printf("%c", arr1[i]);
printf("%c", arr2[i]);

//\nEncrypted message: %s\n", message)


return 0; 
}