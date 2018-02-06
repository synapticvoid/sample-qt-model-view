#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    countryModel()
{
    ui->setupUi(this);
    setWindowTitle("Model / View sample - countries");

    ui->countryListView->setModel(&countryModel);
}

MainWindow::~MainWindow()
{
    delete ui;
}
