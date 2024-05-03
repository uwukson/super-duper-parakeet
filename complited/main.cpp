#include "dependencies/includes.h"

int main()
{
    color->set(CColor::COLORS_CONSOLE::RED);
    if (!admin->check()) { std::cout << "run the program as admin\n"; system("pause"); return 0; }
    if (!connection->check()) { std::cout << "please check your internet connection\n"; system("pause"); return 0; }

    console->set();

    std::string select_func;
    int select_func_;

    do {
        color->set(CColor::COLORS_CONSOLE::WHITE);

        std::wcout << ascii->string_2_wstring(ascii->image) << std::endl;

        const char* items[ ] = {
            "download programms", "information", "exit"
        };

        for (int i = 0; i < sizeof(items) / sizeof(items[0]); ++i) {
            std::cout << "\n" << i + 1 << ": " << items[i];
        }
        std::cout << "\n\ninput: ";

        std::cin >> select_func_;

        switch (select_func_) {
        case 1:
            CLEAR;
            functions->download();
            break;
        case 2:
            CLEAR;
            functions->information();
            break;
        }

    } while (select_func_ != 3);

    return 0;
}