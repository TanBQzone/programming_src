/*
 * @Author: 谭必清
 * @Date: 2024-02-12 16:47:12
 * @LastEditors: 谭必清
 * @LastEditTime: 2024-02-12 16:57:07
 * @FilePath: /公众号代码/chapter_2/ConditionDate.java
 * Copyright (c) 2020 - 2024 by TanBQ., All Rights Reserved.
 */
import java.util.ArrayList;

/**
 * get_condition_date
 */
public class ConditionDate {
    public static void main(String[] args) {
        ArrayList<Integer> years = getConditionDate(2017, 5);

        for (Integer year : years) {
            System.err.println(year);
        }
    }

    public static ArrayList<Integer> getConditionDate(int year, int limit) {
        ArrayList<Integer> years = new ArrayList<>();

        int cnt = 0;
        int totalDay = 0;

        while (cnt < limit) {
            if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
                totalDay += 366;
            } else {
                totalDay += 365;
            }

            year++;

            if (totalDay % 7 == 0) {
                years.add(year);
                cnt++;
            }
        }

        return years;
    }
}