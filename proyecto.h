#ifndef PROYECTO_H
#define PROYECTO_H

#include <QMainWindow>

namespace Ui {
class Proyecto;
}

class Proyecto : public QMainWindow
{
    Q_OBJECT

public:
    explicit Proyecto(QWidget *parent = 0);
    ~Proyecto();

private:
    Ui::Proyecto *ui;
};

#endif // PROYECTO_H
