/*
Program that counts the square and volume of figures
*/
#include <stdio.h>
#include <stdlib.h>
#include "Calc_P.h"
#include "Calc_V.h"

int main(int argc, char *argv[]) {
	float a,b,h;
    if (argc == 3)
    {
        a = atoi(argv[1]);
        b = atoi(argv[2]);
        if(a>0 || b>0)
	    {
            printf("Rectangle area: %f ", P_rect(a,b));
            printf("\n");
        }
        else {
            printf("Error 1\n");
		    exit(1);
	    }
    }
	else if (argc == 4)
    {
        a = atoi(argv[1]);
        b = atoi(argv[2]);
        h = atoi(argv[3]);
        if(a>0 || b>0 || h>0)
	    {
            printf("The area of the cube: %f ", P_cub(a,b,h));
            printf("\n");
            printf("The volume of the cube: %f ", V_cub(a,b,h));
            printf("\n");
        }
        else {
            printf("Error 1\n");
		    exit(1);
	    }
    }
	else {
		printf("Error 2\n");
		exit(2);
	}
	return(0);
}
/*
exit 0 : program executed successfully
exit 1 : argument is not valid
exit 2 : no argument passed / too many arguments
*/