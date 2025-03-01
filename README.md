# 🧩 Sudoku Solver

## 📌 Description
This is a C++ program that solves a **9x9 Sudoku puzzle** using a **backtracking algorithm**. The program reads a Sudoku board from the user, attempts to solve it, and displays the solution (if one exists). 🏆

## ✨ Features
- 📝 Reads a **9x9 Sudoku puzzle** from user input.
- 🔄 Uses **recursive backtracking** to find a solution.
- ✅ **Validates Sudoku rules** (no duplicates in rows, columns, or 3×3 grids).
- 📊 **Displays the puzzle** before and after solving.
- ❌ Prints an **error message** if no solution exists.

## 🛠️ How It Works
1. 🔍 **Finds an empty cell** (a cell with `0`).
2. 🔢 **Attempts to place numbers** (`1-9`) in the empty cell while following Sudoku rules:
   - The number must not appear in the same **row**, **column**, or **3×3 grid**.
3. 🔁 **Recursively continues** to solve the puzzle.
4. 🔙 If a conflict arises, it **backtracks** by removing the last placed number and trying a different one.
5. 🎉 Once the board is completely filled, the solution is displayed.

## ⚙️ Project Setup
### 🏗️ Compilation
To compile the program, use a C++ compiler such as `g++`:
```sh
 g++ sudoku_solver.cpp -o sudoku_solver
```

### ▶️ Running the Program
Run the compiled program:
```sh
./sudoku_solver
```

## 📥 Usage
### 📌 Input Format
The program prompts the user to enter a **9×9 Sudoku puzzle**. Enter numbers from **1-9** for filled cells and `0` for empty cells.

📝 Example Input:
```
0 0 5 3 0 0 0 0 0
8 0 0 0 0 0 0 2 0
0 7 0 0 1 0 5 0 0
4 0 0 0 0 5 3 0 0
0 1 0 0 7 0 0 0 6
0 0 3 2 0 0 0 8 0
0 6 0 5 0 0 0 0 9
0 0 4 0 0 0 0 3 0
0 0 0 0 0 9 7 0 0
```

### 📤 Output Example
```
Original Sudoku Puzzle:
0 0 5 | 3 0 0 | 0 0 0
8 0 0 | 0 0 0 | 0 2 0
0 7 0 | 0 1 0 | 5 0 0
---------------------
4 0 0 | 0 0 5 | 3 0 0
0 1 0 | 0 7 0 | 0 0 6
0 0 3 | 2 0 0 | 0 8 0
---------------------
0 6 0 | 5 0 0 | 0 0 9
0 0 4 | 0 0 0 | 0 3 0
0 0 0 | 0 0 9 | 7 0 0

Solving...

Solved Sudoku Puzzle:
1 4 5 | 3 2 7 | 6 9 8
8 3 9 | 6 5 4 | 1 2 7
6 7 2 | 9 1 8 | 5 4 3
---------------------
4 9 6 | 1 8 5 | 3 7 2
2 1 8 | 7 3 6 | 9 5 4
7 5 3 | 2 4 9 | 8 1 6
---------------------
3 6 7 | 5 9 2 | 4 8 1
9 8 4 | 3 6 1 | 2 7 5
5 2 1 | 8 7 4 | 7 6 9
```

## 📌 Requirements
- 🖥️ **C++ compiler** (e.g., `g++`)
- 💻 **Terminal/Command Prompt** to execute the program

## 🎨 Customization
- 🛠️ Modify the initial **Sudoku board** in `main()` to test different puzzles.
- ⏳ Adjust solving speed by modifying `usleep(100000);` in `printBoard()`.
- 🖥️ For Windows, replace `system("clear");` with `system("CLS");`.

## 📜 License
This project is open-source and free to use! 🚀

## 👨‍💻 Author
Developed by **[Sumaiya Haq]** 😊

