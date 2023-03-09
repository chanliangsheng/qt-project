#include "mainwindow.h"
#include <QApplication>
#include "mainwindow.h"
#include <QApplication>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>


int main(int argc, char *argv[])
{
    Q_UNUSED(argc);
    Q_UNUSED(argv);
    QSqlDatabase database;
    if (QSqlDatabase::contains("qt_sql_default_connection"))
    {
        database = QSqlDatabase::database("qt_sql_default_connection");
    }
    else
    {
        //连接数据库
        database = QSqlDatabase::addDatabase("QSQLITE");
        database.setDatabaseName("db/database.db");
    }


    if (!database.open())
    {
        qDebug() << "Error: Failed to connect database." << database.lastError();
    }
    else
    {
        // do something
        QSqlQuery sql_query;
        QString select_all_sql = "select mz from cl_m_h;";
        sql_query.prepare(select_all_sql);
        if(!sql_query.exec())
        {
            qDebug()<<sql_query.lastError();
        }
        else
        {
            while(sql_query.next())
            {
                float mz = sql_query.value(0).toFloat();

                qDebug()<<QString("mz:%1").arg(mz);
            }
        }
    }


    database.close();
    return 0;
}
