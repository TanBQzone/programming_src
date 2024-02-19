/*
 * @Author: 谭必清
 * @Date: 2024-02-12 15:50:27
 * @LastEditors: 谭必清
 * @LastEditTime: 2024-02-13 20:32:42
 * @FilePath: /公众号代码/chapter_2/three_first_day.c
 * Copyright (c) 2020 - 2024 by TanBQ., All Rights Reserved.
 */

/**
 * 三首日
 * 这一天是分别是这一年、这一月、这一周的第一天
 * 已知2017年是三首日，求2017年后的5个三首日
*/

#include <stdio.h>
#include <time.h>

int main() {
    int year = 2017;
    int cnt = 5;
    int day = 0;

    while (cnt) {
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
            day += 2;
        } else {
            day += 1;
        }
        year++;
        if (day % 7 == 0) {
            printf("%d ", year);
            cnt--;
        }
    }
    return 0;
}
