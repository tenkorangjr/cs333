/**
 * @file BankExample.c
 * @author Max Bender
 * @date 2024-01-22
 * 
 * A goofy example to demonstrate need for care when managing strings in C.
 *
 * Modified by Ying Li 08/15/2024
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * This creates a definition for the struct Account.
 *
 * Note that balance (an int) is saved after name in memory.
 */
typedef struct Account {
    char name[10];
    int balance;
} Account;

int main(int arg, char *argv[]) {
    Account newAccount = {"", 0};
    printf("Please input your name for a new bank account: ");
    
    /**
     * The following line reads input from the terminal.
     *
     * One could have simply done: scanf("%s", newAccount.name), but this would 
     * include the newline character at the end of the line. The [^\n] tells the
     * program to only read as much until a newline character is encountered. 
     */
    scanf("%[^\n]s", newAccount.name);
    
    // Initializing a pointer to iterate through the newAccount memory block
    unsigned char *ptr = (unsigned char *) &newAccount.name;
    for (int i = 0; i < sizeof(Account); i++) {
       // printing out the address, value and corresponding character given a memory address
       printf("Address: %p, Value: %02X, Character: %c\n", ptr+i, ptr[i], (char)ptr[i]); 
    }

    printf("Thank you %s, your new account has been initialized with balance %d.",
           newAccount.name, newAccount.balance);
					 
    return 0;
}
