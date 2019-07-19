#ifndef MANAGER_H
#define MANAGER_H
#include <iostream>
#include <stack>
#include"subwindow.h"
class Manager{
private:
    std::stack<std::shared_ptr<SubWindow>> windowStack;
public:
    void pushWindow(std::shared_ptr<SubWindow> subWindow);

    std::shared_ptr<SubWindow> popWindow();

    bool isEmpty();
};
#endif // MANAGER_H
