#include <QApplication>
#include <QMessageBox>
#include <QSqlError>
#include <QTextCodec>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
#include"cash_resiger.h"
bool creatConnect();

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    Cash_Resiger c;
    c.show();
    QTextCodec *codec = QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForLocale(codec);

    if(!creatConnect())
    {
        return 1;
    }

    qDebug() << "Available drivers:";

    QStringList drivers = QSqlDatabase::drivers();

    foreach(QString driver, drivers)
        qDebug() << "\t "<< driver;

    qDebug() << "End";

    QSqlQuery query;
    QString sql = "select * from taobao;";
    qDebug() << sql;
    query.exec(sql);
    while(query.next())
    {
        qDebug()<<query.value(0).toString()<<query.value(1).toString();
    }
    return a.exec();
}

bool creatConnect()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setPort(3306);
    db.setDatabaseName("python");
    db.setUserName("root");
    db.setPassword("1999625");

    bool ok = db.open();//建立数据库连接
    if(!ok)
    {
        QMessageBox::critical(0,QObject::tr("连接数据库失败！！！"),db.lastError().text());
        return false;
    }
    else
    {
        QMessageBox::information(0,QObject::tr("Tips"),QObject::tr("连接数据库成功！！！"));
        return true;
    }
}
