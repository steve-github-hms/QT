#include "cash_resiger.h"
#include "ui_cash_resiger.h"
#include"QZXing.h"

Cash_Resiger::Cash_Resiger(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Cash_Resiger)
{
    ui->setupUi(this);
}

Cash_Resiger::~Cash_Resiger()
{
    delete ui;
}
