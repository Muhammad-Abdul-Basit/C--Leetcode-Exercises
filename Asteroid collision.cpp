// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <vector>
#include <stack>
#include <algorithm> // for std::reverse

class Solution {
public:
    std::vector<int> asteroidCollision(std::vector<int>& asteroids) {
        std::stack<int> survived_asteroids; // Stack to hold surviving asteroids
        std::vector<int> remaining_asteroids; // Vector to hold the result
        
        for (int i = 0; i < asteroids.size(); i++) {
            // Process each asteroid
            if (!survived_asteroids.empty()) {
                // Check for collision
                if (asteroids[i] < 0 && survived_asteroids.top() > 0) {
                    // Collision scenario
                    if (std::abs(asteroids[i]) == std::abs(survived_asteroids.top())) {
                        // Equal size, both destroyed
                        survived_asteroids.pop();
                    } else if (std::abs(asteroids[i]) < std::abs(survived_asteroids.top())) {
                        // Current asteroid is smaller, it gets destroyed
                        continue;
                    } else {
                        // Current asteroid is larger, pop the top and continue checking
                        survived_asteroids.pop();
                        i--; // Recheck the current asteroid
                    }
                } else {
                    // No collision, push the current asteroid
                    survived_asteroids.push(asteroids[i]);
                }
            } else {
                // Stack is empty, push the current asteroid
                survived_asteroids.push(asteroids[i]);
            }
        }

        // Transfer remaining asteroids from stack to vector
        while (!survived_asteroids.empty()) {
            remaining_asteroids.push_back(survived_asteroids.top());
            survived_asteroids.pop();
        }

        // Reverse the vector to maintain original order
        std::reverse(remaining_asteroids.begin(), remaining_asteroids.end());
        return remaining_asteroids;
    }
};
int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
