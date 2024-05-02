#include "../../.hpp/execute/execute.h"

void CExecute::install(const std::string& programId) {
    std::string command = "winget install -e --id " + programId;
    system(command.c_str());
}

void CExecute::command(int command) {
    switch (command) {
    case 1: install("Discord.Discord"); break;
    case 2: install("TeamSpeakSystems.TeamSpeakClient"); break;
    case 3: install("Google.Chrome.Dev"); break;
    case 4: install("eloston.ungoogled-chromium"); break;
    case 5: install("Mozilla.Firefox"); break;
    case 6: install("Microsoft.VisualStudioCode"); break;
    case 7: install("Microsoft.VisualStudio.2022.Professional"); break;
    case 8: install("Valve.Steam"); break;
    case 9: install("Telegram.TelegramDesktop"); break;
    case 10: install("Microsoft.DotNet.Framework.DeveloperPack_4"); break;
    case 11: install("Piriform.CCleaner"); break;
    default: break;
    }
}

std::unique_ptr<CExecute> execute = std::make_unique<CExecute>();