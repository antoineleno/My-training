#!/usr/bin/python3
"""Define a class square"""


class Square:
    """Represent a square"""
    def __init__(self, size=0):
        """Initialize a new Square.
        Args:
            size (int): The size of the new square.
        """
    
        if not isinstance(size, int):
            raise TypeError("Size must be an integer")
        elif size < 0:
            raise ValueError("Size must be >= 0")
        self.__size = size

