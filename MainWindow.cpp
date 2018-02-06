#include "MainWindow.h"
#include "ui_MainWindow.h"

#include <QItemSelectionModel>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    countryModel()
{
    ui->setupUi(this);
    setWindowTitle("Model / View sample - countries");

    ui->countryListView->setModel(&countryModel);

    QItemSelectionModel* selectionModel = ui->countryListView->selectionModel();
    connect(selectionModel, &QItemSelectionModel::selectionChanged,
            this, &MainWindow::onSelectionChanged);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onSelectionChanged(const QItemSelection& selected, const QItemSelection& deselected)
{
    Q_UNUSED(selected)
    Q_UNUSED(deselected)

    const QModelIndex index = ui->countryListView->selectionModel()->currentIndex();
    updateCountryDetails(index);
}

void MainWindow::updateCountryDetails(const QModelIndex& index)
{
    QString countryName = index.data(Qt::DisplayRole).toString();
    ui->countryNameLabel->setText(countryName);

    QString countryCapital = index.data(CountryModel::CapitalRole).toString();
    ui->countryCapitalLabel->setText(countryCapital);
}
