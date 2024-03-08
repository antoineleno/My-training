#!/usr/bin/python3
alphabet = 122
while alphabet > 96:
    if alphabet % 2 == 0:
        print(chr(alphabet), end="")
    elif alphabet % 2 == 1:
        print(chr((alphabet - 32)), end="")
    alphabet -= 1
