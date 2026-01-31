# Student Grade Calculator System (C++)

This is a **console-based C++ program** that calculates student grades based on marks in six subjects. The program inputs student marks, calculates totals, percentages, assigns grades, displays results, and saves them to a file.

## Features
- Input marks for multiple students in 6 subjects:
  - English
  - Urdu
  - Physics
  - Maths
  - PST
  - Science
- Calculate:
  - Total marks
  - Percentage
  - Grade (A, B, C, D, F)
- Display results on the console.
- Save results to a text file (`StudentGrades.txt`).

## How It Works
1. The program asks for the number of students.
2. Marks for each student in 6 subjects are entered.
3. Total marks and percentage are calculated.
4. Grade is assigned based on the percentage:
   - `A` : 80% and above
   - `B` : 70% - 79%
   - `C` : 60% - 69%
   - `D` : 50% - 59%
   - `F` : Below 50%
5. Results are displayed in a formatted manner on the console.
6. Results are saved to `StudentGrades.txt`.

## Program Structure
- **inputStudents()**: Takes input for all students and their marks.
- **calculateResult()**: Computes total, percentage, and grade for each student.
- **displayStudents()**: Displays formatted results in the console.
- **saveToFile()**: Writes the results to a text file.

## How to Compile and Run
```bash
g++ StudentGrades.cpp -o StudentGrades
./StudentGrades
