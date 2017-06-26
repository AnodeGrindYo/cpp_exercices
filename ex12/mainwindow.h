/*
 * mainwindow.cpp
 *
 * Copyright 2017 mr.a.godoy@gmail.com,
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 *
 *
 */
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include <QDebug>
#include "forminsert.h"
#include "formupdate.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void display();
    QString getLineNomVille();
    QString getLineCP();

private slots:
    void on_Quit_clicked();
    void on_pushButton_Display_selection_clicked();
    void on_Insert_clicked();
    void on_Update_clicked();
    void on_lineNomVille_returnPressed();
    void on_tableView_doubleClicked(const QModelIndex &index);
    void on_lineCP_returnPressed();
    void on_Reload_clicked();
    void on_Delete_clicked();
    void on_actionQuit_triggered();
    void on_actionReload_triggered();
    void on_actionUpdate_selection_triggered();
    void on_actionInsert_city_triggered();
    void on_actionDelete_selection_triggered();
    void on_actionAbout_triggered();
    void on_actionConnection_informations_triggered();

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
    QSqlQueryModel *model;
    formInsert *insertion;
    formupdate *update;

    QVariant activeSelection();

public slots:
    void openInsertDialog();
    void openUpdateDialog();
};

#endif // MAINWINDOW_H
