#!/usr/bin/python3
"""Defines an island perimeter measuring function"""


def island_perimeter(grid):
    """
    Calculates perimeter of an island grid.
    `grid` represents water by 0 and land by 1.
    `grid` cells are connected horizontally/vertically (not diagonally)
    Args:
        grid(list): A list of list of integers representing an island.
    Return:
        Perimeter of the  island defined in grid.
    """
    perimeter = 0

    height = len(grid)
    width = len(grid[0])

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                perimeter += 4
                if grid[i - 1][j] == 1:
                    perimeter -= 2
                if grid[i][j - 1] == 1:
                    perimeter -= 2
    return perimeter

