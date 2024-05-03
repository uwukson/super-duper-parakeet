#include "../../.hpp/features/features.h"

void CFunctions::download() {
    int choice;

    do {
        CLEAR;


        const char* apps[] = {
            "Discord", "TeamSpeak", "Google Chrome", "Chromium",
            "Firefox", "Visual Studio Code", "Visual Studio Professional 2022",
            "Steam", "Telegram", ".NET Framework", "CCleaner"
        };

        for (int i = 0; i < sizeof(apps) / sizeof(apps[0]); ++i) {
            std::cout << i + 1 << ". " << apps[i] << std::endl;
        }

        std::cout << "\n12. back" << std::endl;
        std::cout << "\n\ninput: ";


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