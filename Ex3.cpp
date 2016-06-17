#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string>
#include<iomanip>

using namespace std;

struct student{
	string Name;
	string Birthday;
	int Win_mark;
	int Word_mark;
	int Jira_mark;
	int Sum;
	string Rank;
};

student StudentArray[40];

int student_array_length = 0;

void InsertStudentInfo(){
	cout << "------ INSERT STUDENT INFO ----------";
	cout << "\nInsert student name: "; fflush(stdin); getline(cin, StudentArray[student_array_length].Name);
	cout << "\nInsert student birthday: "; fflush(stdin); getline(cin, StudentArray[student_array_length].Birthday);
	student_array_length ++;
	getch();
}

void InsertStudentMark(){
	cout << "------ INSERT STUDENT MARK ----------";
	int student_index = 0;
	cout << "\n Insert student number ( > 0 and <= " << student_array_length << ": "; cin >> student_index;
	while(true){
		if(student_index > student_array_length) {
			cout << "\n Insert student number ( <= " << student_array_length <<" ): "; cin >> student_index;
		}
		else break;
	}
	student_index -= 1;
	cout << "\nInsert mark for student: " << StudentArray[student_index].Name;

	cout << "\nInsert student win mark: "; cin >> StudentArray[student_index].Win_mark;
	cout << "\nInsert student word mark: "; cin >>StudentArray[student_index].Word_mark;
	cout << "\nInsert student jira mark: "; cin >> StudentArray[student_index].Jira_mark;

	int sum = StudentArray[student_index].Win_mark + StudentArray[student_index].Word_mark + StudentArray[student_index].Jira_mark;
	StudentArray[student_index].Sum = sum;

	if(sum >= 24) StudentArray[student_index].Rank = "Exellence";
	else if(sum >= 18 && sum < 24) StudentArray[student_index].Rank = "Good";
	else if(sum < 18) StudentArray[student_index].Rank = "Average";

	getch();
}

void PrintfResult(){
	cout << setw(6) << "STT" << setw(30) << "Name" << setw(15) << "Birthday" << setw(5) << "Sum" << setw(10) << "Rank";
	for (int i = 0; i < student_array_length; i++){
        cout << "\n" <<setw(6) << i+1 << setw(30) << StudentArray[i].Name << setw(15) << StudentArray[i].Birthday << setw(5) << StudentArray[i].Sum << setw(10) << StudentArray[i].Rank;
    }
	getch();
}

int main(){
	int choice = 0;

	while (true){
		printf("---------- STUDENT MANAGER --------");
		printf("\n1. Insert student info");
		printf("\n2. Insert student mark");
		printf("\n3. Printf Result");
		printf("\n4. Quit");
		printf("\n\nPlease make a choice: "); scanf("%d", &choice);
		system("cls");
		switch(choice){
			case 1: InsertStudentInfo(); break;
			case 2: InsertStudentMark(); break;
			case 3: PrintfResult(); break;
			case 4: return 0;
		}
		system("cls");
	}
}


