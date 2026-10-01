#include <iostream>
#include <limits>
#include <string>
#include <vector>

struct Student {
    std::string name;
    double marks;
};

int main() {
    int n;

std::cout << "Enter the number of students: ";
    if (!(std::cin >> n) || n <= 0) {
        std::cerr << "Please enter a positive integer.\n";
        return 1;
    }

std::vector<Student> students;

for (int i = 0; i < n; ++i) {
        Student student;

// Remove the newline left by the previous numeric input.
        std::cin.ignore(
            std::numeric_limits<std::streamsize>::max(), '\n'
        );

std::cout << "\nEnter name of student " << i + 1 << ": ";
        if (!std::getline(std::cin, student.name) ||
            student.name.find_first_not_of(" \t\r") == std::string::npos) {
            std::cerr << "Name cannot be empty.\n";
            return 1;
        }

std::cout << "Enter marks: ";
        if (!(std::cin >> student.marks) || student.marks < 0) {
            std::cerr << "Please enter valid, non-negative marks.\n";
            return 1;
        }

students.push_back(student);
    }

std::cout << "\nStored student details:\n";
    for (const Student& student : students) {
        std::cout << "Name: " << student.name
                  << " | Marks: " << student.marks << '\n';
    }

return 0;
}