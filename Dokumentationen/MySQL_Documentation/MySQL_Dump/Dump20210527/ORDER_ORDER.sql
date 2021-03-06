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
-- Table structure for table `ORDER`
--

DROP TABLE IF EXISTS `ORDER`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `ORDER` (
  `O_ID` int NOT NULL AUTO_INCREMENT,
  `O_TIMESTAMP` varchar(45) NOT NULL DEFAULT 'CURRENT_TIMESTAMP',
  `O_PRIO` int NOT NULL DEFAULT '0',
  `O_WH_IDFROM` varchar(100) NOT NULL,
  `O_WH_IDTO` varchar(100) NOT NULL,
  `O_WH_COORDINATEFROM` varchar(100) DEFAULT NULL COMMENT 'Will be generated by UPDATE from the WarehouseCoordinate table',
  `O_WH_COORDINATETO` varchar(100) DEFAULT NULL,
  `O_FT_IDREQUIREMENT` int DEFAULT NULL COMMENT 'If any requirements of special fittings is needed, it needs to be displayed here',
  `O_OS_ID` int NOT NULL COMMENT 'Orderstate from table ORDERSTATE',
  PRIMARY KEY (`O_ID`),
  KEY `O_WH_IDFROM_idx` (`O_WH_IDFROM`),
  KEY `O_WH_IDTO_idx` (`O_WH_IDTO`),
  KEY `O_WH_COORDINATEFROM_idx` (`O_WH_COORDINATEFROM`),
  KEY `O_WH_COORDINATETO_idx` (`O_WH_COORDINATETO`),
  KEY `O_OS_ID_idx` (`O_OS_ID`),
  CONSTRAINT `O_OS_ID` FOREIGN KEY (`O_OS_ID`) REFERENCES `ORDERSTATE` (`OS_ID`),
  CONSTRAINT `O_WH_COORDINATEFROM` FOREIGN KEY (`O_WH_COORDINATEFROM`) REFERENCES `WAREHOUSECOORDINATE` (`WH_COORDINATE`),
  CONSTRAINT `O_WH_COORDINATETO` FOREIGN KEY (`O_WH_COORDINATETO`) REFERENCES `WAREHOUSECOORDINATE` (`WH_COORDINATE`),
  CONSTRAINT `O_WH_IDFROM` FOREIGN KEY (`O_WH_IDFROM`) REFERENCES `WAREHOUSECOORDINATE` (`WH_ID`),
  CONSTRAINT `O_WH_IDTO` FOREIGN KEY (`O_WH_IDTO`) REFERENCES `WAREHOUSECOORDINATE` (`WH_ID`)
) ENGINE=InnoDB AUTO_INCREMENT=3 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `ORDER`
--

LOCK TABLES `ORDER` WRITE;
/*!40000 ALTER TABLE `ORDER` DISABLE KEYS */;
INSERT INTO `ORDER` VALUES (2,'CURRENT_TIMESTAMP',0,'L1R1F1','L1R1F2',NULL,NULL,NULL,1);
/*!40000 ALTER TABLE `ORDER` ENABLE KEYS */;
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
