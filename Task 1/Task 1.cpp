//#include <iostream>
//#include <cstring>
//using namespace std;
//
//struct Course {
//    int credits;
//    char grade[3];
//};
//
//// Function to convert letter grades to grade points
//double getGradePoints(const char grade[]) {
//    // Define arrays for grades and corresponding grade points
//    const char* grades[] = { "A+", "A", "A-", "B+", "B", "B-", "C+", "C", "C-", "D+", "D", "D-", "F" };
//    const double gradePoints[] = { 4.3, 4.0, 3.7, 3.3, 3.0, 2.7, 2.3, 2.0, 1.7, 1.3, 1.0, 0.7, 0.0 };
//
//    for (int i = 0; i < 13; ++i) {
//        if (strcmp(grade, grades[i]) == 0) {
//            return gradePoints[i];
//        }
//    }
//    cout << "Invalid grade entered. Please enter a valid grade (A+, A, A-, B+, B, B-, C+, C, C-, D+, D, D-, F)." << endl;
//    exit(EXIT_FAILURE);
//}
//// Function to calculate CGPA
//double calculateCGPA(int numCourses, Course* courses) {
//    int totalCredits = 0;
//    double totalGradePoints = 0.0;
//    for (int i = 0; i < numCourses; ++i) {
//        totalCredits += courses[i].credits;
//        totalGradePoints += getGradePoints(courses[i].grade) * courses[i].credits;
//    }
//    return totalGradePoints / totalCredits;
//}
//int main() {
//    int numCourses;
//    cout << "Enter the number of courses: ";
//    cin >> numCourses;
//    Course* courses = new Course[numCourses];
//
//    for (int i = 0; i < numCourses; ++i) {
//        cout << "Enter the credits for course " << i + 1 << ": ";
//        cin >> courses[i].credits;
//        cout << "Enter the grade for course " << i + 1 << ": ";
//        cin >> courses[i].grade;
//    }
//    double cgpa = calculateCGPA(numCourses, courses);
//    cout << "Your CGPA is: " << cgpa << endl;
//    delete[] courses;  // Clean up dynamically allocated memory
//    system("pause");
//    return 0;
//}