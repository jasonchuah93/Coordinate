#include "unity.h"	
#include "CustomType.h"



void assertEqualCoordinate(Coordinate expected, 	//expected instance
							Coordinate actual, 		//actual instance
							int line, 				//line number where error happens
							char * message)			// This is error message
	


	
{		
		UNITY_TEST_ASSERT_EQUAL_INT(expected.x, actual.x, line, NULL);
		UNITY_TEST_ASSERT_EQUAL_INT(expected.y, actual.y, line, NULL);
}
