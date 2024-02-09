/*
 * @Author: 谭必清
 * @Date: 2024-02-09 05:08:18
 * @LastEditors: 谭必清
 * @LastEditTime: 2024-02-09 13:54:39
 * @FilePath: /程序设计/chapter_001/avgLen.java
 * Copyright (c) 2020 - 2024 by TanBQ., All Rights Reserved.
 */
class avgLen {
	public static void main(String[] args) {
		String string = new String("This is a demo.");
		int number = string.split(" ").length;
		int len = string.length() - number;
		double avg_len = len / 1.0 / number;
		System.out.println(string);
		System.out.println(len);
		System.out.println(number);
		System.out.println(avg_len);
	}
}
