//
// Created by gerat on 7. 11. 2022.
//

#ifndef POS_CVICENIE07_ARRAYLIST_DATE_H
#define POS_CVICENIE07_ARRAYLIST_DATE_H


//struct date {
//    int year;
//    int month;
//    int day;
//};
//
//funkcia vracajuca integer
//int date_compare(struct date dateA, struct date dateB);

//pomocou typedef dokazem zaviest alias pre nejaky struct
typedef struct date {
    int year;
    int month;
    int day;
} DATE;

//funkcia vracajuca integer
int date_compare(DATE dateA, DATE dateB);

#endif //POS_CVICENIE07_ARRAYLIST_DATE_H
