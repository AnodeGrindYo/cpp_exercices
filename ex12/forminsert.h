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
#ifndef FORMINSERT_H
#define FORMINSERT_H

#include <QObject>
#include <QDialog>
#include <QLineEdit>
#include <QPushButton>
#include <QFormLayout>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QGridLayout>
#include <QGroupBox>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include <QDebug>
#include <QString>
#include <QComboBox>
#include <QSqlRecord>

class formInsert : public QDialog
{
    Q_OBJECT
public:
    explicit formInsert(QWidget *parent);
    ~formInsert();

private:
    QLineEdit *NomVille;
    QLineEdit *CodePostal;
    //QLineEdit *IdDepartement;
    QLineEdit *Lon; // longitude
    QLineEdit *Lat; // latitude (ou café latte, au choix)
    QComboBox *listeDepartement;
    QSqlQueryModel *modelD;

    QString qstrNomVille;
    int intCodePostal;
    int qstrDepartement;

    QPushButton *apply;
    QPushButton *accept;

    QFormLayout *layout_line;
    QHBoxLayout *layout_buttons;
    QVBoxLayout *layout_main;

private slots:
    void storeData();

signals:
    void onApplyOK();


public slots:

};

#endif // FORMINSERT_H
