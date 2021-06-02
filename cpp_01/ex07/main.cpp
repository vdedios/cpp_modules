#include <iostream>
#include <fstream>
#include <string>

void checkInputFormat(int argc, char **argv) {
    if (argc != 4) {
        std::cout << "USAGE: ./replace <fileName> <str> <replace_str>" << std::endl;
        exit(0);
    }
    if (!argv[2] || !*argv[2] || !argv[3] || !*argv[3]) {
        std::cout << "Invalid or void strings." << std::endl;
        exit(0);
    }
}

void searchAndReplace(std::string& line, char *str1, char *str2) {
    const std::string target(str1);
    const std::string replacement(str2);
    size_t pos = 0;

    while ((pos = line.find(target, pos)) != std::string::npos) {
        line.replace(pos, target.length(), replacement);
    }
    return ;
}

int main(int argc, char **argv) {
    std::string line;

    checkInputFormat(argc, argv);
    std::ifstream file(argv[1]);

    if (file.is_open()) {
        std::string fileName(argv[1]);
        std::ofstream replaceFile(fileName + ".replace");

        while (std::getline(file, line)) {
            searchAndReplace(line, argv[2], argv[3]);
            replaceFile << line;
            if (!file.eof()) {
                replaceFile << std::endl;
            }
        }
        replaceFile.close();
        file.close();
    } else {
        std::cout << "Invalid file name." << std::endl;
        return (0);
    }
}
