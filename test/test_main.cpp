#include <Arduino.h>
#include <unity.h>

void tearDown(void) {
    // clean stuff up here
}

int add(int a, int b)
{
    return a + b;
}

void test_calculator_addition(void) {
    TEST_ASSERT_EQUAL(32, add(25, 7));
}

void setup() {
    // NOTE!!! Wait for >2 secs
    // if board doesn't support software reset via Serial.DTR/RTS
    delay(2000);

    UNITY_BEGIN();
    RUN_TEST(test_calculator_addition);
    UNITY_END();
}

void loop() {
    delay(1000);
    Serial.println("Step");
}