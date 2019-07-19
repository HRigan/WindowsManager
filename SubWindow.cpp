#include <subwindow.h>

void SubWindow::createWindow(){
    static int number = 0;
    setWindowTitle("Game menu №"+QString::number( number++));
    setGeometry(QRect(0, 0, 640, 480));
    show();
}
SubWindow::SubWindow () {
  QGridLayout *myLayout = new QGridLayout;
  QPushButton *pushButton=new QPushButton("Stay on Top");
  pushButton->setGeometry(QRect(0, 0, 40, 40));
  pushButton->setMaximumSize(100,40);
  connect(pushButton, SIGNAL(clicked()),this, SLOT(slotButtonClicked()));
  myLayout->addWidget(pushButton);
  setLayout(myLayout);
}
void SubWindow::deleteWindow(){close();}
void SubWindow::slotButtonClicked (){
    setWindowTitle("Menu on top");
    setWindowFlags( windowFlags() | Qt::WindowStaysOnTopHint );
    show();
}
