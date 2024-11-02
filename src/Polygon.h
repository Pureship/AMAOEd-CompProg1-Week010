#include <string>

class Polygon {
private:
    std::string name;
    int numOfSides;
    std::string color;

public:
    Polygon(const std::string &n, int sides, const std::string &c)
        : name(n), numOfSides(sides), color(c) {}

    void setName(const std::string &n) { name = n; }
    void setNumOfSides(int sides) { numOfSides = sides; }
    void setColor(const std::string &c) { color = c; }

    std::string getName() const { return name; }
    int getNumOfSides() const { return numOfSides; }
    std::string getColor() const { return color; }
};