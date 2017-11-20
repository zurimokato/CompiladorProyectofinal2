#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_actionNew_triggered();

    void on_actionSave_triggered();

    void on_actionAbout_triggered();

    void on_actionRun_triggered();

    void on_actionOpen_triggered();

    void saveFile();

    void on_actionSaveAs_triggered();

    bool maybeSave();

    void on_actionExit_triggered();

    void closeEvent(QCloseEvent *event);

private:
    Ui::MainWindow *ui;
    QString curFile;
};

#endif // MAINWINDOW_H
