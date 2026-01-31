#include <iostream>
#include <fstream>

using namespace std;

// Function prototypes
void inputStudents(int &, int[][6]);
void calculateResult(int, int[][6], int[], float[], char[]);
void displayStudents(int, int[][6], int[], float[], char[]);
void saveToFile(int, int[][6], int[], float[], char[]);

int main()
{
    int totalStudents;
    int marks[50][6];      // 6 subjects
    int total[50];
    float percentage[50];
    char grade[50];

    inputStudents(totalStudents, marks);
    calculateResult(totalStudents, marks, total, percentage, grade);
    displayStudents(totalStudents, marks, total, percentage, grade);
    saveToFile(totalStudents, marks, total, percentage, grade);

    cout << "\nData successfully saved in file!" << endl;
    return 0;
}

// Input students & subject marks
void inputStudents(int &n, int m[][6])
{
    string subjects[6] = {"English", "Urdu", "Physics", "Maths", "PST", "Science"};

    cout << "Enter number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter marks for Student " << i + 1 << ":\n";

        for (int j = 0; j < 6; j++)
        {
            cout << subjects[j] << ": ";
            cin >> m[i][j];
        }
    }
}

// Calculate total, percentage & grade
void calculateResult(int n, int m[][6], int total[], float per[], char g[])
{
    for (int i = 0; i < n; i++)
    {
        total[i] = 0;

        for (int j = 0; j < 6; j++)
        {
            total[i] += m[i][j];
        }

        per[i] = (total[i] / 600.0) * 100;

        if (per[i] >= 80)
            g[i] = 'A';
        else if (per[i] >= 70)
            g[i] = 'B';
        else if (per[i] >= 60)
            g[i] = 'C';
        else if (per[i] >= 50)
            g[i] = 'D';
        else
            g[i] = 'F';
    }
}

// Display results
void displayStudents(int n, int m[][6], int total[], float per[], char g[])
{
    string subjects[6] = {"English", "Urdu", "Physics", "Maths", "PST", "Science"};

    cout << "\nStudent Result Card\n";
    cout << "---------------------------------\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Student " << i + 1 << ":\n";

        for (int j = 0; j < 6; j++)
        {
            cout << subjects[j] << ": " << m[i][j] << endl;
        }

        cout << "Total: " << total[i] << "/600" << endl;
        cout << "Percentage: " << per[i] << "%" << endl;
        cout << "Grade: " << g[i] << endl;
        cout << "---------------------------------\n";
    }
}

// Save data to file
void saveToFile(int n, int m[][6], int total[], float per[], char g[])
{
    string subjects[6] = {"English", "Urdu", "Physics", "Maths", "PST", "Science"};

    ofstream file("StudentGrades.txt");

    file << "Student Grade Calculator System\n";
    file << "---------------------------------\n";

    for (int i = 0; i < n; i++)
    {
        file << "Student " << i + 1 << ":\n";

        for (int j = 0; j < 6; j++)
        {
            file << subjects[j] << ": " << m[i][j] << endl;
        }

        file << "Total: " << total[i] << "/600\n";
        file << "Percentage: " << per[i] << "%\n";
        file << "Grade: " << g[i] << "\n";
        file << "---------------------------------\n";
    }

    file.close();
}



