#include "../../.hpp/features/features.h"

void CFunctions::download() {
    int choice;

    do {
        CLEAR;

        std::cout << "\n1. Discord\n2. TeamSpeak\n3. Google Chrome\n4. Chromium\n5. Firefox\n6. Visual Studio Code\n7. Visual Studio Professional 2022\n8. Steam\n9. Telegram\n10. .NET Framework\n11. CCleaner\n\n12. back\n\n\ninput: ";
        std::cin >> choice;

        if (choice >= 1 && choice <= 11) {
            CLEAR;
            execute->command(choice);
            CLEAR;
        }
    } while (choice != 12);

    CLEAR;
}

void CFunctions::information() {
    int choice;

    do {
        std::cout << "\ntelegram - https://t.me/kudoiyzbekistan\n\n1: back\n\ninput: ";
        std::cin >> choice;
    } while (choice != 1);

    CLEAR;
}

std::unique_ptr<CFunctions> functions = std::make_unique<CFunctions>();