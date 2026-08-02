// valid parentheses
#include <iostream>
#include <string>

bool isValid(const std::string &s) {
  // If the length is odd, it cannot form perfect pairs
  if (s.length() % 2 != 0)
    return false;

  // Use a regular string to act as our stack memory
  std::string stack_sim = "";

  for (char c : s) {
    // Push opening brackets by appending them to the string
    if (c == '(' || c == '{' || c == '[') {
      stack_sim.push_back(c);
    }
    // Handle closing brackets
    else {
      // If stack is empty when a closing bracket arrives, it is invalid
      if (stack_sim.empty())
        return false;

      char last_open = stack_sim.back(); // Look at the "top" element

      // Check if the current closing bracket matches the last opening bracket
      if ((c == ')' && last_open == '(') || (c == '}' && last_open == '{') ||
          (c == ']' && last_open == '[')) {
        stack_sim.pop_back(); // Pop the element by removing the last character
      } else {
        return false; // Mismatched brackets
      }
    }
  }

  // Returns true if all brackets were perfectly matched and cleared
  return stack_sim.empty();
}

int main() {
  std::cout << std::boolalpha;

  std::cout << isValid("()[]{}") << "\n"; // Output: true
  std::cout << isValid("([)]") << "\n";   // Output: false
  std::cout << isValid("{[]}") << "\n";   // Output: true

  return 0;
}
