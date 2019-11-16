#ifndef CASH_RESIGER_H
#define CASH_RESIGER_H

#include <QMainWindow>

namespace Ui {
class Cash_Resiger;
}

class Cash_Resiger : public QMainWindow
{
    Q_OBJECT

public:
    explicit Cash_Resiger(QWidget *parent = nullptr);
    ~Cash_Resiger();

private:
    Ui::Cash_Resiger *ui;
};

#endif // CASH_RESIGER_H
