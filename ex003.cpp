#include <iostream>
#include <vector>
#include <algorithm>

// 遞迴函數列出所有選擇三人的排列組合
void iii(const std::vector<std::string>& people, int currentIndex,
        std::vector<std::string>& currentSelection, int selectionCount) {
    // Base case: 當已經選滿三人時，輸出排列組合並返回
    if (currentSelection.size() == selectionCount) {
        for (const auto& person : currentSelection) {
            std::cout << person << " ";
        }
        std::cout << std::endl;
        return;
    }

    // 遞迴挑選下一個人
    for (int i = currentIndex; i < people.size(); ++i) {
        currentSelection.push_back(people[i]);
        (people, i + 1, currentSelection, selectionCount);
        currentSelection.pop_back();
    }
}

int main() {
    const int totalPeople = 5;
    const int selectedPeople = 3;

    std::vector<std::string> people;
    std::string person;

    for (int i = 0; i < totalPeople; ++i) {
        std::cin >> person;
        people.push_back(person);
    }
    std::sort(people.begin(), people.end());

    std::vector<std::string> currentSelection;
    iii(people, 0, currentSelection, selectedPeople);

    return 0;
}
