// Angela Carrillo, Jacob Simpson, Hebatallah Tharhan 

#include <stdio.h>
int main()

{

	

	char level; 

	float gpa; 

	

	printf("Enter your grade level: (F)Freshman, (P)Sophomore, (J)Junior, (S)Senior  ");

	scanf("%c", &level);

	printf("Enter your gpa:  ");

	scanf("%f", &gpa);



	printf("Based on your grade level, your potential gpa average is");



	switch(level)
    {
		case 'f':
			gpa = gpa + .4;
      break;
		case 'p':
			gpa = gpa + .3;
      break;
		case 'j':
			gpa = gpa + .2;
      break;
		case 's':
			gpa = gpa + .1;
			break;		
    }
	

  if (gpa >= 3.5)
  {
		printf(" an A\n");
  }
	else if (gpa < 3.5 && gpa >= 2.9)

		printf(" a B\n");	

	else if (gpa < 2.9 && gpa >= 2.1)

		printf(" a C\n");

	else if (gpa < 2.1 && gpa >= 1.2)

		printf(" a D\n");

	else 

		printf(" an F\n");

	

	return 0;

}



