#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QInputDialog>
#include <QSqlQuery>

#define DRIVER "QMYSQL"
#define HOSTNAME "localhost"
#define USERNAME "root"
#define DBNAME "localisation_innodb"
#define PWD "1234512345"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)                  // constructeur fenêtre principale
{
    ui->setupUi(this);

    // Configuration connexion database
    db = QSqlDatabase::addDatabase(DRIVER);
    db.setDatabaseName(DBNAME);
    db.setHostName(HOSTNAME);
    db.setUserName(USERNAME);
    db.setPassword(PWD);

    if(!db.open()) QMessageBox::critical(this, "SQL ERROR", "Database Connection failed :(");

    // instanciation model + configuration vue
    model = new QSqlQueryModel;
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    insertion = new formInsert(this);
    update = new formupdate(this);


    //Affichage des données.
    display();
}

MainWindow::~MainWindow() // destructeur fenêtre principale
{
    delete ui;
}

void MainWindow::display() // affiche le contenu de la tableview
{
    model->setQuery(" SELECT ville.nom, ville.cp, departement.nom, region.nom, nouvelle_region.nom, ville.lat, ville.lon "
                    " FROM ville "
                    " INNER JOIN departement "
                    " ON ville.id_departement = departement.id "
                    " INNER JOIN region "
                    " ON departement.id_region = region.id "
                    " INNER JOIN nouvelle_region "
                    " ON nouvelle_region.id = region.id_nouvelle_region;");

    model->setHeaderData(0, Qt::Horizontal, "Nom Ville");
    model->setHeaderData(1, Qt::Horizontal, "Code Postal");
    model->setHeaderData(2, Qt::Horizontal, "Department");
    model->setHeaderData(3, Qt::Horizontal, "Region");
    model->setHeaderData(4, Qt::Horizontal, "Nouvelle Region");
    model->setHeaderData(5, Qt::Horizontal, "Latitude");
    model->setHeaderData(6, Qt::Horizontal, "Longitude");

    ui->tableView->setModel(model);

    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);

    ui->statusBar->showMessage("Connected with Database");

}

QString MainWindow::getLineNomVille() // renvoie le nom de la ville
{
    return ui->lineNomVille->text();
}

QString MainWindow::getLineCP() // renvoie le code postal
{
    return ui->lineCP->text();
}

QVariant MainWindow::activeSelection() // renvoie la cellule de la tableview dans un QVariant
{
    /* Selection possible des champs sur QTableView pour récupérer les infos du modèle */
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    QItemSelectionModel *selection = ui->tableView->selectionModel();
    QModelIndex indexElementSelectionne = selection->currentIndex();
    QVariant elementSelectionne = model->data(indexElementSelectionne, Qt::DisplayRole);

    //QMessageBox::information(this, "Sélection", "Vous avez sélectionné sélectionné est <font color=pink>"+elementSelectionne.toString()+"</font>."); // test ok
    return elementSelectionne;
}

void MainWindow::openInsertDialog()
{
    if(!insertion->exec())
        return;
}

void MainWindow::openUpdateDialog()
{
    if(!update->exec())
        return;
}

/********************************************************************
 *                              SLOTS                               *
 ********************************************************************/


void MainWindow::on_pushButton_Display_selection_clicked() // mise à jour du nom d'une ville
{

    QVariant elementSelectionne = activeSelection();
    bool ok = false;

    // passage paramètre par requête préparée.
    QString modif = QInputDialog::getText(this, tr("Nouveau nom"),tr("Veuillez entrer le nouveau nom de la ville : "), QLineEdit::Normal,"",&ok);
    if(ok == true && !modif.isEmpty())
    {
        QSqlQuery q;
        q.prepare("UPDATE ville SET ville.nom='"+ modif +"' WHERE ville.nom LIKE :nom;");
        q.bindValue(":nom",activeSelection().toString());
        q.exec();
        qDebug() << "Ville modifiée.";
    }
}

void MainWindow::on_Quit_clicked() // fermeture du programme
{
    QMessageBox::information(this, "Fermeture du programme", "Au revoir !");
}




/********************************************************************
 *                          ACTIONS DU MENU                         *
 ********************************************************************/

void MainWindow::on_Insert_clicked() // clic sur Insert (insertion d'une ville dans la bdd)
{
    openInsertDialog();
}

void MainWindow::on_Update_clicked() // clic sur Update (maj du nom d'une ville)
{
    //openUpdateDialog();
    QVariant elementSelectionne = activeSelection();
    bool ok = false;

    QString modif = QInputDialog::getText(this, tr("Nouveau nom"),tr("Veuillez entrer le nouveau nom de la ville : "), QLineEdit::Normal,"",&ok);

    if(ok == true && !modif.isEmpty())
    {
        QSqlQuery q;
        q.prepare("UPDATE ville SET ville.nom='"+ modif +"' WHERE ville.nom LIKE :nom;");
        q.bindValue(":nom",activeSelection().toString());
        q.exec();
        qDebug() << "Ville modifiée.";
    }
}

