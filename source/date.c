#include "../header/date.h"

int date_compare(DATE dateA, DATE dateB) {
    if (dateA.year < dateB.year ||
        dateA.year == dateB.year && dateA.month < dateB.month ||
        dateA.year == dateB.year && dateA.month == dateB.month && dateA.day < dateB.day) {
        return -1;
    }
    else if (dateA.year == dateB.year && dateA.month == dateB.month && dateA.day == dateB.day) {
        return 0;
    }
    else {
        return 1;
    }
}

void date_print(DATE date) {
    printf("%d.%d.%d", date.day, date.month, date.year);
}
