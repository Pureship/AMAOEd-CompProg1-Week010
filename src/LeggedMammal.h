#include <string>

class LeggedMammal {
private:
    int numOfLegs;
    std::string furType;
    bool hasTail;

public:
    LeggedMammal(int legs, const std::string &fur, bool tail)
        : numOfLegs(legs), furType(fur), hasTail(tail) {}

    void setNumOfLegs(int legs) { numOfLegs = legs; }
    void setFurType(const std::string &fur) { furType = fur; }
    void setHasTail(bool tail) { hasTail = tail; }

    int getNumOfLegs() const { return numOfLegs; }
    std::string getFurType() const { return furType; }
    bool getHasTail() const { return hasTail; }
};