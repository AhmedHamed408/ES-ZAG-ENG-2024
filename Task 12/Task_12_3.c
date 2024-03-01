#include<stdio.h>

#define Max_Students 50

typedef struct
{
    char name[25];
    float score;
} student_t;

int main()
{
    student_t student[Max_Students];
    int studentnum, i, numhigh =0 ;
    char highstudent[Max_Students];
    float totscore = 0, avgscore = 0, highscore = 0;
    printf("Enter number of student (max: %d ): ", Max_Students);
    scanf("%d", &studentnum);

    for (i = 0; i < studentnum; i++)
    {
        printf("\nEnter details for student %d:\n", (i+1));
        printf("%i - Name: ",(i+1));
        scanf(" %s", student[i].name);
        printf("%i - Score: ",(i+1));
        scanf("%f", &student[i].score);

        if (student[i].score > highscore)
        {
            highscore = student[i].score;
            numhigh = 1;
            strcpy(highstudent[0], student[i].name);
        }
        else if (student[i].score == highscore)
        {
            strcpy(highstudent[numhigh], student[i].name);
            numhigh++;
        }
    }

    avgscore = totscore / studentnum;

    printf("avrage is %f \n", avgscore);

    printf("student above avrage: ");

    for (int i = 0; i < studentnum; ++i)
    {
        if (student[i].score < avgscore)
        {
            printf("%s , ", student[i].name);
        }
    }


    printf("High score: %f\n", highscore);
    printf(" high sstudents:");
    for (int i = 0; i < numhigh; ++i)
    {
        printf("%s ,", highstudent[i]);
    }

}


