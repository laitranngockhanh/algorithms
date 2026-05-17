class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> stack;
        for (int ast : asteroids) {
            while (!stack.empty() && stack.back() > 0 && ast < 0) {
                int top = stack.back();
                 if (abs(top) < abs(ast)) {
                 stack.pop_back();
                    continue; 
                } 
                else if (abs(top) == abs(ast)) {
                    stack.pop_back();
                    ast = 0; 
                    break;
                } 
                else {
                     ast = 0;
                    break;
                }
            }
            if (ast != 0) {
                stack.push_back(ast);
            }
        }
        return stack;
    }
};