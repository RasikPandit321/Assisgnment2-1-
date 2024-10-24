#include "pch.h"
#include "CppUnitTest.h"

extern"C" int getPerimeter(int* length, int* width);

extern"C" int getArea(int* length, int* width);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestforPerimeterandArearectangle
{
	TEST_CLASS(TestforPerimeterandArearectangle)
	{
	public:
		
		TEST_METHOD(Test_for_perimeter_of_rectangle)
		{
			//Test case for testing perimeter of rectangle
			int length = 3;
			int width = 2;
			int result = 0;
			result = getPerimeter(&length, &width);
			Assert::AreEqual(10, result);
		}
		TEST_METHOD(Test_for_area_of_rectangle)
		{
			//Test case for testing area of rectangle
			int length = 5;
			int width = 4;
			int result = 0;
			result = getArea(&length, &width);
			Assert::AreEqual(20, result);
		}

	};
}

