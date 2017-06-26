-- MySQL Workbench Forward Engineering

SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0;
SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0;
SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='TRADITIONAL,ALLOW_INVALID_DATES';

-- -----------------------------------------------------
-- Schema mydb
-- -----------------------------------------------------
-- -----------------------------------------------------
-- Schema test
-- -----------------------------------------------------

-- -----------------------------------------------------
-- Schema test
-- -----------------------------------------------------
CREATE SCHEMA IF NOT EXISTS `test` DEFAULT CHARACTER SET latin1 ;
USE `test` ;

-- -----------------------------------------------------
-- Table `test`.`nouvelles_regions`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `test`.`nouvelles_regions` (
  `id_nouvelle_region` INT(11) NOT NULL AUTO_INCREMENT,
  `nom_nouvelle_region` VARCHAR(45) NULL DEFAULT NULL,
  PRIMARY KEY (`id_nouvelle_region`))
ENGINE = InnoDB
AUTO_INCREMENT = 109
DEFAULT CHARACTER SET = utf8;


-- -----------------------------------------------------
-- Table `test`.`region`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `test`.`region` (
  `id_region` INT(11) NOT NULL AUTO_INCREMENT,
  `nom_region` VARCHAR(250) NOT NULL,
  `id_nouvelle_region` INT(11) NULL,
  PRIMARY KEY (`id_region`),
  INDEX `fk_region_1_idx` (`id_nouvelle_region` ASC),
  CONSTRAINT `id_nouvelle_region`
    FOREIGN KEY (`id_nouvelle_region`)
    REFERENCES `test`.`nouvelles_regions` (`id_nouvelle_region`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB
AUTO_INCREMENT = 25
DEFAULT CHARACTER SET = utf8;


-- -----------------------------------------------------
-- Table `test`.`departement`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `test`.`departement` (
  `id_departement` INT(11) NOT NULL AUTO_INCREMENT,
  `id_region` INT(11) NOT NULL,
  `code` VARCHAR(3) NOT NULL,
  `nom_departement` VARCHAR(250) NOT NULL,
  PRIMARY KEY (`id_departement`),
  INDEX `fk_departement_1_idx` (`id_region` ASC),
  CONSTRAINT `id_region`
    FOREIGN KEY (`id_region`)
    REFERENCES `test`.`region` (`id_region`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB
AUTO_INCREMENT = 105
DEFAULT CHARACTER SET = utf8;


-- -----------------------------------------------------
-- Table `test`.`maps_ville`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `test`.`maps_ville` (
  `id_ville` INT(11) NOT NULL AUTO_INCREMENT,
  `id_departement` INT(11) NOT NULL,
  `nom` VARCHAR(250) NOT NULL,
  `cp` VARCHAR(6) NOT NULL,
  `lat` VARCHAR(12) NOT NULL,
  `lon` VARCHAR(12) NOT NULL,
  PRIMARY KEY (`id_ville`),
  INDEX `fk_maps_ville_1_idx` (`id_departement` ASC),
  CONSTRAINT `id_departement`
    FOREIGN KEY (`id_departement`)
    REFERENCES `test`.`departement` (`id_departement`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB
AUTO_INCREMENT = 34533
DEFAULT CHARACTER SET = utf8;


SET SQL_MODE=@OLD_SQL_MODE;
SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS;
SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS;
