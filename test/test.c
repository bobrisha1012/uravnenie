#include "urav.h"
#include "ctest.h"

CTEST(urav_suite, test__equation) 
{
	const int a =1, b = 4, c = 4;

        float x1, x2;

 	urav (a, b, c, &x1, &x2);
 
	const float expected_x1 = -2;
	const float expected_x2 = -2;
	
	ASSERT_DBL_NEAR(expected_x1, x1);
	ASSERT_DBL_NEAR(expected_x2, x2);
}


