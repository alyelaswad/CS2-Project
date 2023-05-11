#ifndef PLANE_H
#define PLANE_H

#include <QMainWindow>
#include <QString>
#include <QVector>
#include <QDateTime>
#include <QTimer>
#include "airplanewaitingqueue.h"
QT_BEGIN_NAMESPACE
namespace Ui { class Plane; }
QT_END_NAMESPACE

class Plane : public QMainWindow
{
    Q_OBJECT

public:
    Plane(QWidget *parent = nullptr);

    ~Plane();

private slots:
    void on_pushButton_2_clicked();


    void on_pushButtonAdd_clicked();

    void on_pushButton_clicked();

private:
    Ui::Plane *ui;
    bool takeInput;
    void compute();
    void updateDateTime();
     QTimer* timer;
     QVector<QString> PlaneInfo;
     int count =0;
//     AirplaneWaitingQueue Q;
};
#endif // PLANE_H
