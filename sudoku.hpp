#ifndef sudoku_hpp
#define sudoku_hpp

class SudokuGenerator
{

};

class SudokuSolver
{
private:
    int Board[81];

public:
    void Solve();
    void CheckValidity(int value, int x, int y); 

};

#endif