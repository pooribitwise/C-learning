# Sudoku backtracing algorithm enhanced with MRV
Here is sudoku solver program written in C.
It uses backtracing algorithm to solve, manipulating table as pointer of pointers in heap,
for each iteration, it finds the cell with the least possible values (to make combination tree smaller)
and fills it and continues to the next cell.
## how to use

## Build
Since `math.h` is included, we got to link the math library
```bash
gcc main.c -o main -lm
```
### Options (MACROs definition)
`#define HTML_OUTPUT`
comment this line if you want the output to be stdio (added for printing suitable output for the markdown).
`#define GREEN ""`
define suitable coloring syntax for your desired output, the __linux__ one is for linux systems printing in stdout
`#define RESET`
used for reseting the color to it's default
## Usage
1. `./main`
2. enter your puzzle dimension (custom and no limits in theory, but bigger than 16\*16 cannot be solved in time)
```bash
9
```
3. fill the table, use 0 for blank numbers
```bash
5 0 0   4 0 0   1 0 0
3 0 0   0 0 5   0 0 7
0 9 0   0 0 3   5 0 0

2 0 0   7 0 0   0 0 0
0 0 4   0 0 8   0 0 0
6 0 0   0 0 0   0 0 9

0 0 6   0 0 0   4 0 0
0 0 1   0 0 9   2 0 0
0 0 0   0 5 0   0 8 0
```
4. press enter, and your sudoku will be solved and printed with prettified format:
<pre>
-------------------
|5 <span style="color:green;">6</span> <span style="color:green;">7</span>|4 <span style="color:green;">8</span> <span style="color:green;">2</span>|1 <span style="color:green;">9</span> <span style="color:green;">3</span>|
|3 <span style="color:green;">4</span> <span style="color:green;">2</span>|<span style="color:green;">9</span> <span style="color:green;">1</span> 5|<span style="color:green;">8</span> <span style="color:green;">6</span> 7|
|<span style="color:green;">1</span> 9 <span style="color:green;">8</span>|<span style="color:green;">6</span> <span style="color:green;">7</span> 3|5 <span style="color:green;">2</span> <span style="color:green;">4</span>|
-------------------
|2 <span style="color:green;">1</span> <span style="color:green;">9</span>|7 <span style="color:green;">4</span> <span style="color:green;">6</span>|<span style="color:green;">3</span> <span style="color:green;">5</span> <span style="color:green;">8</span>|
|<span style="color:green;">7</span> <span style="color:green;">3</span> 4|<span style="color:green;">5</span> <span style="color:green;">9</span> 8|<span style="color:green;">6</span> <span style="color:green;">1</span> <span style="color:green;">2</span>|
|6 <span style="color:green;">8</span> <span style="color:green;">5</span>|<span style="color:green;">2</span> <span style="color:green;">3</span> <span style="color:green;">1</span>|<span style="color:green;">7</span> <span style="color:green;">4</span> 9|
-------------------
|<span style="color:green;">9</span> <span style="color:green;">5</span> 6|<span style="color:green;">8</span> <span style="color:green;">2</span> <span style="color:green;">4</span>|4 <span style="color:green;">3</span> <span style="color:green;">1</span>|
|<span style="color:green;">8</span> <span style="color:green;">7</span> 1|<span style="color:green;">3</span> <span style="color:green;">6</span> 9|2 <span style="color:green;">7</span> <span style="color:green;">5</span>|
|<span style="color:green;">4</span> <span style="color:green;">2</span> <span style="color:green;">3</span>|<span style="color:green;">1</span> 5 <span style="color:green;">7</span>|<span style="color:green;">9</span> 8 <span style="color:green;">6</span>|
-------------------
</pre>
<img width="158" height="185" alt="9x9" src="https://github.com/user-attachments/assets/95ede47f-d972-4bdd-a629-6f9df3e87eed" />
<br>
and here is for 16\*16 (formatting is dynamicly applied to table dimensions)
<br>
<img width="399" height="321" alt="16x16" src="https://github.com/user-attachments/assets/c0198e6b-876b-4463-946b-a51f88f918bc" />
