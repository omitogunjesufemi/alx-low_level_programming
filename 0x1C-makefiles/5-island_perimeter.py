#!/usr/bin/python3
"""This module contains a function def island_perimeter(grid):
that returns the perimeter of the island described in grid
"""


def island_perimeter(grid):
    """This module contains a function def island_perimeter(grid):
that returns the perimeter of the island described in grid:
  grid is a list of list of integers:
  0 represents a water zone
  1 represents a land zone
  One cell is a square with side length 1
  Grid cells are connected horizontally/vertically (not diagonally).
  Grid is rectangular, width and height don’t exceed 100

Grid is completely surrounded by water, and there is one island
(or nothing).
The island doesn’t have “lakes” (water inside that isn’t connected
to the water around the island).
    """
    total = 0
    for i in range(0, len(grid)):
        for j in range(0, len(grid[i])):
            top = 0
            bottom = 0
            right = 0
            left = 0
            if grid[i][j] == 1:
                if j == 0:
                    left = 1
                elif j > 0 and grid[i][j - 1] == 0:
                    left = 1

                if j == len(grid[i]) - 1:
                    right = 1
                elif (j < len(grid[i]) - 1) and (grid[i][j + 1] == 0):
                    right = 1

                if i == 0:
                    top = 1
                elif i > 0 and grid[i - 1][j] == 0:
                    top = 1
                if i == len(grid) - 1:
                    bottom = 1
                elif (i < len(grid) - 1) and (grid[i + 1][j] == 0):
                    bottom = 1
                total = total + top + bottom + right + left
    return (total)
