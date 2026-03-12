//test file
#include <gtest/gtest.h>
#include "rvc_controller.h"

TEST(RvcControllerTest, GoesStraightWhenNoObstacleNoDust) {
    RvcController c;
    EXPECT_STREQ(c.next_action(false, false, false, false), "GO_STRAIGHT");
}

TEST(RvcControllerTest, BoostCleaningWhenDustDetected) {
    RvcController c;
    EXPECT_STREQ(c.next_action(false, false, false, true), "BOOST_CLEANING");
}

TEST(RvcControllerTest, StopAndAvoidWhenFrontObstacle) {
    RvcController c;
    EXPECT_STREQ(c.next_action(true, false, false, false), "STOP_AND_AVOID_TURN");
}

TEST(RvcControllerTest, ReverseThenTurnWhenAllSidesBlocked) {
    RvcController c;
    EXPECT_STREQ(c.next_action(true, true, true, false), "REVERSE_THEN_TURN");
}