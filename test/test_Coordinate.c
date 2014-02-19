#include "unity.h"			//Unity.h must be at the top
#include "Coordinate.h"
#include "CustomType.h"
#include "mock_Multiply.h"	//Tell cmock to mock all function here


void setUp () {}
void tearDown () {}


void test_setCoordinate_should_return_proper_coordinate()
{
	Coordinate actualCoor = {0,0};
	Coordinate expectedCoor = {3,9};
	
	printf("Line number %d\n",__LINE__);
	
	actualCoor = setCoordinate (3,7);
	//TEST_ASSERT_EQUAL(3,coor.x);
	//TEST_ASSERT_EQUAL(7,coor.y);
	 //assertEqualCoordinate (expectedCoor, actualCoor,__LINE__, NULL);
	 
	 TEST_ASSERT_EQUAL_Coordinate(expectedCoor, actualCoor);
	 
}

void test_multiplyCoordinate_should_return_proper_multiplies_coordinate()
{
	Coordinate coor = {0,0};
	
	multiply_ExpectAndReturn(2,4,8); //Mocking
	
	coor = multiplyCoordinate(2,14,4);
	TEST_ASSERT_EQUAL(8,coor.x);
	
}


