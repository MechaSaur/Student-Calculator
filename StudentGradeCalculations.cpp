#include <iostream>
#include <string>
// First published C++ program since completing tutorials - MechaSaur
// 
// Class to keep track of student information
class Student {
public:
    std::string name;
    double grade1;
    double grade2;
    double grade3;
    double grade4;


    Student(std::string name, double grade1, double grade2, double grade3, double grade4) {
        this->name = name;
        this->grade1 = grade1;
        this->grade2 = grade2;
        this->grade3 = grade3;
        this->grade4 = grade4;


}

    void gradeAverage() {
        double gradeTotal = (grade1 + grade2 + grade3 + grade4) / 4;
        std::cout << "Grade average between four classes is " << gradeTotal << "%" << '\n';
    }
    // Method to print student information
    void showGrade() {
        std::cout << "Student Name: " << name << '\n';
        std::cout << "Class 1 Grade: " << grade1 << '\n';
        std::cout << "Class 2 Grade: " << grade2 << '\n';
        std::cout << "Class 3 Grade: " << grade3 << '\n';
        std::cout << "Class 4 Grade: " << grade4 << '\n';
    }

 
};


int main()
{
    // Keeps the program running
    bool runProgram = true;
    int studentAmount;
    // Student name variables
    std::string student1Name;
    std::string student2Name;
    std::string student3Name;
    std::string student4Name;
    // Student 1 grades
    double student1Grade1;
    double student1Grade2;
    double student1Grade3;
    double student1Grade4;
    // student 2 grades
    double student2Grade1;
    double student2Grade2;
    double student2Grade3;
    double student2Grade4;
    // Student 3 grades
    double student3Grade1;
    double student3Grade2;
    double student3Grade3;
    double student3Grade4;
    // Student 4 grades
    double student4Grade1;
    double student4Grade2;
    double student4Grade3;
    double student4Grade4;

    do {
        // Get student information from users
        std::cout << "How many students do you want to input? You can input up to 4" << '\n';
        std::cin >> studentAmount;
        if (studentAmount == 1) {
            std::cout << "Enter the name for the student: " << '\n';
            std::cin >> student1Name;
            std::cout << "Enter the first of four grades: " << '\n';
            std::cin >> student1Grade1;
            std::cout << "Enter the second of the four grades: " << '\n';
            std::cin >> student1Grade2;
            std::cout << "Enter the third grade: " << '\n';
            std::cin >> student1Grade3;
            std::cout << "Enter the final grade: " << '\n';
            std::cin >> student1Grade4;
            // Show student grades and grade average 
            Student student1(student1Name, student1Grade1, student1Grade2, student1Grade3, student1Grade4);
            student1.showGrade();
            student1.gradeAverage();
            // Ask if user would like to keep inputting grades 
            std::cout << "Do you want to return to menu? Y/N";
            std::string userAnswer;
            std::cin >> userAnswer;
            if (userAnswer == "y" || userAnswer == "Y") {
                runProgram == true;
            }
            else {
                // End program 
                return 0;
            }
        } // End of student 1 if statement 
        if (studentAmount == 2) {
            std::cout << "Enter the name for the first student: " << '\n';
            std::cin >> student1Name;
            std::cout << "Enter the first grade for: " << student1Name << '\n';
            std::cin >> student1Grade1;
            std::cout << "Enter the second grade for: " << student1Name << '\n';
            std::cin >> student1Grade2;
            std::cout << "Enter the third grade for: " << student1Name << '\n';
            std::cin >> student1Grade3;
            std::cout << "Enter the final grade for: " << student1Name << '\n';
            std::cin >> student1Grade4;
            Student student1(student1Name, student1Grade1, student1Grade2, student1Grade3, student1Grade4);
            // Student 2 information 
            std::cout << "Enter the name for the second student: " << '\n';
            std::cin >> student2Name;
            std::cout << "Enter the first grade for: " << student2Name << '\n';
            std::cin >> student2Grade1;
            std::cout << "Enter the second for: " << student2Name << '\n';
            std::cin >> student2Grade2;
            std::cout << "Enter the third grade for: " << student2Name << '\n';
            std::cin >> student2Grade3;
            std::cout << "Enter the final grade for: " << student2Name << '\n';
            std::cin >> student2Grade4;
            Student student2(student2Name, student2Grade1, student2Grade2, student2Grade3, student2Grade4);
            // printing information for student 1 and 2 to user 
            student1.showGrade();
            student1.gradeAverage();
            std::cout << " " << '\n';
            student2.showGrade();
            student2.gradeAverage();
            // Ask if user would like to keep inputting grades 
            std::cout << "Do you want to return to menu? Y/N";
            std::string userAnswer;
            std::cin >> userAnswer;
            if (userAnswer == "y" || userAnswer == "Y") {
                runProgram == true;
            }
            else {
                // End program 
                return 0;
            }
        }// End of 2 student selection if statement 
        if (studentAmount == 3) {
            std::cout << "Enter the name for the first student: " << '\n';
            std::cin >> student1Name;
            std::cout << "Enter the first grade for: " << student1Name << '\n';
            std::cin >> student1Grade1;
            std::cout << "Enter the second grade for: " << student1Name << '\n';
            std::cin >> student1Grade2;
            std::cout << "Enter the third grade for: " << student1Name << '\n';
            std::cin >> student1Grade3;
            std::cout << "Enter the final grade for: " << student1Name << '\n';
            std::cin >> student1Grade4;
            Student student1(student1Name, student1Grade1, student1Grade2, student1Grade3, student1Grade4);
            // Student 2 information 
            std::cout << "Enter the name for the second student: " << '\n';
            std::cin >> student2Name;
            std::cout << "Enter the first grade for: " << student2Name << '\n';
            std::cin >> student2Grade1;
            std::cout << "Enter the second for: " << student2Name << '\n';
            std::cin >> student2Grade2;
            std::cout << "Enter the third grade for: " << student2Name << '\n';
            std::cin >> student2Grade3;
            std::cout << "Enter the final grade for: " << student2Name << '\n';
            std::cin >> student2Grade4;
            Student student2(student2Name, student2Grade1, student2Grade2, student2Grade3, student2Grade4);
            // Student 3 information
            std::cout << "Enter the name for the third student: " << '\n';
            std::cin >> student3Name;
            std::cout << "Enter the first grade for: " << student3Name << '\n';
            std::cin >> student3Grade1;
            std::cout << "Enter the second for: " << student3Name << '\n';
            std::cin >> student3Grade2;
            std::cout << "Enter the third grade for: " << student3Name << '\n';
            std::cin >> student3Grade3;
            std::cout << "Enter the final grade for: " << student3Name << '\n';
            std::cin >> student3Grade4;
            Student student3(student3Name, student3Grade1, student3Grade2, student3Grade3, student3Grade4);
            // Display student 1 information
            student1.showGrade();
            student1.gradeAverage();
            std::cout << " " << '\n';
            // Display student 2 information
            student2.showGrade();
            student2.gradeAverage();
            std::cout << " " << "\n";
            // Display student 3 information
            student3.showGrade();
            student3.gradeAverage();
            std::cout << " " << "\n";
            // Ask if user would like to keep inputting grades 
            std::cout << "Do you want to return to menu? Y/N";
            std::string userAnswer;
            std::cin >> userAnswer;
            if (userAnswer == "y" || userAnswer == "Y") {
                runProgram == true;
            }
            else {
                // End program 
                return 0;
            }
        } // End of 3 student choice
        if (studentAmount == 4) {
            std::cout << "Enter the name for the first student: " << '\n';
            std::cin >> student1Name;
            std::cout << "Enter the first grade for: " << student1Name << '\n';
            std::cin >> student1Grade1;
            std::cout << "Enter the second grade for: " << student1Name << '\n';
            std::cin >> student1Grade2;
            std::cout << "Enter the third grade for: " << student1Name << '\n';
            std::cin >> student1Grade3;
            std::cout << "Enter the final grade for: " << student1Name << '\n';
            std::cin >> student1Grade4;
            Student student1(student1Name, student1Grade1, student1Grade2, student1Grade3, student1Grade4);
            // Student 2 information 
            std::cout << "Enter the name for the second student: " << '\n';
            std::cin >> student2Name;
            std::cout << "Enter the first grade for: " << student2Name << '\n';
            std::cin >> student2Grade1;
            std::cout << "Enter the second for: " << student2Name << '\n';
            std::cin >> student2Grade2;
            std::cout << "Enter the third grade for: " << student2Name << '\n';
            std::cin >> student2Grade3;
            std::cout << "Enter the final grade for: " << student2Name << '\n';
            std::cin >> student2Grade4;
            Student student2(student2Name, student2Grade1, student2Grade2, student2Grade3, student2Grade4);
            // Student 3 information
            std::cout << "Enter the name for the third student: " << '\n';
            std::cin >> student3Name;
            std::cout << "Enter the first grade for: " << student3Name << '\n';
            std::cin >> student3Grade1;
            std::cout << "Enter the second for: " << student3Name << '\n';
            std::cin >> student3Grade2;
            std::cout << "Enter the third grade for: " << student3Name << '\n';
            std::cin >> student3Grade3;
            std::cout << "Enter the final grade for: " << student3Name << '\n';
            std::cin >> student3Grade4;
            Student student3(student3Name, student3Grade1, student3Grade2, student3Grade3, student3Grade4);
            // Student 4 information 
            std::cout << "Enter the name for the fourth student: " << '\n';
            std::cin >> student4Name;
            std::cout << "Enter the first grade for: " << student4Name << '\n';
            std::cin >> student4Grade1;
            std::cout << "Enter the second for: " << student4Name << '\n';
            std::cin >> student4Grade2;
            std::cout << "Enter the third grade for: " << student4Name << '\n';
            std::cin >> student4Grade3;
            std::cout << "Enter the final grade for: " << student4Name << '\n';
            std::cin >> student4Grade4;
            Student student4(student4Name, student4Grade1, student4Grade2, student4Grade3, student4Grade4);

            // Display student 1 information
            student1.showGrade();
            student1.gradeAverage();
            std::cout << " " << '\n';
            // Display student 2 information
            student2.showGrade();
            student2.gradeAverage();
            std::cout << " " << "\n";
            // Display student 3 information
            student3.showGrade();
            student3.gradeAverage();
            std::cout << " " << "\n";
            // Display student 4 information 
            student4.showGrade();
            student4.gradeAverage();
            std::cout << " " << '\n';

            // Ask if user would like to keep inputting grades 
            std::cout << "Do you want to return to menu? Y/N";
            std::string userAnswer;
            std::cin >> userAnswer;
            if (userAnswer == "y" || userAnswer == "Y") {
                runProgram == true;
            }
            else {
                // End program 
                return 0;
            }
        }
    } while (runProgram);
}

        

   



