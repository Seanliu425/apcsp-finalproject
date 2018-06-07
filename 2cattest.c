#include <stdio.h>

int main()
{
	char input[256], name [256];
	float cat;
	char cata;
	float aw;
	float tp;
	float pg;
	float fk;
	float dg;
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
	if ( cat == 2 )
	{
		float NesPercCat2()
		{
			return((dg-(bw*b*.01))/aw)*100;
		}
		float a = NesPercCat2();
		printf("To get a %f percent in the class you need end with a %f percent overall in this category\n", dg, a);
		float NesPointCat2()
		{
			return(.01*a*tp + .01*a*fk - pg);
		}
		float x = NesPointCat2();
		printf("You need to get %f points out of %f points on your last assignment to get a %f in the class\n", x, fk, dg);
		float NesGradeCat2()
		{
			return(100*(x/fk));
		}
		float g = NesGradeCat2();
		printf("You need a %f percent on your last assignment to get a %f percent in the class\n",g, dg);
	}
	if ( cat == 3 )
		{
			float NesPercCat3()
		{
			return((dg-(bw*b*.01)-(cw*c*.01))/aw)*100;
		}
		float a = NesPercCat3();
		printf("To get a %f percent in the class you need end with a %f percent overall in this category\n", dg, a);
		float NesPointCat3()
		{
			return(.01*a*tp + .01*a*fk - pg);
		}
		float x = NesPointCat3();
		printf("You need to get %f points out of %f points on your last assignment to get a %f in the class\n", x, fk, dg);
		float NesGradeCat3()
		{
			return(100*(x/fk));
		}
		float g = NesGradeCat3();
		printf("You need a %f percent on your last assignment to get a %f percent in the class\n",g, dg);
	}

	if ( cat == 4 )
		{
			float NesPercCat4()
		{
			return((dg-(bw*b*.01)-(cw*c*.01)-(dw*d*.01))/aw)*100;
		}
		float a = NesPercCat4();
		printf("To get a %f percent in the class you need end with a %f percent overall in this category\n", dg, a);
		float NesPointCat4()
		{
			return(.01*a*tp + .01*a*fk - pg);
		}
		float x = NesPointCat4();
		printf("You need to get %f points out of %f points on your last assignment to get a %f in the class\n", x, fk, dg);
		float NesGradeCat4()
		{
			return(100*(x/fk));
		}
		float g = NesGradeCat4();
		printf("You need a %f percent on your last assignment to get a %f percent in the class\n",g, dg);
	}
}
