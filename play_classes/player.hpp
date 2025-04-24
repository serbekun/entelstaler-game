#pragma once

#include <iostream>

namespace GameClass {

class player {

    public:
        int health;
        int oxygen;
        int stress;

    void UseOxygen() {
        this->oxygen -= 10;
    }    

        
};

}