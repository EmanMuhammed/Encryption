// The Vigenère Cipher Encryption
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	  
	  
	  string plaintext="make it";
	  string key="math";
      int counter=0;
      string storage_encryptedText;
      char storage_oneChar;
      
    //*************************************
    
	for(int i=0;i<plaintext.size();i++)
	{
	    storage_oneChar=plaintext[i];
	    
        if(isspace(storage_oneChar))
                    storage_encryptedText[i]=((26+(key[counter]-97))%27)+97;
                    
        else
	                storage_encryptedText[i]=(((plaintext[i]-97)+(key[counter]-97))%26)+97;
	                
	    counter++;
	    
	    if(counter==key.length())
	                counter=0;
	                
	    cout<<storage_encryptedText[i];
   }
	
	
getch();
}




