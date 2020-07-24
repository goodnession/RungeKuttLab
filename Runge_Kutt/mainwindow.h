#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;

    void Runge_Kutt(double x, double y, double h);
    double function(double x, double y);
    double functionY(double x);
    double xMax, xMin, h, x, y;
    QVector <double> X, Y, yAcc;

    QStandardItemModel *model;
};
#endif // MAINWINDOW_H
