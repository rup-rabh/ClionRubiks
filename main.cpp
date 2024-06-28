#include <iostream>
#include "Model/RubiksCube3dArray.cpp"

int main()
{
    RubiksCube3dArray r1;
    r1.print();
    auto moves = r1.randomShuffleCube(1);
    for (auto move: moves)
    {
        cout << r1.getMove(move)<< " ";
    }
    r1.print();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
