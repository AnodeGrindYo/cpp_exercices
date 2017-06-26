use test;
-- exercice 1
-- ----------
-- question 1
SELECT nom AS 'Nom du bled', cp AS 'Code postal', nom_departement AS 'Département' , nom_region AS 'Région' FROM maps_ville V INNER JOIN departement D ON V.id_departement = D.id_departement INNER JOIN region R ON D.id_region = R.id_region WHERE nom LIKE 'TOULOUSE';
-- question 2
SELECT nom AS 'Nom du bled', cp AS 'Code postal', nom_departement AS 'Département', nom_region AS 'Région' FROM maps_ville V INNER JOIN departement D ON V.id_departement = D.id_departement INNER JOIN region R ON D.id_region = R.id_region WHERE nom LIKE 'Tou%' AND nom_departement LIKE 'GARONNE (HAUTE)';
-- question 3
SELECT COUNT(*) FROM departement D INNER JOIN region R ON D.id_region = R.id_region WHERE nom_region LIKE 'Centre';
-- question 4
SELECT nom AS 'Nom du bled', nom_region AS 'Région' FROM maps_ville V INNER JOIN departement D ON V.id_departement=D.id_departement INNER JOIN region R ON D.id_region=R.id_region WHERE nom LIKE '__UR%';
-- question 5
SELECT nom AS 'Nom du patelin', nom_region AS 'Région' FROM maps_ville V INNER JOIN departement D ON V.id_departement = D.id_departement INNER JOIN region R ON D.id_region = R.id_region WHERE nom LIKE '__UR%' AND nom_departement LIKE 'Indre et Loire';
-- question 6
SELECT nom AS 'Nom du bled', nom_region AS 'Région' FROM maps_ville V INNER JOIN departement D ON V.id_departement = D.id_departement INNER JOIN region R ON D.id_region = R.id_region WHERE lat LIKE '45.00%';
-- question 7
INSERT INTO maps_ville (id_departement, nom, cp, lat, lon) VALUE (24, 'Pont-de-l\'Isère', '26600', '45.0020', '45.203');
-- ----------
-- exercice 2
-- on crée et paramètre une nouvelle table dans test
CREATE TABLE IF NOT EXISTS test.nouvelles_regions ( id_nouvelle_region INT NOT NULL AUTO_INCREMENT, nom_nouvelle_region VARCHAR(45) NULL, PRIMARY KEY (id_nouvelle_region)) ENGINE = InnoDB DEFAULT CHARACTER SET = utf8 COLLATE = utf8_general_ci; 

-- On y ajoute le nom des nouvelles régions
INSERT INTO nouvelles_regions (nom_nouvelle_region) 
VALUES ('Auvergne-Rhône-Alpes'), 
('Bourgogne-Franche-Comté'), 
('Bretagne'), 
('Centre-Val de Loire'), 
('Corse'), 
('Grand Est'), 
('Hauts-de-France'), 
('Île-de-France'), 
('Normandie'), 
('Nouvelle-Aquitaine'), 
('Occitanie'), 
('Pays de la Loire'), 
('Provence-Alpes-Côte d\'Azur'), 
('Guadeloupe'), 
('Martinique'), 
('Guyane'), 
('La Réunion'), 
('Mayotte');

UPDATE nouvelles_region
SET id_nouvelle_region = 1
WHERE id_nouvelle_region = 109;

UPDATE nouvelles_region
SET id_nouvelle_region = 2
WHERE id_nouvelle_region = 110;

UPDATE nouvelles_region
SET id_nouvelle_region = 3
WHERE id_nouvelle_region = 111;

UPDATE nouvelles_region
SET id_nouvelle_region = 4
WHERE id_nouvelle_region = 112;

UPDATE nouvelles_region
SET id_nouvelle_region = 5
WHERE id_nouvelle_region = 113;

UPDATE nouvelles_region
SET id_nouvelle_region = 6
WHERE id_nouvelle_region = 114;

UPDATE nouvelles_region
SET id_nouvelle_region = 7
WHERE id_nouvelle_region = 115;

UPDATE nouvelles_region
SET id_nouvelle_region = 8
WHERE id_nouvelle_region = 116;

UPDATE nouvelles_region
SET id_nouvelle_region = 9
WHERE id_nouvelle_region = 117;

UPDATE nouvelles_region
SET id_nouvelle_region = 10
WHERE id_nouvelle_region = 118;

UPDATE nouvelles_region
SET id_nouvelle_region = 11
WHERE id_nouvelle_region = 119;

UPDATE nouvelles_region
SET id_nouvelle_region = 12
WHERE id_nouvelle_region = 120;

UPDATE nouvelles_region
SET id_nouvelle_region = 13
WHERE id_nouvelle_region = 121;

UPDATE nouvelles_region
SET id_nouvelle_region = 14
WHERE id_nouvelle_region = 122;

UPDATE nouvelles_region
SET nom_nouvelle_region = 'DOM-TOM'
WHERE id_nouvelle_region = 14;

-- on actualise region avec les nouvelles régions
UPDATE region 
SET id_nouvelle_region = 1 
WHERE id_region = 2 
OR id_region = 22; 

/*UPDATE region 
SET id_nouvelle_region = 2 
WHERE id_region = 3 
OR id_region = 9; 

UPDATE region 
SET id_nouvelle_region = 3 
WHERE id_region = 4; 

UPDATE region 
SET id_nouvelle_region = 4 
WHERE id_region = 5; 

UPDATE region 
SET id_nouvelle_region = 5 
WHERE id_region = 7; 

UPDATE region 
SET id_nouvelle_region = 6 
WHERE id_region = 6 
OR id_region = 13 
OR id_region = 23; 

UPDATE region 
SET id_nouvelle_region = 7 
WHERE id_region = 15 
OR id_region = 19; 

UPDATE region 
SET id_nouvelles_regions = 8 
WHERE id_region = 10; 

UPDATE region 
SET id_nouvelle_region = 9 
WHERE id_region = 17 
OR id_region = 24; 

UPDATE region 
SET id_nouvelle_region = 10 
WHERE id_region = 1 
OR id_region = 12 
OR id_region = 20; 

UPDATE region 
SET id_nouvelle_region = 11 
WHERE id_region = 14 
OR id_region = 11; 

UPDATE region 
SET id_nouvelle_region = 12 
WHERE id_region = 18; 

UPDATE region 
SET id_nouvelle_region = 13 
WHERE id_region = 21; 

UPDATE region 
SET id_nouvelle_region = 14 
WHERE id_region = 8;

SET AUTOCOMMIT = 0;
START TRANSACTION;
UPDATE region
SET id_nouvelle_region = 13
WHERE id_region = 8;*/
