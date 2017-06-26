use localisation_innodb;

SELECT nom AS 'Nom Ville', cp AS 'Code Postal', nom_departement AS 'Departement', nom_region AS 'Region',nom_nouvelle_region AS 'Nouvelle Region', lat AS 'Latitude', lon AS 'Longitude'
FROM ville V
INNER JOIN department D 
ON V.id_department = D.id_departement
INNER JOIN region R
ON D.id_region = R.id_region
INNER JOIN nouvelle_region N
ON N.id = R.id_nouvelle_region;