#!/usr/bin/python3
"""function def island_perimeter(grid): that returns the perimeter
of the island described in grid"""

def island_perimeter(grid):
    """returns the perimeter of the island described
    0 represents a water zone 1 represents a land zone
    Args:
    grid: A list of integers representing an island
    Returns:
    The perimeter of the island defined in grid
    """

    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for sl in range(height):
        for pk in range(width):
            if grid [sl][pk] == 1:
                size += 1
                if (pk > 0 and grid[sl][pk -1] == 1):
                    edges += 1
    return size *4 -edges *2
