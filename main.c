#include "funcs.h"

int main() {
    int count;
    printf("Enter count of football teams ");
    setNumber(&count);
    struct footballTeams *teams = malloc(count * sizeof(struct footballTeams));
    tasks(teams, count);
    free(teams);
    return 0;
}
