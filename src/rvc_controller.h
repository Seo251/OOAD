#pragma once

class RvcController {
public:

    const char* next_action(bool front_obstacle,
                            bool left_obstacle,
                            bool right_obstacle,
                            bool dust_detected) const;
};