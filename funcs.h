//
// Created by qr1tiooo on 14.03.2025.
//

#ifndef LAB10_FUNCS_H
#define LAB10_FUNCS_H

#endif //LAB10_FUNCS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "struct.h"

void setNumber(int* number);
char Try_answer();
void findHighByte();
void inputStruct(struct footballTeams *team);
void outputStruct(struct footballTeams team);
void findTeams(struct footballTeams *teams, int count);
void deleteTeams(struct footballTeams *teams, int *count);
void tasks(struct footballTeams *teams, int count);