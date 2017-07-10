#include "proyecto.h"
#include "ui_proyecto.h"

Proyecto::Proyecto(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Proyecto)
{
    ui->setupUi(this);
}

Proyecto::~Proyecto()
{
    delete ui;
}
