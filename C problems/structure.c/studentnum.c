#include<stdio.h>
#include<string.h>

struct student{
    int marks;
    int roll;
    char name[50];
};

void student_marks(struct student student_marks[],int size);
void student_marksabove_75(struct student student_marks[],int size);

int main(){
    int j;
    printf("Enter the number of students whose marks are going to be entered:-");
    scanf("%d",&j);
    struct student student_input[j];
    student_marks(student_input,j);
    student_marksabove_75(student_input,j);
    return 0;
}

void student_marks(struct student student_marks[],int size){
    for(int i = 0;i<size;i++){
        printf("Enter the for %d marks,roll and name of student \n",i+1);
        scanf("%d %d %s",&student_marks[i].marks,&student_marks[i].roll,&student_marks[i].name);
    }
}

void student_marksabove_75(struct student student_marks[],int size){
    printf("The students who got marks above 75 are \n");
    for(int i =0;i<size;i++){
        if (student_marks[i].marks > 75)
        {
            printf("%s got %d roll no.%d",student_marks[i].name,student_marks[i].marks,student_marks[i].roll);
        }
    }
}
