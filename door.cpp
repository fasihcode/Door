#include <iostream>

using namespace std;

class Door {
private:
    bool isOpen;
    bool isLocked;

public:
    Door();
    void openDoor();
    void closeDoor();
    void lockDoor();
    void unlock();
    bool isDoorOpen() const;
    bool isDoorLocked() const;
};

Door::Door() : isOpen(false), isLocked(false) {}

void Door::openDoor() {
    isOpen = true;
}

void Door::closeDoor() {
    isOpen = false;
}

void Door::lockDoor() {
    isLocked = true;
}

void Door::unlock() {
    isLocked = false;
}

bool Door::isDoorOpen() const {
    return isOpen;
}

bool Door::isDoorLocked() const {
    return isLocked;
}


int main() {
    // Your main code goes here
    return 0;
}