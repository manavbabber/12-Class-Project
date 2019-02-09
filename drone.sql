-- MySQL dump 10.13  Distrib 8.0.15, for Linux (x86_64)
--
-- Host: localhost    Database: mainmenu
-- ------------------------------------------------------
-- Server version	8.0.15

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
 SET NAMES utf8mb4 ;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `avenue`
--

DROP TABLE IF EXISTS `avenue`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
 SET character_set_client = utf8mb4 ;
CREATE TABLE `avenue` (
  `itemid` int(11) NOT NULL,
  `Food Item` varchar(45) NOT NULL,
  `Category` varchar(45) NOT NULL,
  `Type` varchar(45) NOT NULL,
  `Price` int(50) NOT NULL,
  PRIMARY KEY (`itemid`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `avenue`
--

LOCK TABLES `avenue` WRITE;
/*!40000 ALTER TABLE `avenue` DISABLE KEYS */;
INSERT INTO `avenue` VALUES (111,'Cheese Ball','Main Course','Veg',320),(112,'Bread Toast','Snacks','Veg',210),(113,'Spring Rolls','Snacks','Veg',120),(114,'Cheese Burger','Snacks','Veg',90),(115,'Chicken Burger','Snacks','NonVeg',90),(116,'Jalfrazie Rice','Main Course','Veg',170),(117,'Corn capsicum ','Main Course','Veg',190),(118,'Mishti Doyi','Desserts','Veg',70),(119,'Jalebi ','Desserts','Veg',140),(120,'Coca Cola','Drinks','Veg',30),(121,'Mountain Dew','Drinks','Veg',40),(122,'Marindaa','Drinks','Veg',35);
/*!40000 ALTER TABLE `avenue` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `konjikiramen`
--

DROP TABLE IF EXISTS `konjikiramen`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
 SET character_set_client = utf8mb4 ;
CREATE TABLE `konjikiramen` (
  `itemid` int(50) NOT NULL,
  `Food Item` varchar(45) NOT NULL,
  `Category` varchar(45) NOT NULL,
  `Type` varchar(45) NOT NULL,
  `Price` varchar(45) NOT NULL,
  PRIMARY KEY (`itemid`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `konjikiramen`
--

LOCK TABLES `konjikiramen` WRITE;
/*!40000 ALTER TABLE `konjikiramen` DISABLE KEYS */;
INSERT INTO `konjikiramen` VALUES (222,'Khandvi','Snacks','Veg','40'),(223,'Fried Fish','Snacks','NonVeg','50'),(224,'Corn Pat','Snacks','Veg','65'),(225,'Patties','Snacks','NonVeg','12'),(226,'Minestrone','Main Course','Nonveg','185'),(227,'Hazelnut','Main Course','Veg','225'),(228,'Card Ravioli','Main Course','Veg','320'),(229,'Malpua','Desserts','Veg','120'),(230,'Dilkhushal','Desserts','Veg','90'),(231,'Apple Shake','Drinks','Veg','25'),(232,'Pepsi','Drinks','Veg','45'),(233,'Limca','Drinks','Veg','50');
/*!40000 ALTER TABLE `konjikiramen` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `tocadorcapillary`
--

DROP TABLE IF EXISTS `tocadorcapillary`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
 SET character_set_client = utf8mb4 ;
CREATE TABLE `tocadorcapillary` (
  `itemid` int(50) NOT NULL,
  `Food Item` varchar(45) NOT NULL,
  `Category` varchar(45) NOT NULL,
  `Type` varchar(45) NOT NULL,
  `Price` varchar(45) NOT NULL,
  PRIMARY KEY (`itemid`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tocadorcapillary`
--

LOCK TABLES `tocadorcapillary` WRITE;
/*!40000 ALTER TABLE `tocadorcapillary` DISABLE KEYS */;
INSERT INTO `tocadorcapillary` VALUES (333,'Donuts','Snacks','Veg','40'),(334,'French Fries','Snacks','NonVeg','50'),(335,'Granola','Snacks','Veg','65'),(336,'Pizza','Snacks','NonVeg','99'),(337,'Creamy pak','Main Course','Nonveg','185'),(338,'Tomato Tort','Main Course','Veg','225'),(339,'Kale Quinoa','Main Course','Veg','320'),(340,'Chocolate log','Desserts','Veg','120'),(341,'Peppermint ','Desserts','Veg','90'),(342,'Rabri Falooda','Drinks','Veg','25'),(343,'Banana Shake','Drinks','Veg','45'),(344,'Marinda','Drinks','Veg','50');
/*!40000 ALTER TABLE `tocadorcapillary` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2019-02-07 15:49:48
