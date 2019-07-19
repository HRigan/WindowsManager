#ifndef SUBWINDOW_H
#define SUBWINDOW_H
#include <QWidget>
#include <QPushButton>
#include <QGridLayout>

class SubWindow : public QWidget{
    Q_OBJECT
public slots:
void slotButtonClicked ();
public:
    void createWindow();
    SubWindow ();
    void deleteWindow();
};
#endif // SUBWINDOW_H
