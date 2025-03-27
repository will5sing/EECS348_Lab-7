#include "football.h"

int main(int argc, char *argv[]) {
    int score, option, continue_loop; //Creating the variable of the score the user wants
    while (option != 1) {
        printf("Enter 0 or 1(Go or Stop): ");  //User while loop, that keeps giving them the score until 0
        scanf( "%d", &continue_loop);
        if (continue_loop == 1) {  //We look at whether the user wants to continue
            printf("Enter the NFL Score: ");  //Ask the user for the desired scpre
            scanf("%d", &score);
            printf("Possible combinations of scoring plays for a team's score of %d: \n",score); //We then print just like the example
            print_combinations(score); //Then we run the score through to get and print all the combinations
            int count = count_combinations(score);
            printf("Total combinations: %d\n", count);  //Just for extra info we print the number of all the combinations
        }
        if (continue_loop == 0) {  //This is to exit the program and end the while loop
            break;
        } 
        else {  //This is for error handling
            printf("Invalid Input");
        }
    }
    return 0; //Here we end the main
}