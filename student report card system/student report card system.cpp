#include <iostream>
#include <string>


// Structure for student record
struct StudentRecord {
    std::string name;
    int seatNo;
    int marks[5];
    float percentage;
    char grade
// Function to add a new student record
  
void addStudentRecord(StudentRecord& record){
    std::cout << "adding a new student record";
    std::cout << "Enter student name: ";
    std::cin >> record.name;
    std::cout << "Enter student seat number: ";
    std::cin >> record.seatNo;
    std::cout << "Enter marks for 5 subjects: ";
    for (int i = 0; i < 5; i++) {
        std::cin >> record.marks[i];
    }
    // Calculate percentage
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += record.marks[i];
    }
    record.percentage = (float)sum / 5;
    // Calculate grade
    if (record.percentage >= 90) {
        record.grade = 'A';
    }
    else if (record.percentage >= 80) {
        record.grade = 'B';
    }
    else if (record.percentage >= 70) {
        record.grade = 'C';
    }
    else if (record.percentage >= 60) {
        record.grade = 'D';
    }
    else {
        record.grade = 'F';
    }
}

// Function to display student record
void displayStudentRecord(StudentRecord record) {
    std::cout << "Name: " << record.name << std::endl;
    std::cout << "Seat No.: " << record.seatNo << std::endl;
    std::cout << "Marks: ";
    for (int i = 0; i < 5; i++) {
        std::cout << record.marks[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Percentage: " << record.percentage << std::endl;
    std::cout << "Grade: " << record.grade << std::endl;
}

// Function to modify student record
void modifyStudentRecord(StudentRecord& record) {
    std::cout << "Enter new student name: ";
    std::cin >> record.name;
    std::cout << "Enter new student seat number: ";
    std::cin >> record.seatNo;
    std::cout << "Enter new marks for 5 subjects: ";
    for (int i = 0; i < 5; i++) {
        std::cin >> record.marks[i];
    }
    // Calculate new percentage
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += record.marks[i];
    }
    record.percentage = (float)sum / 5;
    // Calculate new grade
    if (record.percentage >= 90) {
        record.grade = 'A';
    }
    else if (record.percentage >= 80) {
        record.grade = 'B';
    }
    else if (record.percentage >= 70) {
        record.grade = 'C';
    }
    else if (record.percentage >= 60) {
        record.grade = 'D';
    }
    else {
        record.grade = 'F';
    }
}

// Function to delete student record
void deleteStudentRecord(StudentRecord& record) {
    record.name = "";
    record.seatNo = 0;
    for (int i = 0; i < 5; i++) {
        record.marks[i] = 0;
    }
    record.percentage = 0;
    record.grade = '\0';
}

int main() {
    StudentRecord record;
    addStudentRecord(record);
    displayStudentRecord(record);
    modifyStudentRecord(record);
    displayStudentRecord(record);
    deleteStudentRecord(record);

    return 0;
}
