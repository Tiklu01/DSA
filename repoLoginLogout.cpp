#include <iostream>
#include <map>
#include <set>
#include <string>
#include <sstream>

int main() {
    std::map<std::string, std::string> repo; // Repository to store username-password pairs
    std::set<std::string> logged_in;        // Set to track logged-in users

    // Read input line by line
    std::string line;
    while (std::getline(std::cin, line)) {
        // Skip empty lines (if any)
        if (line.empty()) continue;

        // Use a string stream to split the input line into parts
        std::istringstream iss(line);

        // Variables to store the command, username, and password
        std::string command, username, password;

        // Extract the command, username, and password from the input line
        iss >> command >> username >> password;

        // Handle the "register" command
        if (command == "register") {
            // Check if the username already exists in the repository
            if (repo.find(username) == repo.end()) {
                // If the username doesn't exist, add it to the repository
                repo[username] = password;
                std::cout << "registered successfully" << std::endl;
            } else {
                // If the username already exists, print an error message
                std::cout << "registration unsuccessful" << std::endl;
            }
        }

        // Handle the "login" command
        else if (command == "login") {
            // Check if the username exists in the repository and if the password matches
            if (repo.find(username) != repo.end() && repo[username] == password) {
                // If valid, add the user to the logged-in set
                logged_in.insert(username);
                std::cout << "login successful" << std::endl;
            } else {
                // If invalid, print an error message
                std::cout << "login unsuccessful" << std::endl;
            }
        }

        // Handle the "logout" command
        else if (command == "logout") {
            // Check if the username exists in the repository and if the password matches
            if (repo.find(username) != repo.end() && repo[username] == password) {
                // If valid, check if the user is currently logged in
                if (logged_in.find(username) != logged_in.end()) {
                    // If logged in, remove the user from the logged-in set
                    logged_in.erase(username);
                    std::cout << "logout successful" << std::endl;
                } else {
                    // If not logged in, print an error message
                    std::cout << "logout unsuccessful" << std::endl;
                }
            } else {
                // If the username or password is invalid, print an error message
                std::cout << "logout unsuccessful" << std::endl;
            }
        }
    }

    return 0; // End of the program
}