void MainWindow::on_lineNomVille_returnPressed() // recherche d'une ville par nom avec le QLineEdit LineNomVille
{
    model->setQuery(" SELECT ville.nom, ville.cp, departement.nom, region.nom, nouvelle_region.nom, ville.lat, ville.lon "
                    " FROM ville "
                    " INNER JOIN departement "
                    " ON ville.id_departement = departement.id "
                    " INNER JOIN region "
                    " ON departement.id_region = region.id "
                    " INNER JOIN nouvelle_region "
                    " ON nouvelle_region.id = region.id_nouvelle_region "
                    " WHERE ville.nom LIKE '" + getLineNomVille() + "%';");
    model->setHeaderData(0, Qt::Horizontal, "Nom Ville");
    model->setHeaderData(1, Qt::Horizontal, "Code Postal");
    model->setHeaderData(2, Qt::Horizontal, "Department");
    model->setHeaderData(3, Qt::Horizontal, "Region");
    model->setHeaderData(4, Qt::Horizontal, "Nouvelle Region");
    model->setHeaderData(5, Qt::Horizontal, "Latitude");
    model->setHeaderData(6, Qt::Horizontal, "Longitude");

    qDebug() << " SELECT ville.nom, ville.cp, departement.nom, region.nom, nouvelle_region.nom, ville.lat, ville.lon  FROM ville INNER JOIN departement ON ville.id_departement = departement.id INNER JOIN region ON departement.id_region = region.id INNER JOIN nouvelle_region ON nouvelle_region.id = region.id_nouvelle_region WHERE ville.nom LIKE '" + getLineNomVille() + "'";

    ui->tableView->setModel(model);

    ui->statusBar->showMessage("Connected with Database...");
}

void MainWindow::on_tableView_doubleClicked(const QModelIndex &index) // raccourcis pour la maj du nom d'une ville (double clic sur la cellule du nom de la ville)
{
    on_pushButton_Display_selection_clicked();
}

void MainWindow::on_lineCP_returnPressed() // recherche d'une ville ou des viles d'un département par code postal ou numéro de département
{
    model->setQuery(" SELECT ville.nom, ville.cp, departement.nom, region.nom, nouvelle_region.nom, ville.lat, ville.lon "
                    " FROM ville "
                    " INNER JOIN departement "
                    " ON ville.id_departement = departement.id "
                    " INNER JOIN region "
                    " ON departement.id_region = region.id "
                    " INNER JOIN nouvelle_region "
                    " ON nouvelle_region.id = region.id_nouvelle_region "
                    " WHERE ville.cp LIKE '" + getLineCP() + "%';");
    model->setHeaderData(0, Qt::Horizontal, "Nom Ville");
    model->setHeaderData(1, Qt::Horizontal, "Code Postal");
    model->setHeaderData(2, Qt::Horizontal, "Department");
    model->setHeaderData(3, Qt::Horizontal, "Region");
    model->setHeaderData(4, Qt::Horizontal, "Nouvelle Region");
    model->setHeaderData(5, Qt::Horizontal, "Latitude");
    model->setHeaderData(6, Qt::Horizontal, "Longitude");

    ui->tableView->setModel(model);

    ui->statusBar->showMessage("Connected with Database...");
}

void MainWindow::on_Reload_clicked() // clic sur reload (permet de réafficher la tableview complète)
{
    display();
}

void MainWindow::on_Delete_clicked() // clic sur Delete (supprime une ville)
{
    QVariant elementSelectionne = activeSelection();
    QSqlQuery q;

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Suppression de "+elementSelectionne.toString(), "voulez-vous vraiment rayer "+elementSelectionne.toString()+" de la carte?",
                                  QMessageBox::Yes|QMessageBox::No);

    if(reply==QMessageBox::Yes)
    {
        q.prepare("DELETE FROM ville WHERE ville.nom LIKE '"+elementSelectionne.toString()+"';");
        q.exec();
        qDebug() << activeSelection().toString()+" a été rayé de la carte";
        QMessageBox::information(this, "Suppression validée", elementSelectionne.toString()+" a été supprimé");
    }
    else if(reply==QMessageBox::No)
    {
        QMessageBox::information(this, "Suppression annulée", "Les habitants de "+elementSelectionne.toString()+" vous remercient!");
    }
}

void MainWindow::on_actionQuit_triggered() // barre de menu : quitter
{
    close();
}

void MainWindow::on_actionReload_triggered() // barre de menu : recharger
{
    display();
}

void MainWindow::on_actionUpdate_selection_triggered() // barre de menu : mettre à jour
{
    on_Update_clicked();
}

void MainWindow::on_actionInsert_city_triggered() // barre de menu : insérer nouvelle ville
{
    openInsertDialog();
}

void MainWindow::on_actionDelete_selection_triggered() // barre de menu : supprimer une ville
{
    on_Delete_clicked();
}

void MainWindow::on_actionAbout_triggered() // barre de menu : à propos
{

    QMessageBox::about(this, "Ville (free)", "This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details. \nYou should have received a copy of the GNU General Public License along with this program.  If not, see <http://www.gnu.org/licenses/>\n\nProgrammers: Adrien Godoy");
}

void MainWindow::on_actionConnection_informations_triggered() // barre de menu : informations de connection
{
    QString nomdb = QInputDialog::getText(this, "Base de données", "Entrez le nom de la base", QLineEdit::Normal, "");
    db.setDatabaseName(nomdb);
    QString host = QInputDialog::getText(this, "Nom de l'hôte", "Entrez le nom de l'hôte", QLineEdit::Normal, "");
    db.setHostName(host);
    QString user = QInputDialog::getText(this, "Utilisateur", "Entrez le nom de l'utilisateur", QLineEdit::Normal, "");
    db.setUserName(user);
    QString mdp = QInputDialog::getText(this, "Mot de passe", "Entrez le mot de passe", QLineEdit::Password, "");
    db.setPassword(mdp);

    if(!db.open())
    {
        QMessageBox::critical(this, "SQL ERROR", "Database Connection miserably failed :(");
        ui->statusBar->showMessage("Erreur : Connection à la base de donnée impossible.");
    }
}
