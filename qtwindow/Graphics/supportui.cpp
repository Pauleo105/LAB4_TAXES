#include "supportui.h"
#include <iostream>
#include <string>

int qstrtoint(QString str) {
    std::string ftp = str.toStdString();
    if (str == "") {
        return -2;
    }
    else if (ftp.find_first_not_of("0123456789") != std::string::npos) {
        return -1;
    }
    else {
        return std::stoi(ftp);
    }
};
