-- MySQL dump 10.13  Distrib 8.0.25, for Linux (x86_64)
--
-- Host: localhost    Database: ORDER
-- ------------------------------------------------------
-- Server version	8.0.25-0ubuntu0.20.04.1

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `ORDERHISTORY`
--

DROP TABLE IF EXISTS `ORDERHISTORY`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `ORDERHISTORY` (
  `OH_O_ID` int NOT NULL,
  `OH_A_ID` int NOT NULL,
  `OH_STARTTIME` datetime NOT NULL,
  `OH_ENDTIME` datetime DEFAULT NULL,
  `OH_OS_ID` int NOT NULL COMMENT 'State of the order. Ideally only one process per order.',
  PRIMARY KEY (`OH_O_ID`,`OH_A_ID`,`OH_STARTTIME`),
  KEY `OH_A_ID_idx` (`OH_A_ID`),
  KEY `OH_OS_ID_idx` (`OH_OS_ID`),
  CONSTRAINT `OH_A_ID` FOREIGN KEY (`OH_A_ID`) REFERENCES `AGV`.`AGV` (`A_ID`),
  CONSTRAINT `OH_O_ID` FOREIGN KEY (`OH_O_ID`) REFERENCES `ORDER` (`O_ID`),
  CONSTRAINT `OH_OS_ID` FOREIGN KEY (`OH_OS_ID`) REFERENCES `ORDERSTATE` (`OS_ID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `ORDERHISTORY`
--

LOCK TABLES `ORDERHISTORY` WRITE;
/*!40000 ALTER TABLE `ORDERHISTORY` DISABLE KEYS */;
/*!40000 ALTER TABLE `ORDERHISTORY` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2021-05-27  2:11:03
