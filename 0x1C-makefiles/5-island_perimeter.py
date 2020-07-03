#!/usr/bin/python3
# -*- coding: utf-8 -*-
"""
Created on Fri Jul  3 09:29:55 2020

@author: Robinson Montes
"""


def island_perimeter(grid):
    """
    Calculater the Island's perimeter

    Parameter:
        grid (array): An 0's and 1's array that represents an island (1)
        sourrounded by water (0)

    Returns:
        The island's perimeter
    """
    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0
    for i in range(1, rows - 1):
        for j in range(1, cols - 1):
            if grid[i][j] == 1:
                if grid[i - 1][j] == 0:
                    perimeter += 1
                if grid[i + 1][j] == 0:
                    perimeter += 1
                if grid[i][j - 1] == 0:
                    perimeter += 1
                if grid[i][j + 1] == 0:
                    perimeter += 1
    return perimeter
