#include "unity.h"
#include "mock_Multiply.h"
#include "CustomType.h"
#include "Coordinate.h"




void setUp () {}

void tearDown () {}





void test_setCoordinate_should_return_proper_coordinate()

{

 Coordinate actualCoor = {0,0};

 Coordinate expectedCoor = {3,9};



 printf("Line number %d\n",16);



 actualCoor = setCoordinate (3,7);









  assertEqualCoordinate (expectedCoor, actualCoor,23, ((void *)0));;



}



void test_multiplyCoordinate_should_return_proper_multiplies_coordinate()

{

 Coordinate coor = {0,0};



 multiply_CMockExpectAndReturn(31, 2, 4, 8);



 coor = multiplyCoordinate(2,14,4);

 UnityAssertEqualNumber((_U_SINT)((8)), (_U_SINT)((coor.x)), (((void *)0)), (_U_UINT)34, UNITY_DISPLAY_STYLE_INT);



}
