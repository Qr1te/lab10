//
// Created by qr1tiooo on 14.03.2025.
//

#ifndef LAB10_STRUCT_H
#define LAB10_STRUCT_H

#endif //LAB10_STRUCT_H
union num{
    int number;
    struct {
        unsigned int b1 :24;
        unsigned int b2 :8;
    }byte;
};

struct year{
    char Year[4];
};
struct footballTeams{
    int wins;
    char *name;
    struct year winYear;
    int losses;
};