#include <iostream>

using namespace std;

int main()
{
	cout << "*** WELCOME TO THE SIMPLE GPA CALCULATOR ***" << "\n";
	int semesters; 
	
	cout << "Please input the number of semesters: "; cin >> semesters;
	cout << "\n";

	double arrayOfGPA[semesters];
	int courses; 
	int courseCredits;
	int totalCourseCredits;

	for (int i = 1; i <= semesters; i++)
	{
		double result = 0;
		totalCourseCredits = 0;
		cout << "Semester " << i << " courses: "; cin >> courses;
		for (int j = 0; j < courses; j++)
		{
			int grade;
			cout << "Enter your grade: "; cin >> grade;
			while (grade > 4 || grade < 0)
			{
				cout << "Please re-enter: ";
				cin >> grade;
			}
			cout << "Enter the course credits: "; cin >> courseCredits;
			while (courseCredits > 5 || courseCredits < 0)
			{
				cout << "Please re-enter: ";
				cin >> courseCredits;
			}
			result += grade * courseCredits;
			totalCourseCredits += courseCredits;
		}
		double GPA = result / totalCourseCredits;
		
		cout << "Semester " << i << " GPA: " << GPA << "\n";

		arrayOfGPA[i-1] = GPA;

		cout << "\n";
	}

	cout << "\n";

	double cumulativeGPA = 0;
	for (int i = 0; i < semesters; i++)
	{
		cumulativeGPA += arrayOfGPA[i];
	}

	double finalGPA = cumulativeGPA / semesters;
	cout << "Final GPA: " << finalGPA << "\n";

	return 0;
}
