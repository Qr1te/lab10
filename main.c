#include "funcs.h"

int main() {
    int choice;
    printf("What you want to do: 1. find high byte 2. work with struct\n");
    setNumber(&choice);
    while(choice != 1 && choice != 2){
        printf("Select 1 or 2\n");
        setNumber(&choice);
    }
    if(choice == 1) findHighByte();
    else if (choice == 2){
        int count;
        printf("Enter count of football teams ");
        setNumber(&count);
        struct footballTeams *teams = malloc(count * sizeof(struct footballTeams));
        tasks(teams, count);
        free(teams);}
    return 0;
}
