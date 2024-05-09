#include <iostream>
using namespace std;

class CGPA {
private:
    int totalCreditHours;
    float totalGradePoints;

public:
    void addCourse() {
        int creditHours;
        float grade;
        cout << "Enter course credit hours: ";
        cin >> creditHours;
        cout << "Enter grade for the course (on a 4.0 scale): ";
        cin >> grade;
        totalCreditHours += creditHours;
        totalGradePoints += (creditHours * grade);
    }

    float calculateCGPA(){
        if (totalCreditHours == 0) {
            return 0.0;
        }
        return totalGradePoints / totalCreditHours;
    }

    bool Eligibility(){
        return totalCreditHours >= 26 && calculateCGPA() >= 3.0;
    }
};

int main() {
    CGPA student;
    int total_courses;
    cout << "Enter the number of courses: ";
    cin >> total_courses;

    for (int i = 0; i < total_courses; ++i) {
        cout << "Enter details for course " << i + 1 << ":\n";
        student.addCourse();
        cout<<endl;
    }

    cout << "CGPA: " << student.calculateCGPA()<<endl;

    if (student.Eligibility()) {
        cout << "Congratulations! You are eligible for a Thesis.\n";
    } else {
        cout << "Sorry, you are not eligible for a Thesis.\n";
    }

    return 0;
}

