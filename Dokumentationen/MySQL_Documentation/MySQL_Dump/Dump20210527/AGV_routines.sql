-- MySQL dump 10.13  Distrib 8.0.25, for Linux (x86_64)
--
-- Host: localhost    Database: AGV
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
-- Temporary view structure for view `V_FITTINGMAIN`
--

DROP TABLE IF EXISTS `V_FITTINGMAIN`;
/*!50001 DROP VIEW IF EXISTS `V_FITTINGMAIN`*/;
SET @saved_cs_client     = @@character_set_client;
/*!50503 SET character_set_client = utf8mb4 */;
/*!50001 CREATE VIEW `V_FITTINGMAIN` AS SELECT 
 1 AS `F_ID`,
 1 AS `F_FT_ID`,
 1 AS `F_DESC`,
 1 AS `F_ACTIVE`,
 1 AS `FT_ID`,
 1 AS `FT_DESC`,
 1 AS `FT_ACTIVE`*/;
SET character_set_client = @saved_cs_client;

--
-- Temporary view structure for view `V_AGVINFO`
--

DROP TABLE IF EXISTS `V_AGVINFO`;
/*!50001 DROP VIEW IF EXISTS `V_AGVINFO`*/;
SET @saved_cs_client     = @@character_set_client;
/*!50503 SET character_set_client = utf8mb4 */;
/*!50001 CREATE VIEW `V_AGVINFO` AS SELECT 
 1 AS `AF_A_ID`,
 1 AS `AF_F_ID`,
 1 AS `AF_DATEFROM`,
 1 AS `AF_DATETO`,
 1 AS `A_ID`,
 1 AS `A_AT_ID`,
 1 AS `A_SOFTWAREVERSION`,
 1 AS `A_DEVICEVERSION`,
 1 AS `A_PRODKEY`,
 1 AS `A_MANUFACTURER`,
 1 AS `A_DESC`,
 1 AS `A_WEIGHT`,
 1 AS `A_LENGHT`,
 1 AS `A_WIDTH`,
 1 AS `A_HEIGHT`,
 1 AS `A_BT_ID`,
 1 AS `A_ACTIVE`,
 1 AS `AT_DESC`,
 1 AS `BT_DESC`,
 1 AS `BT_AVGCHARGING`,
 1 AS `BT_AVGDURATION`,
 1 AS `F_DESC`,
 1 AS `FT_ID`,
 1 AS `FT_DESC`*/;
SET character_set_client = @saved_cs_client;

--
-- Temporary view structure for view `V_AGVMAIN`
--

DROP TABLE IF EXISTS `V_AGVMAIN`;
/*!50001 DROP VIEW IF EXISTS `V_AGVMAIN`*/;
SET @saved_cs_client     = @@character_set_client;
/*!50503 SET character_set_client = utf8mb4 */;
/*!50001 CREATE VIEW `V_AGVMAIN` AS SELECT 
 1 AS `A_ID`,
 1 AS `A_AT_ID`,
 1 AS `A_SOFTWAREVERSION`,
 1 AS `A_DEVICEVERSION`,
 1 AS `A_PRODKEY`,
 1 AS `A_MANUFACTURER`,
 1 AS `A_DESC`,
 1 AS `A_WEIGHT`,
 1 AS `A_LENGHT`,
 1 AS `A_WIDTH`,
 1 AS `A_HEIGHT`,
 1 AS `A_BT_ID`,
 1 AS `A_ACTIVE`,
 1 AS `AT_DESC`,
 1 AS `BT_DESC`,
 1 AS `BT_AVGCHARGING`,
 1 AS `BT_AVGDURATION`*/;
SET character_set_client = @saved_cs_client;

--
-- Final view structure for view `V_FITTINGMAIN`
--

/*!50001 DROP VIEW IF EXISTS `V_FITTINGMAIN`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8mb4 */;
/*!50001 SET character_set_results     = utf8mb4 */;
/*!50001 SET collation_connection      = utf8mb4_0900_ai_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`root`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `V_FITTINGMAIN` AS select `FITTING`.`F_ID` AS `F_ID`,`FITTING`.`F_FT_ID` AS `F_FT_ID`,`FITTING`.`F_DESC` AS `F_DESC`,`FITTING`.`F_ACTIVE` AS `F_ACTIVE`,`FITTINGTYPE`.`FT_ID` AS `FT_ID`,`FITTINGTYPE`.`FT_DESC` AS `FT_DESC`,`FITTINGTYPE`.`FT_ACTIVE` AS `FT_ACTIVE` from (`FITTING` join `FITTINGTYPE`) where (`FITTING`.`F_FT_ID` = `FITTINGTYPE`.`FT_ID`) */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `V_AGVINFO`
--

