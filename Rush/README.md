Build a solver for skyscaper puzzles
A skyscaper puzzle is a square based grid filled with numbers from n (f.e. 4x4 has 4 possible numbers to fill), each number is unique in row and column. Additionally there are pointers in each row and column with a number. Each filled in number in the grid has a height value like a skyscaper. - 4 is the largest, 1 is the smallest. The pointers symbolize a point of view, and the number means how many buildings it sees, so the direction is highly relevant. Looking at a building 4 first in the sequence means the 3,2,1 after the sequence are not visible meaning 1. If the first is 1 it means every other height is visible given it's 1,2,3,4 - means 4.  if it's 1,3,2,4 it's 3. 

Variables/Syntax:
Initial Variables

argc = amount of arguments
argv = arguments itself

Pseudocode what it roughly does:
Check if args are valid and correct amount. 
Return 1 if Error, write error.
Count number of items in row/col





Function description

ft_check_left(int **grid, int rw, int lcon, int ns);
ft_check_right(int **grid, int rw, int rcon, int n);
ft_check_top(int **grid, int cl, int tcon, int n);
ft_check_bot(int **grid, int cl, int bcon, int n);

ft_is_valid(int **grid, int val, int *pos, int **con);
ft_con_check(int **grid, int *pos, int **con);

*ft_next_pos(int *pos, int *next_pos);
ft_backtrack(int **grid, int *pos, int **con);

ft_count_n(char **argv);
ft_print_sol(int **grid, int n);

ft_free_meme(int **con, int **grid, int *arr1, int *arr2);
ft_pointers_alloc(int **grid_con, int *arr1_arr2, int gridn);
ft_malloc_protect(int **con, int **grid, int *arr1, int *arr2);

ft_pt_numbers(char **argv, int **con, int gridn);
ft_fill_grid(int **grid, int n);

ft_all_error_check(int argc, char **argv);
ft_other_error_check(int numbers, int argc, char **argv);
