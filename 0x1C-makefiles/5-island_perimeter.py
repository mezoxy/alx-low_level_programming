#!/usr/bin/python3
"""The module: 5-island_perimeter"""


def island_perimeter(grid):
    """
        A function that returns the perimeter of
        the island described in grid
        grid is a list of list of integers:
        0 represents a water zone
        1 represents a land zone
        One cell is a square with side length 1
        Grid cells are connected horizontally/
        vertically (not diagonally).
        Grid is rectangular, width and height don’t exceed 100
        Grid is completely surrounded by water, and there
        is one island (or nothing)
        The island doesn’t have “lakes” (water inside that
        isn’t connected to the water around the island).
    """
    w = len(grid[0])
    h = len(grid)
    ed = 0
    size = 0

    for i in range(h):
        for j in range(w):
            if grid[i][j] == 1:
                size += 1
                if i != 0 and (grid[i - 1][j] == 1 or grid[i][j - 1] == 1):
                    ed += 1
    return size * 4 - ed * 2
