//
// Created by qr1tiooo on 14.03.2025.
//

#ifndef LAB10_STRUCT_H
#define LAB10_STRUCT_H

#endif //LAB10_STRUCT_H

struct year{
    char Year[4];
};
struct footballTeams{
    int wins;
    char *name;
    struct year winYear;
    int losses;
};