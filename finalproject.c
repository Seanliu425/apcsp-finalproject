#include <stdio.h>

int main()
{
	float cat
	char cata
	float aw
	float tp
	float pg
	float fk
	float dg
	float bw = 50
	float b = 70
	printf("How many grade categories do you have?\n");
	fgets(input, 256, stdin);
	sscanf(input, "%f", &cat);
	printf("Which category is the assignment going into?\n");
	fgets(input, 256, stdin);
	sscanf(input, "%c", &cata);
	printf("What percent of your total grade is that category?\n");
	fgets(input, 256, stdin);
	sscanf(input, "%f", &aw);
	printf("How many total points do you have in that category?\n");
	fgets(input, 256, stdin);
	sscanf(input, "%f", &tp);
	printf("How many points have you gained in that category?\n");
	fgets(input, 256, stdin);
	sscanf(input, "%f", &pg);
	printf("How many points is your last assignment worth?\n");
	fgets(input, 256, stdin);
	sscanf(input, "%f", &fk);
	printf("What is your desired overall grade in the class?\n");
	fgets(input, 256, stdin);
	sscanf(input, "%f", &dg);
	if (cat == 2 )
	{
		float NesPercCat2()
		{
			return((dg-(bw*0.01*b))/aw);
		}
		float a = NesGradeCat2();
		float NesPointCat2()
		{
			return((a +(a*fk*0.01)-pg));
		}
		float x = NesPointCat2();
		float NesGradeCat2();
		{
			return(100*(x/fk));
		}
		float g = NesGradeCat2();
		printf("You need a %f percent on your last assignment to get a %f percent in the class\n",g, dg);   
	}
	if (cat == 3 )
	{
		float NesPercCat3()
		{
			return((dg-(bw*0.01*b-cw*0.01*c))/aw);
		}
	}
	if (cat == 4 )
	{
		float NesPercCat4()
		{
			return((dg-(bw*0.01*b-cw*0.01*c-dw*0.01*d))/aw);
		}
	}
	if (cat == 5)
	{
		float NesPercCat5()
		{
			return((dg-(bw*0.01*b-cw*0.01*c-dw*0.01*d-ew*0.01*e))/aw);
		}
	}



