/******************
Name: Mohamad Deb
ID: 208184606
Assignment: 2
*******************/

#include <stdio.h>

int main()
{
    int choice;
    
    while (1) {
        // Display menu
        printf("Welcome to our games, please choose an option:\n");
        printf("\n");
        printf("1. Ducky's Unity Game\n");
        printf("2. The Memory Game\n");
        printf("3. Professor Pat's Power Calculation\n");
        printf("4. The Duck Parade\n");
        printf("5. The Mystery of the Repeated Digits\n");
        printf("6. Good Night Ducks\n");
        printf("\n");
        
        scanf("%d", &choice);
        
        if (choice == 1) {
            // Task 1: Ducky's Unity Game - Count 1's in binary
            int num;
            while (1) {
                printf("please enter a positive number:\n");
                printf("\n");
                scanf("%d", &num);
                if (num <= 0) {
                    printf("Invalid number, please try again\n");
                    printf("\n");
                } else {
                    break;
                }
            }
            
            int count = 0;
            int temp = num;
            while (temp > 0) {
                if (temp % 2 == 1) {
                    count++;
                }
                temp = temp / 2;
            }
            
            printf("Ducky earns %d corns\n", count);
            printf("\n");
            
        } else if (choice == 2) {
            // Task 2: The Memory Game - Store duck sounds
            int num_ducks;
            while (1) {
                printf("please enter the number of ducks:\n");
                printf("\n");
                scanf("%d", &num_ducks);
                if (num_ducks <= 0) {
                    printf("Invalid number, please try again\n");
                    printf("\n");
                } else {
                    break;
                }
            }
            
            printf("you entered %d ducks\n", num_ducks);
            printf("\n");
            
            // Process each duck and print immediately
            for (int i = 1; i <= num_ducks; i++) {
                int quak;
                while (1) {
                    printf("duck %d do QUAK? 1 for yes, 0 for no\n", i);
                    printf("\n");
                    scanf("%d", &quak);
                    if (quak != 0 && quak != 1) {
                        printf("Invalid number, please try again\n");
                        printf("\n");
                    } else {
                        break;
                    }
                }
                
                // Store and immediately print result
                if (quak == 1) {
                    printf("duck number %d do Quak\n", i);
                } else {
                    printf("duck number %d do Sh...\n", i);
                }
            }
            printf("\n");
            
        } else if (choice == 3) {
            // Task 3: Professor Pat's Power Calculation
            int base, exponent;
            
            while (1) {
                printf("please enter the number\n");
                printf("\n");
                scanf("%d", &base);
                if (base < 0) {
                    printf("Invalid number, please try again\n");
                    printf("\n");
                } else {
                    break;
                }
            }
            
            while (1) {
                printf("please enter the exponent\n");
                printf("\n");
                scanf("%d", &exponent);
                if (exponent < 0) {
                    printf("Invalid number, please try again\n");
                    printf("\n");
                } else {
                    break;
                }
            }
            
            int result = 1;
            for (int i = 0; i < exponent; i++) {
                result = result * base;
            }
            
            printf("your power is: %d\n", result);
            printf("\n");
            
        } else if (choice == 4) {
            // Task 4: The Duck Parade - Draw ducks
            int num_ducks;
            while (1) {
                printf("please enter number of ducks:\n");
                printf("\n");
                scanf("%d", &num_ducks);
                if (num_ducks <= 0) {
                    printf("Invalid number, please try again\n");
                    printf("\n");
                } else {
                    break;
                }
            }
            
            // First line: spaces and underscores
            int duck_count = 0;
            while (duck_count < num_ducks) {
                printf("   _");
                duck_count++;
                if (duck_count % 10 == 0 || duck_count == num_ducks) {
                    printf("\n");
                } else {
                    printf("\t\t");
                }
            }
            
            // Second line: __(o)>
            duck_count = 0;
            while (duck_count < num_ducks) {
                printf("__(o)>");
                duck_count++;
                if (duck_count % 10 == 0 || duck_count == num_ducks) {
                    printf("\n");
                } else {
                    printf("\t\t");
                }
            }
            
            // Third line: \___)
            duck_count = 0;
            while (duck_count < num_ducks) {
                printf("\\___)");
                duck_count++;
                if (duck_count % 10 == 0 || duck_count == num_ducks) {
                    printf("\n");
                } else {
                    printf("\t\t");
                }
            }
            printf("\n");
            
        } else if (choice == 5) {
            // Task 5: The Mystery of the Repeated Digits - NO ARRAYS
            int num;
            while (1) {
                printf("please enter number\n");
                printf("\n");
                scanf("%d", &num);
                if (num <= 0) {
                    printf("Invalid number, please try again\n");
                    printf("\n");
                } else {
                    break;
                }
            }
            
            int temp = num;
            int position = 0;
            
            // For each digit from right to left
            while (temp > 0) {
                int current_digit = temp % 10;
                int check_num = temp / 10; // The remaining part to the left
                int found_duplicate = 0;
                
                // Check if this digit appears again in the remaining number
                int temp_check = check_num;
                while (temp_check > 0) {
                    if (temp_check % 10 == current_digit) {
                        found_duplicate = 1;
                        break;
                    }
                    temp_check = temp_check / 10;
                }
                
                if (found_duplicate) {
                    printf("%d appears more than once!\n", current_digit);
                }
                
                temp = temp / 10;
                position++;
            }
            printf("\n");
            
        } else if (choice == 6) {
            // Exit the program
            printf("Good night! See you at the pond tomorrow.\n");
            break;
            
        } else {
            // Invalid menu option
            printf("Invalid option, please try again\n");
            printf("\n");
        }
    }
    

    return 0;
}
