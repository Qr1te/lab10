//
// Created by qr1tiooo on 14.03.2025.
//
#include "funcs.h"
void setNumber(int* number){
    int i = 0, hasnegative = 1;
    *number = 0;
    char digits[20];
    scanf("%s", digits);
    if(digits[0] == '-') hasnegative = -1 ;
    do {

        if (digits[i] < '0' || digits[i] > '9') {
            puts("Invalid input. Try again");
            fflush(stdin); setNumber(number);  break;
        }
        else { *number = *number * 10 + digits[i] - '0'; }
    } while(digits[++i] != 0);
    *number*=hasnegative;

}

char Try_answer() {
    char answer;
    scanf(" %c", &answer);
    while (answer != 'N' && answer != 'n' && answer != 'Y' && answer != 'y') {
        fflush(stdin);
        puts("Give a correct answer!");
        scanf(" %c", &answer);
    }
    fflush(stdin);
    return answer;
}
char *readLine() {
    int size = 1, i;
    char *str = (char*)calloc(sizeof(char), size);
    while (str[0] == 0) {
        rewind(stdin);
        char inputChar = getchar();
        for (i = 0; inputChar != '\n'; ++i) {
            if (i == size) {
                size += 1;
                str = (char*)realloc(str, size * sizeof(char));
            }
            str[i] = inputChar;
            inputChar = getchar();
        }

    }
    str = (char*)realloc(str, (i + 2) * sizeof(char));
    str[i + 1] = '\0';
    return str;
}

void findHighByte(){
    int num;
    printf("Enter the number: ");
    setNumber(&num);
    printf("%d\n", num);
    unsigned int highByte = num >> 24;
    printf("Higher byte = %d\n", highByte);
}
void inputStruct(struct footballTeams *team){
    printf("Enter count of team wins\n");
    setNumber(&team->wins);
    printf("Enter team name\n");
    team->name = readLine();
}

void outputStruct(struct footballTeams team){
    printf("Count of team wins = %d\n", team.wins);
    printf("Team name: %s\n", team.name);
}

void findTeams(struct footballTeams *teams, int count){
    for(int i = 0; i < count; i++){
        inputStruct(&teams[i]);
    }
    int wins;
    printf("Enter count of wins: ");
    setNumber(&wins);
    printf("Teams with more than %d wins\n", wins);
    for(int i = 0; i < count; i++){
        if(teams[i].wins > wins){
            printf("%s\n", teams[i].name);
        }
    }
}

void deleteTeams(struct footballTeams *teams, int *count){
    for(int i = 0; i < *count; i++){
        inputStruct(&teams[i]);
    }
    printf("Enter team name to delete ");
    char *name = readLine();
    for(int i = 0; i < *count; i++){
        if(strcmp(teams[i].name, name) == 0){
            for (int j = i; j < *count - 1; ++j){
                teams[j] = teams[j + 1];
                (*count)--;
                teams[*count].name = NULL;
                }
        }
    }
    printf("Remaining teams: \n");
    for(int i = 0; i < *count; i++){
        printf("%s\n", teams[i].name);
    }
}

void tasks(struct footballTeams *teams, int count){
    int ans;

    do {
        system("cls");
        fflush(stdin);
        printf("What you want to do:\n");
        printf("1. Find high byte of the num\n");
        printf("2. Input and output struct\n");
        printf("3. Find teams with more than a given number of wins.\n");
        printf("4.Delete commands with the given name.");
        setNumber(&ans);
        getchar();
        switch(ans) {
            case 1:findHighByte(); break;
            case 2:inputStruct(teams); outputStruct( *teams);break;
            case 3:findTeams(teams, count); break;
            case 4:deleteTeams(teams, &count); break;
            default: puts("Task number must be from 1 to 4!"); break;
        }
        puts("Do you want to try again?(y/n)");
        ans = Try_answer();
    }while (ans != 'n' && ans != 'N');
}