#include "cal.h"
#include "unity.h"

int add1(int an, int bn)
{
    sum4= an+bn;
    return sum4;
}
int subtract2(int ta, int td)
{
    sub5= ta+td;
    return sub5;
}
/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}

void test_add()
{
    TEST_ASSERT_EQUAL(add1(5,4),9);
}
void test_sub()
{
    TEST_ASSERT_EQUAL(subtract2(5,4),1);
}
int main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_add);
    RUN_TEST(test_sub);
    

    /* Close the Unity Test Framework */
    return UNITY_END();
}
