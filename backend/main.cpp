#include <iostream>
#include <Box2D/Box2D.h>
#include <boost/noncopyable.hpp>
#include "blib/polygon/Shapes.hpp"

int main() {

    b2Vec2 grav(0.0, -9.8);

    std::cout << "Hello, World! gravity.x: " <<grav.x <<" gravity.y: "<< grav.y<< std::endl;
    return 0;
}
