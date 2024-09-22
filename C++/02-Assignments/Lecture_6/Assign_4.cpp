#include <iostream>
#include <string>

class Person {
private:
    std::string name;

public:
    Person(std::string n) : name(n) {}

    std::string getName() {
        return name;
    }
};

class Student : public Person {
private:
    int studentID;

public:
    Student(std::string n, int sid) : Person(n), studentID(sid) {}

    int getStudentID() {
        return studentID;
    }
};

class Teacher : public Person {
private:
    int teacherID;

public:
    Teacher(std::string n, int tid) : Person(n), teacherID(tid) {}

    int getTeacherID() {
        return teacherID;
    }
};

class TeachingAssistant : public Student, public Teacher {
private:
    std::string course;

public:
    TeachingAssistant(std::string S_name,std::string T_name, int S_Id, int T_Id, std::string c)
        : Student(S_name, S_Id), Teacher(T_name, T_Id), course(c) {}

    std::string getCourse() {
        return course;
    }
};

int main() {
    TeachingAssistant ta("Mohammed","Ali", 789, 1011, "Computer Science");

    std::cout << "Student Name: " << ta.Teacher::getName() << ", Student ID: " << ta.getStudentID() << std::endl
              << "Teacher Name: " << ta.Student::getName() << ", Teacher ID: " << ta.getTeacherID() << std::endl
              << "Course: "       << ta.getCourse()        << std::endl;

    return 0;
}