#include<stdio.h>

int
main ()
{
  int x;
  int i;
  int k;
  char message[100];

  printf ("\nPlease enter the message: ");
  gets (message);
  printf ("\nPlease enter a key: ");
  scanf ("%d", &k);

  printf ("\nWould you like to:\n");
  printf ("1 = Encrypt the message.\n");
  printf ("2 = Decrypt the message.\n");
  scanf ("%d", &x);





  switch (x)
    {
    case 1:
      for (i = 0; (i < 100 && message[i] != '\0'); i++)
	if (message[i] >= 65 && message[i] <= 90)
	  {
	    message[i] = ((message[i] - 65) + k) % 26 + 65;
	  }
	else if (message[i] >= 97 && message[i] <= 122)
	  {
	    message[i] = ((message[i] - 97) + k) % 26 + 65;
	  }
      printf ("\nEncrypted message: %s\n", message);
      break;

    case 2:
      for (i = 0; (i < 100 && message[i] != '\0'); i++)
	if (message[i] >= 65 && message[i] <= 90)
	  {
	    message[i] = ((message[i] - 65) - k + 26) % 26 + 65;
	  }
	else if (message[i] >= 97 && message[i] <= 122)
	  {
	    message[i] = ((message[i] - 97) - k + 26) % 26 + 97;
	  }
      printf ("\nDecrypted message: %s\n", message);
      break;

    default:
      printf ("\nError\n");
    }
  return 0;
}