/*!50001 DROP VIEW IF EXISTS `V_AGVINFO`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8mb4 */;
/*!50001 SET character_set_results     = utf8mb4 */;
/*!50001 SET collation_connection      = utf8mb4_0900_ai_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`root`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `V_AGVINFO` AS select `AGVFITTING`.`AF_A_ID` AS `AF_A_ID`,`AGVFITTING`.`AF_F_ID` AS `AF_F_ID`,`AGVFITTING`.`AF_DATEFROM` AS `AF_DATEFROM`,`AGVFITTING`.`AF_DATETO` AS `AF_DATETO`,`V_AGVMAIN`.`A_ID` AS `A_ID`,`V_AGVMAIN`.`A_AT_ID` AS `A_AT_ID`,`V_AGVMAIN`.`A_SOFTWAREVERSION` AS `A_SOFTWAREVERSION`,`V_AGVMAIN`.`A_DEVICEVERSION` AS `A_DEVICEVERSION`,`V_AGVMAIN`.`A_PRODKEY` AS `A_PRODKEY`,`V_AGVMAIN`.`A_MANUFACTURER` AS `A_MANUFACTURER`,`V_AGVMAIN`.`A_DESC` AS `A_DESC`,`V_AGVMAIN`.`A_WEIGHT` AS `A_WEIGHT`,`V_AGVMAIN`.`A_LENGHT` AS `A_LENGHT`,`V_AGVMAIN`.`A_WIDTH` AS `A_WIDTH`,`V_AGVMAIN`.`A_HEIGHT` AS `A_HEIGHT`,`V_AGVMAIN`.`A_BT_ID` AS `A_BT_ID`,`V_AGVMAIN`.`A_ACTIVE` AS `A_ACTIVE`,`V_AGVMAIN`.`AT_DESC` AS `AT_DESC`,`V_AGVMAIN`.`BT_DESC` AS `BT_DESC`,`V_AGVMAIN`.`BT_AVGCHARGING` AS `BT_AVGCHARGING`,`V_AGVMAIN`.`BT_AVGDURATION` AS `BT_AVGDURATION`,`V_FITTINGMAIN`.`F_DESC` AS `F_DESC`,`V_FITTINGMAIN`.`FT_ID` AS `FT_ID`,`V_FITTINGMAIN`.`FT_DESC` AS `FT_DESC` from ((`AGVFITTING` left join `V_AGVMAIN` on((`AGVFITTING`.`AF_A_ID` = `V_AGVMAIN`.`A_ID`))) left join `V_FITTINGMAIN` on((`AGVFITTING`.`AF_F_ID` = `V_FITTINGMAIN`.`F_ID`))) */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;

--
-- Final view structure for view `V_AGVMAIN`
--

/*!50001 DROP VIEW IF EXISTS `V_AGVMAIN`*/;
/*!50001 SET @saved_cs_client          = @@character_set_client */;
/*!50001 SET @saved_cs_results         = @@character_set_results */;
/*!50001 SET @saved_col_connection     = @@collation_connection */;
/*!50001 SET character_set_client      = utf8mb4 */;
/*!50001 SET character_set_results     = utf8mb4 */;
/*!50001 SET collation_connection      = utf8mb4_0900_ai_ci */;
/*!50001 CREATE ALGORITHM=UNDEFINED */
/*!50013 DEFINER=`root`@`localhost` SQL SECURITY DEFINER */
/*!50001 VIEW `V_AGVMAIN` AS select `AGV`.`A_ID` AS `A_ID`,`AGV`.`A_AT_ID` AS `A_AT_ID`,`AGV`.`A_SOFTWAREVERSION` AS `A_SOFTWAREVERSION`,`AGV`.`A_DEVICEVERSION` AS `A_DEVICEVERSION`,`AGV`.`A_PRODKEY` AS `A_PRODKEY`,`AGV`.`A_MANUFACTURER` AS `A_MANUFACTURER`,`AGV`.`A_DESC` AS `A_DESC`,`AGV`.`A_WEIGHT` AS `A_WEIGHT`,`AGV`.`A_LENGHT` AS `A_LENGHT`,`AGV`.`A_WIDTH` AS `A_WIDTH`,`AGV`.`A_HEIGHT` AS `A_HEIGHT`,`AGV`.`A_BT_ID` AS `A_BT_ID`,`AGV`.`A_ACTIVE` AS `A_ACTIVE`,`AGVTYPE`.`AT_DESC` AS `AT_DESC`,`BATTERYTYPE`.`BT_DESC` AS `BT_DESC`,`BATTERYTYPE`.`BT_AVGCHARGING` AS `BT_AVGCHARGING`,`BATTERYTYPE`.`BT_AVGDURATION` AS `BT_AVGDURATION` from ((`AGV` join `AGVTYPE`) join `BATTERYTYPE`) where ((`AGV`.`A_AT_ID` = `AGVTYPE`.`AT_ID`) and (`AGV`.`A_BT_ID` = `BATTERYTYPE`.`BT_ID`)) */;
/*!50001 SET character_set_client      = @saved_cs_client */;
/*!50001 SET character_set_results     = @saved_cs_results */;
/*!50001 SET collation_connection      = @saved_col_connection */;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2021-05-27  2:11:02
