#include "football.h"
#include <stdio.h>

int TD = 6; //Touch Down = 6Pts
int FG = 3;  //Field Goal = 3Pts
int ST = 2;  //Safety = 2Pts
int TD_2 = 8;  //Touch Down with 2Pts = 8
int TD_FG1 = 7;  //Touch Down with FG 1Pts = 7

void print_combination(int score) {  //Finds all the possibilties of the score with different scoring methods
    for (int td2pt = 0; td2pt * TD_2 <= score; td2pt++) {  /*Starting from zero we interate through all the combos 
        of what could equal the score */
        for(int td_fg = 0; td_fg * TD_FG1 <= score; td_fg++) {  
            for(int td = 0; td * TD <= score; td++)  {  // The ammount of times is added to the variable 
                for(int fg = 0; fg * FG <=score; fg++) {
                    for(int st = 0; st * ST <=score; st++) {  //We now know theough all of these, the coombinations
                        int total = (td2pt * TD_2) + (td_fg * TD_FG1) + (td* TD) + (fg *FG) + (st * ST);
                        if(total == score)  {  // Now we take the combinations and print them
                            printf("%d TD + 2, %d TD + FG, %d TD, %d FG-3pt, %d Safety\n ", 
                                td2pt, td_fg, td, fg, st);
                        }
                    }
                }
            }
        }
    }
}
int count_combination(int score)  {
    int count = 0;
    for (int td2pt = 0; td2pt * TD_2 <= score; td2pt++) {  /*Starting from zero we interate through all the combos 
        of what could equal the score */
        for(int td_fg = 0; td_fg * TD_FG1 <= score; td_fg++) {  
            for(int td = 0; td * TD <= score; td++)  {  // The ammount of times is added to the variable 
                for(int fg = 0; fg * FG <=score; fg++) {
                    for(int st = 0; st * ST <=score; st++) {  //We now know theough all of these, the coombinations
                        int total = (td2pt * TD_2) + (td_fg * TD_FG1) + (td* TD) + (fg *FG) + (st * ST);
                        if(total == score)  {  //Now we just add up all the perfect scores and get the # of combinations
                            count++;
                        }
                    }
                }
            }
        }
    }
    return count;
}