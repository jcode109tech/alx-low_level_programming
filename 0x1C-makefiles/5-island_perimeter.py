#!/usr/bin/python3
"""
NUMBER GRID FOR 2D ISLAND
"""

def island_perimeter(grid):
    """
    Finds perimeter of a 2D grid for an island
    depicted with numbers.
    = { 1 if land,
        0 otherwise - water }
    """
    if not isinstance(grid, list):
        return 0

    perimeter = 0
    size = 100
    len_grid = len(grid)
    wid_grid = len(grid[0])

    for i in range(len_grid):
        for j in range(wid_grid):
            if len_grid <= size and wid_grid <= size:
                if grid[j][i] == 1:
                    perimeter += 4
                    if i > 0 and grid[j][i - 1] == 1:  # Check left neighbor
                        perimeter -= 2
                    if j > 0 and grid[j - 1][i] == 1:  # Check upper neighbor
                        perimeter -= 2
        return perimeter
    else:
        return 0  # Grid size exceeds the limit
