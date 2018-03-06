#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QItemSelection>

#include "CountryModel.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void onSelectionChanged(const QItemSelection& selected, const QItemSelection& deselected);

private:
    Ui::MainWindow *ui;
    CountryModel countryModel;
};

#endif // MAINWINDOW_H
