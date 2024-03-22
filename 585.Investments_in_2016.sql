-- # 585. Problem Statement: Investments in 2016
--                           Write a solution to report the sum of all total investment values in 2016 tiv_2016, for all policyholders who:
                          
--                            * have the same tiv_2015 value as one or more other policyholders, and
--                            * are not located in the same city as any other policyholder (i.e., the (lat, lon) attribute pairs must be unique).
--                           Round tiv_2016 to two decimal places.

SELECT
ROUND(SUM(tiv_2016),2) AS tiv_2016 
FROM Insurance 
WHERE 
tiv_2015 IN (SELECT tiv_2015 FROM Insurance GROUP BY tiv_2015 HAVING COUNT(tiv_2015) > 1) 
AND 
CONCAT(LAT, LON) NOT IN (SELECT CONCAT(LAT, LON) FROM Insurance GROUP BY CONCAT(LAT, LON) HAVING COUNT(CONCAT(LAT, LON)) > 1);
