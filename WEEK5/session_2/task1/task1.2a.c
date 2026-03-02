//Week 5, Session 2

# include <stdio.h>
# include <string.h>

int main(void){
/* Task 1.2a
 * Complete the following while loop in C to ask user input for a password 
 * until 'secure123' is entered.
 */
     char password[50];
     char correct_password[50] = "secure123";
	 
	 // compare using strcmp(str1,str2) from week 4
	 // complete the rest of the code here

     do {
        printf("\nEnter password ");
        fgets(password,50,stdin);
        password[strcspn(password,"\n")] = '\0';
     }
     while (strcmp(password,correct_password) != 0);
    
    return 0;
}