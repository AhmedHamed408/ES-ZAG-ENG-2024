#include<stdio.h>
#include<string.h>

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
    student_t highstudent[Max_Students];
    float totscore = 0, avgscore = 0, highscore = 0;
    printf("Enter number of student (max: %d ): ", Max_Students);
    scanf("%d", &studentnum);

    for (i = 0; i < studentnum; i++)
    {
        printf("\nEnter details for student %d:\n", (i+1));
        printf("%d - Name: ",(i+1));
        scanf(" %s", student[i].name);
        printf("%d - Score: ",(i+1));
        scanf("%f", &student[i].score);

        if (student[i].score >= highscore)
        {
            highscore= student[i].score;
            highstudent[numhigh].score = student[i].score;
            strcpy(highstudent[numhigh].name, student[i].name);
            numhigh++;

        }
        totscore+=student[i].score;

    }

    avgscore = totscore / studentnum;
    printf("\n=============================\n");

    printf("avrage is %0.2f \n", avgscore);
    printf("=============================\n");

    printf("\n\n\n=============================\n");
    printf("student Below avrage: ");

    for (int i = 0; i < studentnum; i++)
    {
        if (student[i].score < avgscore)
        {
            printf("%s   ", student[i].name);
        }
    }
    printf("\n=============================\n");


    printf("\nHigh score: %0.2f \n", highscore);
    printf("\n=============================\n");

    printf("high students");
    printf("\n=============================\n");


    printf("student Name      Score\n");
    printf("------------      -----\n");



    for (int i = 0; i < numhigh; ++i)
    {

        printf("%s                   %0.2f\n", highstudent[i].name,highstudent[i].score);
    }

    printf("\n=============================\n");

    return 0;

}


