#include <iostream>
#include <string>
class Student {
protected:
    std::string studentName;
    int rollNumber;
public:
    void getStudentInfo() {
        std::cout << "Enter Student Name: ";
        std::cin.ignore();
        std::getline(std::cin, studentName);
        std::cout << "Enter Roll Number: ";
        std::cin >> rollNumber;
    }
};
class Exam {
protected:
    float marks1, marks2;
public:
    void getExamInfo() {
        std::cout << "Enter Marks in Subject 1: ";
        std::cin >> marks1;
        std::cout << "Enter Marks in Subject 2: ";
        std::cin >> marks2;
    }
};
class Result : public Student, public Exam {
public:
    void displayResult() {
        std::cout << "\n----- Student Mark Sheet -----\n";
        std::cout << "Name: " << studentName << "\n";
        std::cout << "Roll Number: " << rollNumber << "\n";
        std::cout << "Marks in Subject 1: " << marks1 << "\n";
        std::cout << "Marks in Subject 2: " << marks2 << "\n";
        std::cout << "-------------------------------\n";
    }
};

int main() {
    Result studentResult;
    studentResult.getStudentInfo();
    studentResult.getExamInfo();
    studentResult.displayResult();
    return 0;
}

