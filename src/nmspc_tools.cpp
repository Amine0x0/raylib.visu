#include <iostream>

namespace tools{
    void logger(const char* msg){
        if (!msg)
            return;
        std::cout << "[DBG]: " << msg << std::endl;
        return ;
    }
}
