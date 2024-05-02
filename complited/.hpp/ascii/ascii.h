#pragma once
#include "../../dependies/includes.h"

class CAscii {
public:
    std::string image = R"(                                                 
                                                 
oooo d8b  .ooooo.  oo.ooooo.   .ooooo.   .oooo.o 
`888""8P d88' `88b  888' `88b d88' `88b d88(  "8 
 888     888ooo888  888   888 888   888 `"Y88b.  
 888     888    .o  888   888 888   888 o.  )88b 
d888b    `Y8bod8P'  888bod8P' `Y8bod8P' 8""888P' 
                    888                          
                   o888o                         
                                                 
)";

    std::wstring string_2_wstring(const std::string& str);
};

extern std::unique_ptr<CAscii> ascii;