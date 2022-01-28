#include<stdio.h>
#include<conio.h>
void main()
{
struct a{
      int enroll;
      int i,j;
      char na[20];
      int m[3];
      char college[40];
      int total;
      float per;
    };
    printf("\n\t\t\t==========|CREATE YOUR RECORD HERE |==========");
struct a reco[2];
for(int j=0;j<2;j++)
{
  printf("\n Enter Roll Number :");
  scanf("%d",&reco[j].enroll);
  printf("%s Enter name :");
  scanf("%s",&reco[j].na);
  printf("\n Enter College Name :");
  scanf("%s",&reco[j].college);

  reco[j].total=0;
  for(int i=0;i<3;i++)
  {
    printf("Enter marks:");
    scanf("%d",&reco[j].m[i]);
    reco[j].total=reco[j].total+reco[j].m[i];
   }
  printf("\n Roll Number :%d\nName:%s",reco[j].enroll,reco[j].na);
  for(int i=0;i<3;i++)
  { printf("\nMarks : %d",reco[j].m[i]);
   }
    printf("\nTotal : %d",reco[j].total);
}
getch();

            printf("\n\t\t\t\t==========|WELCOME|=========\n\t\t");
            printf("\n\t\t\t\t======|COLLEGE RECORD|======\n\t\t");
            printf("\n\t\t\t\t=====|PPS MINI PROJECT|=====\n\t\t");
            printf("\n\t\t\t\t===|BY UTKARSH AND ARJUN|===\n\t\t");

for(int j=0;j<2;j++)
{ printf("\n================================\n");
  printf("Roll Number :%d\n",reco[j].enroll);
  printf("Name of the Student :%s\n",reco[j].na);
  printf("College Name :%s\n",reco[j].college);
  printf("Total Cycle Test Marks : %d\n",reco[j].total);
  printf("\n================================\n");
   }
getch();
}
