#include <manager.h>

void Manager::pushWindow(std::shared_ptr<SubWindow> subWindow){
        windowStack.push(subWindow);
}
std::shared_ptr<SubWindow> Manager::popWindow(){
        std::shared_ptr<SubWindow> subWindow(windowStack.top());
        windowStack.pop();
        return  subWindow;
}
bool Manager::isEmpty(){
        return windowStack.empty();
}
