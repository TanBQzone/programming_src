'''
Author: 谭必清
Date: 2024-02-12 16:33:18
LastEditors: 谭必清
LastEditTime: 2024-02-13 20:44:54
FilePath: /公众号代码/chapter_2/get_condition_date.py
Copyright (c) 2020 - 2024 by TanBQ., All Rights Reserved.
'''

import datetime

def get_condition_date(year, limit) -> list :
    years = []
    total_day = 0

    while limit:
        total_day += 366 if year % 4 == 0 and year % 100 != 0 or year % 400 == 0 else 365

        year += 1

        if total_day % 7 == 0:
            limit -= 1
            years.append(year)

    return years


def main():
    res = get_condition_date(2017, 5)
    print(res)


if __name__ == "__main__":
    main()
