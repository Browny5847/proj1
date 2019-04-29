#include<stdio.h>

int
main ()
{
  int x; 
  int i;
  int g; // the key for when unknown
  int k; //The Key
  char message[100]; //Message input
  char alpha[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N',  // Alphabet Array
                'O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    
  

// Scanning for the message to be encrypted and the key vaule.

  printf ("\nPlease enter the message: ");
  scanf ("%s", &message);
  printf ("\n(Type 0 if key is unknown)");
  printf ("\nPlease enter a key: ");
  scanf ("%d", &k);

// Switch between Encryption and Decryption

  printf ("\nWould you like to:\n");
  printf ("1 = Encrypt the message.\n");
  printf ("2 = Decrypt the message.\n");
  printf ("3 = Decrypt the message with unknown key.\n");
  scanf ("%d", &x);





  switch (x)
    {
    // case 1 is Encryption to all uppercase
    case 1:
      for (i = 0; (i < 100 && message[i] != '\0'); i++)
	if (message[i] >= 65 && message[i] <= 90) // Uppercase Decryption
	  {
	    message[i] = ((message[i] - 65) + k) % 26 + 65; 
	  }
	else if (message[i] >= 97 && message[i] <= 122) // Lowercase Decryption
	  {
	    message[i] = ((message[i] - 97) + k) % 26 + 65;
	  }
      printf ("\nEncrypted message: %s\n", message);
      break;

    case 2:
    // case 2 is Decryption to all uppercase
      for (i = 0; (i < 100 && message[i] != '\0'); i++)
	if (message[i] >= 65 && message[i] <= 90) // Uppercase Decryption
	  {
	    message[i] = ((message[i] - 65) - k + 26) % 26 + 65;
	  }
	else if (message[i] >= 97 && message[i] <= 122) // Lowercase Decryption
	  {
	    message[i] = ((message[i] - 97) - k + 26) % 26 + 97;
	  }
      printf ("\nDecrypted message: %s\n", message);
      break;
      
    case 3:
    // case 3 is Decryption with unknown key
      g = abs((alpha[0] - 65) - (message[0] - 65));
      printf("Key is: %d", g);
      for (i = 0; (i < 100 && message[i] != '\0'); i++)  
      if (message[i] >= 65 && message[i] <= 90) // Uppercase Decryption
	  {
	    message[i] = ((message[i] - 65) - g + 26) % 26 + 65;
	  }
	else if (message[i] >= 97 && message[i] <= 122) // Lowercase Decryption
	  {
	    message[i] = ((message[i] - 97) - g + 26) % 26 + 97;
	  }
      printf ("\nDecrypted message: %s\n", message);
      break;

    default:
      printf ("\nError\n");
    }
  return 0;
}