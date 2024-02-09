'''
Author: 谭必清
Date: 2024-02-09 05:08:37
LastEditors: 谭必清
LastEditTime: 2024-02-09 14:31:51
FilePath: /程序设计/chapter_001/avgLen.py
Copyright (c) 2020 - 2024 by TanBQ., All Rights Reserved.
'''
#!/usr/bin/env python3
from string import ascii_letters, digits

class String:
	def __init__(self, string: str):
		if (len(string) == 0):
			self.string = ""
			self.len = -1
			self.number = -1
			self.avg_len = -1
		else:
			self.string = string
			self.len = [_ for _ in self.string if _ in ascii_letters + digits].__len__()
			self.number = [_ for _ in self.string if _ == ' '].__len__() + 1;
			self.avg_len = self.len / self.number


def main():
	str1 = String("This is a demo.")
	print(str1.len)
	print(str1.number)
	print(str1.avg_len)

if __name__ == "__main__":
	main()
