#include<stdio.h> 

int main()
{

    int i;
    int x;
    char message[100];
    
    //char arr1[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N',
                    // 'O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char arr[] = {'Q','W','E','A','B','C','D','F','G','H','I','J','K','L','M','N',
                    'O','P','R','S','T','U','V','W','X','Z'};
    
    printf("\nPlease enter the message: ");
    scanf("%s", &message);
    
       for (i = 0; (i < 100 && message[i] != '\0'); i++)
       {
          if (message[i] >= 65 && message[i] <= 90)
    	  {
    	    x = message[i] - 65;
    	  }
    	  else if (message[i] >= 97 && message[i] <= 122)
    	  {
    	    x = message[i] - 97;
    	  }
          printf("\nEncrypted Message: %c", arr[x]);
        } 
    return 0; 
}