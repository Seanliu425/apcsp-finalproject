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
  float weight;
  float grade;
  int num;
  float finalgrade = 0;
  int totalweight = 0;
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
	if (sscanf(input, "%f", &weight) == 1) break;
//	totalweight = totalweight + gradeArr[i].weight;
	//if (totalweight < 101) break;
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
 totalweight = totalweight + gradeArr[i].weight;
// if (totalweight > 100)
// { 
// printf("The weight of your grades adds up to over 100
 finalgrade = finalgrade + (gradeArr[i].grade * gradeArr[i].weight); 
 }
 printf("%f\n", finalgrade / 100);
}
