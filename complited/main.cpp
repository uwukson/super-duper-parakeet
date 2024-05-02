#include "dependies/includes.h"

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
        std::cout << "\n\n1: download programms\n2: information\n3: exit\n\ninput: ";
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