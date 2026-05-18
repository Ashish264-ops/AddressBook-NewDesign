#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "contact.h"
#include "file.h"
#include "populate.h"

/*void listContacts(AddressBook *addressBook) 
{
    // Sort contacts based on the chosen criteria
    
}

void initialize(AddressBook *addressBook) {
    addressBook->contactCount = 0
    
    
    //loadContactsFromFile(addressBook);
}

void saveAndExit(AddressBook *addressBook) 
{
    saveContactsToFile(addressBook); // Save contacts to file
    exit(EXIT_SUCCESS); // Exit the program
}
*/
int name_check(char *name)
{
    for(int i=0; name[i];i++)
    {
        if(!((name[i]>='a'&& name[i]<='z') || (name[i]>='A'&&name[i]<='Z')||name[i]==' '))
        return 0;
    }
    return 1;
}
int phone_check(AddressBook *addressBook,char *phone)
{
    int i=0,count=0;
    for(i=0;phone[0]!='\0',i++)
    {
        if(phone[i]>='0' || phone[i]<='9')
        {
            count++;
        }
    }
    if(count==10)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int email_check(char *email)
{
    int at=-1,dot=-1;
    for(int i=0; email[i]!='\0';i++)
    {
        if(email[i]==' ')
        {
            return 0;
        }
        if(email[i]=='@')
        {
            at=i;
        }
        if(email[i]=='.')
        {
            dot=i;
        }
    }
    if(at > 0 && dot > at + 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void createContact(AddressBook *addressBook)
{
	/* Define the logic to create a Contacts */
    char name[30];

    printf("Enter the Name:");
    scanf("%[^\n]",name);

    if (name_check(name))
    {
        break;
    }
    else
    {
        printf("Invalid Name");
    }

    name_check(name);
    printf("Valid Name Entred: %s\n",Name);

    char phone[11];

    printf("Enter the Phone Number:");
    scanf("%[^\n]",Phone);

    if(phone_check(phone))
    {
        break;
    }
    else
    {
        printf("Invalid phone number\n");
    }

    phone_check(phone);
    printf("Valid phone number: %s\n",phone);

    char email[20];
    printf("Enter the Email:");
    scanf("%[^\n]",email);

    if(email_check(email))
    {
        break;
    }
    else
    {
        printf("Invalid Email Id\n");
    }

    email_check(email);
    printf("Valid Email: %s\n",email);


}

/*void searchContact(AddressBook *addressBook) 
{
    /* Define the logic for search */
}
*/

/*
void editContact(AddressBook *addressBook)
{
	/* Define the logic for Editcontact */
    
}
*/

/*
void deleteContact(AddressBook *addressBook)
{
	/* Define the logic for deletecontact */ 
}
*/

