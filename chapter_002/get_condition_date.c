/*
 * @Author: 谭必清
 * @Date: 2024-02-12 16:17:12
 * @LastEditors: 谭必清
 * @LastEditTime: 2024-02-13 20:39:00
 * @FilePath: /公众号代码/chapter_2/get_condition_date.c
 * Copyright (c) 2020 - 2024 by TanBQ., All Rights Reserved.
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @description: 返回指定个数的与开始日期的一月一日一样星期的年份
 * @param {int} year 开始的日期
 * @param {int} limit 多少个
 * @return {*} 符合条件的数组，数组的第一个是总个数
 */
int *getConditionDate(int year, const int limit) {
    // 动态分配数组的内存
    int *years = (int *)malloc((limit + 1) * sizeof(int));

    // 检查内存分配是否成功
    if (years == NULL) {
        printf("内存分配失败。\n");
        exit(EXIT_FAILURE);
    }

    years[0] = limit; // 设置数组的长度

    int cnt = 1;
    int totalDay = 0;

    while (cnt <= limit) {
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
            totalDay += 366;
        } else {
            totalDay += 365;
        }

        year++;

        if (totalDay % 7 == 0) {
            years[cnt++] = year;
        }
    }

    return years;
}

int main(void) {
    int *years = getConditionDate(2017, 10);

    for (int i = 1; i <= years[0]; i++) {
        printf("%d ", years[i]);
    }
    printf("\n");

    free(years);

    return 0;
}