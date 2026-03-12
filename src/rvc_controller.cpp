#include "rvc_controller.h"

const char* RvcController::next_action(bool front_obstacle,
                                       bool left_obstacle,
                                       bool right_obstacle,
                                       bool dust_detected) const
{

    if (dust_detected) {
        return "BOOST_CLEANING";
    }

    if (front_obstacle && left_obstacle && right_obstacle) {
        return "REVERSE_THEN_TURN";
    }

    if (front_obstacle) {
        return "STOP_AND_AVOID_TURN";
    }
    return "GO_STRAIGHT";
}