#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "math.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

double MainWindow::function(double x, double y) {
    return((y*y + x*y)/(x*x));
}

double MainWindow::functionY(double x) {
    return (-x/(log(x)-1));
}

void MainWindow::Runge_Kutt(double x, double y, double h) {
    double K1, K2, K3, K4, dy, x1, y1;
    K1 = h * function(x, y);
    K2 = h * function(x + h/2, y + K1/2);
    K3 = h * function(x + h/2, y + K2/2);
    K4 = h * function(x + h, y + K3);
    dy = (K1 + 2 * K2 + 2 * K3 + K4)/6;
    y1 = y + dy;
    x1 = x + h;
    X.append(x);
    Y.append(y);
    yAcc.append(functionY(x));
    double eps = std::abs(functionY(x) - y);
    double R = (std::abs((K3 + K2) - (K1 + K4)))/15;
    if(R > eps) exit;
    if (x < xMax) {
        Runge_Kutt(x1, y1, h);
    }
}
void MainWindow::on_pushButton_2_clicked()
{
    QString temp;
    temp = ui->xMin->text();
    xMin = temp.toDouble();
    temp = ui->xMax->text();
    xMax = temp.toDouble();
    temp = ui->h->text();
    h = temp.toDouble();
    temp = ui->x->text();
    x = temp.toDouble();
    temp = ui->y->text();
    y = temp.toDouble();
    Runge_Kutt(x, y, h);
    ui->graphic->clearGraphs();
    ui->graphic->legend->setVisible(true);
    QFont legendFont = font();
    legendFont.setPointSize(9);
    ui->graphic->legend->setFont(legendFont);
    ui->graphic->legend->setBrush(QBrush(QColor(255,255,255,230)));
    ui->graphic->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignBottom|Qt::AlignRight);
    ui->graphic->addGraph();
    ui->graphic->graph(0)->setPen(QPen(Qt::red));
    ui->graphic->graph(0)->setName("Приближенное решение");
    ui->graphic->addGraph();
    ui->graphic->graph(1)->setPen(QPen(Qt::blue));
    ui->graphic->graph(1)->setName("Точное решение");
    ui->graphic->graph(0)->setData(X, Y);
    ui->graphic->graph(1)->setData(X, yAcc);
    ui->graphic->xAxis->setLabel("x");
    ui->graphic->yAxis->setLabel("y");
    ui->graphic->xAxis->setRange(0, xMax);
    double yMin = Y[0], yMax = Y[0];
    for (int i = 1; i < Y.length(); i++) {
        if (Y[i]<yMin) yMin = Y[i];
        if (Y[i]>yMax) yMax = Y[i];
    }
    ui->graphic->yAxis->setRange(0, yMax);
    ui->graphic->yAxis->ticker()->setTickCount(50);
    ui->graphic->plotLayout()->insertRow(0);
    ui->graphic->plotLayout()->addElement(0, 0, new QCPTextElement(ui->graphic, "Графики точного и приближенного решений", QFont("sans", 12, QFont::Bold)));
    ui->graphic->replot();


    //ui->graphicAcc->clearGraphs();
    //ui->graphic->addGraph();
    //ui->graphic->graph(1)->setData(X, yAcc);
    //ui->graphic->xAxis->setLabel("x");
    //ui->graphic->yAxis->setLabel("y");
    //ui->graphic->xAxis->setRange(0, xMax);
    //double yAccMin = yAcc[0], yAccMax = yAcc[0];
    //for (int i = 1; i < Y.length(); i++) {
    //    if (yAcc[i]<yAccMin) yAccMin = yAcc[i];
    //    if (yAcc[i]>yAccMax) yAccMax = yAcc[i];
    //}
    //ui->graphic->yAxis->setRange(0, yAccMax);
    //ui->graphic->replot();


    /*ui->graphicAcc->clearGraphs();
    ui->graphicAcc->addGraph();
    ui->graphicAcc->graph(0)->setData(X, yAcc);
    ui->graphicAcc->xAxis->setLabel("x");
    ui->graphicAcc->yAxis->setLabel("y");
    ui->graphicAcc->xAxis->setRange(0, xMax);
    double yAccMin = yAcc[0], yAccMax = yAcc[0];
    for (int i = 1; i < Y.length(); i++) {
        if (yAcc[i]<yAccMin) yAccMin = yAcc[i];
        if (yAcc[i]>yAccMax) yAccMax = yAcc[i];
    }
    ui->graphicAcc->yAxis->setRange(0, yAccMax);
    ui->graphicAcc->replot();*/
}

void MainWindow::on_pushButton_clicked()
{
    model = new QStandardItemModel(X.length(), 4, this);
    ui->tableView->setModel(model);

    QModelIndex index;
    int col = 0;
    for(int row = 0; row < model->rowCount(); row++) {
        index = model->index(row, col);
        model->setData(index, X[row]);
    }

    col = 1;

    for(int row = 0; row < model->rowCount(); row++) {
        index = model->index(row, col);
        model->setData(index, yAcc[row]);
    }

    col = 2;

    for(int row = 0; row < model->rowCount(); row++) {
        index = model->index(row, col);
        model->setData(index, Y[row]);
    }

    col = 3;

    for(int row = 0; row < model->rowCount(); row++) {
        index = model->index(row, col);
        model->setData(index, yAcc[row] - Y[row]);
    }

    model->setHeaderData(0, Qt::Horizontal, "x");
    model->setHeaderData(1, Qt::Horizontal, "y точное");
    model->setHeaderData(2, Qt::Horizontal, "y приближенное");
    model->setHeaderData(3, Qt::Horizontal, "Погрешность");
}
