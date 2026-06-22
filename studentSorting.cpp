/* Rank of student is computed using below rules. 



If total marks are different, then students with higher marks gets better rank.
If total marks are same, then students with higher marks in Maths gets better rank.
If total marks are same and marks in Maths are also same, then students with better marks in Physics gets better rank.
If total marks are same and marks in both Maths and Physics are also same, then students with better marks in Chemistry gets better rank.
If all marks (total, Maths, Physics and Chemistry) are same, then any student can be assigned better rank. */



#include <iostream>
#include <vector>
#include <algorithm>

struct Student
{
    std::string studentName{};
    double mathGrade{};
    double physicsGrade{};
    double chemistryGrade{};
    double total{};
    int rank{};
};

double getTotal(Student s)
{
    return s.mathGrade + s.physicsGrade + s.chemistryGrade;
}

bool compareStudents(Student a, Student b)
{
    if (a.total != b.total)
        return a.total > b.total;
    if (a.mathGrade != b.mathGrade)
        return a.mathGrade > b.mathGrade;
    if (a.physicsGrade != b.physicsGrade)
        return a.physicsGrade > b.physicsGrade;
    if (a.chemistryGrade != b.chemistryGrade)
        return a.chemistryGrade > b.chemistryGrade;
    return false;
}

int main()
{
    Student emma = { "Emma", 8.5, 7, 9 };
    
    Student leo = { "Leo", 6, 7, 6 };
    
    Student tommy = { "Tommy", 8, 5.5, 7 };
    
    Student judy = { "Judy", 6.5, 7, 4 };
   

    std::vector<Student> students = { emma, leo, tommy, judy };

    for (int i = 0; i < students.size(); i++)
    {
        students[i].total = getTotal(students[i]);
    }

    std::sort(students.begin(), students.end(), compareStudents);

    for (int i = 0; i < students.size(); i++)
    {
        students[i].rank = i + 1;
    }

    std::cout << "Student Rankings:\n";
    for (int i = 0; i < students.size(); i++)
    {
        std::cout << students[i].studentName << ": " << students[i].rank << "\n";
    }
}
