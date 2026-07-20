#include<stdio.h>
struct student
{
	int rollno;
	char name[40];
	float marks;
};
struct student s[100];
int count=0;

void addstudent()
{
	printf("\nEnter roll number of student: ");
	scanf("%d",&s[count].rollno);
	printf("\nEnter name of student: ");
	scanf("%s",&s[count].name);
	printf("\nEnter marks of student: ");
	scanf("%f",&s[count].marks);
	count++;
	printf("\nStudent Added Successfully!!!\n");
	
	showstudent();
}

void showstudent()
{
	int i;
	if(count==0)
	printf("\nNo student records found.");
	printf("\n -----Student Records-----");
	printf("\nRollNo.\tName\tMarks");
	for(i=0;i<count;i++)
	{
	  printf("\n%d\t%s\t%f",s[i].rollno,s[i].name,s[i].marks);	
	}
}

void searchstudent()
{
	int i,roll,found=0;
	printf("\nEnter a roll number to search: ");
	scanf("%d",&roll);
	for(i=0;i<count;i++)
	{
		if(s[i].rollno==count)
		{
			printf("\nStudent Record Found!!");
			printf("\nRollNo.: %d",s[i].rollno);
			printf("\nName: %s",s[i].name);
			printf("\nMarks: %f",s[i].marks);
			found=1;
			break;
		}
		if(!found)
		printf("\nStudent not found.");
	}
}

void calculateavg()
{
	int i;
	float sum=0;
	if(count==0)
	printf("\nNo student records available.");
	for(i=0;i<count;i++)
	{
		sum=sum+s[i].marks;
	}
	printf("\nAverage Marks: %f",sum/count);
}

int main()
{
	int choice;
	printf("1. Add Student");
	printf("\n2. Display Students");
	printf("\n3. Search Student by Roll Number");
	printf("\n4. Calculate average marks of students");
	printf("\n5. Exit Program");
	printf("\nEnter a choice: ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			addstudent(); break;
		case 2:
			showstudent(); break;
		case 3:
			searchstudent(); break;
		case 4:
			calculateavg(); break;
		case 5:
			printf("\nExiting program...."); break;
		default:
			printf("\nInvalid choice. Please try again...");
	}
}
