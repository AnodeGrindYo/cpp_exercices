#include "formupdate.h"
#include <QDebug>

formupdate::formupdate(QWidget *parent)
{
    qDebug() << "instance formupdate construite";


    NomVille = new QLineEdit;
    CodePostal = new QLineEdit;
    NomDepartement = new QLineEdit;
    apply = new QPushButton("&Apply");
    accept = new QPushButton("&Quitter");

    layout_line = new QFormLayout;
    layout_line->addRow("Nom Ville", NomVille);
    layout_line->addRow("Code Postal", CodePostal);
    layout_line->addRow("Departement", NomDepartement);

    layout_buttons = new QHBoxLayout;
    layout_buttons->addWidget(apply);
    layout_buttons->addWidget(accept);

    layout_main = new QVBoxLayout;
    layout_main->addLayout(layout_line);
    layout_main->addLayout(layout_buttons);

    setLayout(layout_main);

    setWindowTitle("Modifier une ville");

    connect(apply, SIGNAL(clicked()), this, SLOT(storePersonData()));
    connect(accept, SIGNAL(clicked()), this, SLOT(accept()));
}

formupdate::~formupdate()
{
    qDebug() << "instance formupdate detruite";
}

int formupdate::getCodePostal()
{
    return intCodePostal;
}

QString formupdate::getNomVille()
{
    return qstrNomVille;
}

QString formupdate::getDepartement()
{
    return qstrDepartement;
}

void formupdate::storePersonData()
{
    if(NomVille->text().isEmpty() || CodePostal->text().isEmpty() || NomDepartement->text().isEmpty())
    {
        QMessageBox::warning(this, "Champs incomplets", "Veuillez ne pas laisser de champ vide");
    }
    else
    {
        qstrNomVille = NomVille->text();
        intCodePostal = CodePostal->text().toInt();
        qstrDepartement = NomDepartement->text();
        emit onApplyOK();
    }
}
