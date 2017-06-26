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
#ifndef FORMUPDATE_H
#define FORMUPDATE_H

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

class formupdate : public QDialog
{
    Q_OBJECT
public:
    explicit formupdate(QWidget *parent);
    ~formupdate();
    QString getNomVille();
    int getCodePostal();
    QString getDepartement();


private:
    QLineEdit *NomVille;
    QLineEdit *CodePostal;
    QLineEdit *NomDepartement;

    QString qstrNomVille;
    int intCodePostal;
    QString qstrDepartement;

    QPushButton *apply;
    QPushButton *accept;

    QFormLayout *layout_line;
    QHBoxLayout *layout_buttons;
    QVBoxLayout *layout_main;

private slots:
    void storePersonData();

signals:
    void onApplyOK();


public slots:

};

#endif // FORMUPDATE_H
