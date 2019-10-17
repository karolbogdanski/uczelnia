# -*- coding: utf-8 -*-

liczba = raw_input("dej liczbe: ")

mapp = {
	"1": "one",
	"2": "two",
	"3": "three",
	"4": "four"
}


for i in liczba:
	print(mapp.get(i, "!"))
