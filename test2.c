#include <stdio.h>
#include <string.h>
struct Grades {
	char  categories[50];
	int weight;
	int grade;
};
int main()
{
  char input[256] ;
  char  categories[256];
  int weight;
  float grade;
  int num;
  float finalgrade = 0;
  int totalweight = 0;
  int aw = 0;
  float b;
  float c;
  float d;
  int bw;
  int cw;
  int dw;
  char choice[256];
 printf("How many categories are there?\n");
 fgets(input, 256, stdin);
 sscanf(input, "%d", &num);
struct Grades gradeArr[num];
for ( int i = 0; i < num; i++)
{
 printf("What is the name of category %d?\n", i + 1);
  fgets(input, 256, stdin);
  sscanf(input, "%s", categories);
  strcpy(gradeArr[i].categories, categories);
  printf("What percentage of the gradebook is %s worth?\n", categories);
  while (1)
  {
	fgets(input, 256, stdin);
//	sscanf(input, "%f", &weight);
	if (sscanf(input, "%d", &weight) == 1) break;

	printf("Not a valid percentage - try again!\n");	
  }
  gradeArr[i].weight = weight;
  printf("What is your grade in %s?\n", categories);
  while (1)
  {
        fgets(input, 256, stdin);
        if (sscanf(input, "%f", &grade) == 1) break;
        printf("Not a valid grade  - try again!\n");
  }
  gradeArr[i].grade = grade;
// totalweight = totalweight + gradeArr[i].weight;
// if (totalweight > 100)
// { 
// printf("The weight of your grades adds up to over 100
 
 finalgrade = finalgrade + (gradeArr[i].grade * gradeArr[i].weight);
//  printf("%d\n", gradeArr[i].weight); 
 }

 printf("Your current grade is equal to %f\n", finalgrade / 100);
 if (num == 3)
 {
 printf("Which category would you like to learn more about? Choose one of the following(Case sensitive): %s %s %s\n", gradeArr[0].categories, gradeArr[1].categories, gradeArr[2].categories);
  fgets(input, 256, stdin);
 sscanf(input, "%s", choice);
 	if ((strcmp(choice, gradeArr[0].categories)) == 0)
	{
		aw = gradeArr[0].weight;
		b = gradeArr[1].grade;
		bw = gradeArr[1].weight;
		cw = gradeArr[2].weight;
		c = gradeArr[2].grade;
	//	printf("%d\n", aw);
	//	printf("%d\n", bw);
	//	printf("%d\n", cw);
	//	printf("%f\n", b);
	//	printf("%f\n", c);
	}
        if ((strcmp(choice, gradeArr[1].categories)) ==  0)
        {
                aw = gradeArr[1].weight;
                b = gradeArr[0].grade;
                bw = gradeArr[0].weight;
                cw = gradeArr[2].weight;
                c = gradeArr[2].grade;
	//	 printf("%d\n", aw);
        }
	 if ((strcmp(choice, gradeArr[2].categories)) ==  0)
        {
                aw = gradeArr[2].weight;
                b = gradeArr[1].grade;
                bw = gradeArr[1].weight;
                cw = gradeArr[0].weight;
                c = gradeArr[0].grade;
//		 printf("%d\n", aw);
        }
 //printf("%d\n", gradeArr[0].weight);
 //printf("%d\n", gradeArr[1].weight);
 //printf("%d\n", gradeArr[2].weight);
// printf("%d\n", aw);
 }
 if (num == 2) 
 {
 printf("Which category would you like to learn more about? Choose one of the following: %s %s\n", gradeArr[0].categories, gradeArr[1].categories);
  fgets(input, 256, stdin);
 sscanf(input, "%s", choice);
         if ((strcmp(choice, gradeArr[0].categories)) == 0)
        {
                aw = gradeArr[0].weight;
                b = gradeArr[1].grade;
                bw = gradeArr[1].weight;
               //  printf("%d\n", aw);
        }
        if ((strcmp(choice, gradeArr[1].categories)) ==  0)
        {
                aw = gradeArr[1].weight;
                b = gradeArr[0].grade;
                bw = gradeArr[0].weight;
//                 printf("%d\n", aw);
        }
      //   if ((strcmp(choice, gradeArr[2].categories)) ==  0)
       // {
        //        aw = gradeArr[2].weight;
        //         printf("%d\n", aw);
       // }
}
 if (num == 1) 
 {
 printf("Which category would you like to learn more about? Choose one of the following: %s\n", gradeArr[0].categories);

  fgets(input, 256, stdin);
 sscanf(input, "%s", choice);  

        if ((strcmp(choice, gradeArr[0].categories)) == 0)
        {
                aw = gradeArr[0].weight;
                 printf("%d\n", aw);
        }
     //   if ((strcmp(choice, gradeArr[1].categories)) ==  0)
     //   {
     //           aw = gradeArr[1].weight;
     //            printf("%d\n", aw);
    //    }
    //     if ((strcmp(choice, gradeArr[2].categories)) ==  0)
    //    {
    //            aw = gradeArr[2].weight;
  //               printf("%d\n", aw);
//        }
}
  if (num == 4) 
 {
 printf("Which category would you like to learn more about? Choose one of the following: %s %s %s %s\n", gradeArr[0].categories, gradeArr[1].categories, gradeArr[2].categories, gradeArr[3].categories);

  fgets(input, 256, stdin);
 sscanf(input, "%s", choice);
         if ((strcmp(choice, gradeArr[0].categories)) == 0)
        {
                aw = gradeArr[0].weight;
                b = gradeArr[1].grade;
                bw = gradeArr[1].weight;
                cw = gradeArr[2].weight;
                c = gradeArr[2].grade;
                d = gradeArr[3].grade;
		dw = gradeArr[3].weight;
		// printf("%d\n", aw);
        }
        if ((strcmp(choice, gradeArr[1].categories)) ==  0)
        {
                aw = gradeArr[1].weight;
                b = gradeArr[0].grade;
                bw = gradeArr[0].weight;
                cw = gradeArr[2].weight;
                c = gradeArr[2].grade;
                d = gradeArr[3].grade;
                dw = gradeArr[3].weight;
               //  printf("%d\n", aw);
        }
         if ((strcmp(choice, gradeArr[2].categories)) ==  0)
        {
                aw = gradeArr[2].weight;
                b = gradeArr[1].grade;
                bw = gradeArr[1].weight;
                cw = gradeArr[0].weight;
                c = gradeArr[0].grade;
                d = gradeArr[3].grade;
                dw = gradeArr[3].weight;
//		 printf("%d\n", aw);
        }
	 if ((strcmp(choice, gradeArr[3].categories)) ==  0)
        {
                aw = gradeArr[3].weight;
                b = gradeArr[1].grade;
                bw = gradeArr[1].weight;
                cw = gradeArr[2].weight;
                c = gradeArr[2].grade;
                d = gradeArr[0].grade;
                dw = gradeArr[0].weight;
                // printf("%d\n", aw);
        }
 }
	

}
