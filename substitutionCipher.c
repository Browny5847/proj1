#include<stdio.h> 

int main()
{

    int i;
    int x;
    char message[100];
    
    
    char arr1[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N',
                    'O','P','Q','R','S','T','U','V','W','X','Y','Z'};
                    
    // Arr2 needs to be manually changed to desired text
    char arr2[] = {'Q','W','E','A','B','C','D','F','G','H','I','J','K','L','M','N',
                    'O','P','R','S','T','U','V','W','X','Y','Z'};
    
    printf("\nPlease enter the message: ");
    scanf("%s", &message);
    
    
    printf ("\nWould you like to:\n");
    printf ("1 = Encrypt the message.\n");
    printf ("2 = Decrypt the message.\n");
    scanf ("%d", &x);
    
    
    
    switch (x)
    {
        case 1:
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
         printf("\nEncrypted Message: %c", arr2[x]);
       }
       break;
       
       case 2:
        for (i = 0; (i < 100 && message[i] != '\0'); i++)
        {
             if (message[i] >= 65 && message[i] <= 90)
    	  {
    	    x = message[i] - arr2[i] + 65;
    	  }
    	  else if (message[i] >= 97 && message[i] <= 122)
    	  {
    	    x = x = message[i] - arr2[i] + 65;
    	  }
            
         printf("\nEncrypted Message: %c", arr1[x]);   
        }
        break;
        
        
        default:
            printf ("\nError\n");
       
       
       
       
       
       
       
       
       
       
       
       
    }   
       
       
       
       
       
       
       
    return 0; 
}