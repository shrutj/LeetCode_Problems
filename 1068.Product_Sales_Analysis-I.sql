-- # 1068. Problem Statement: Product Sales Analysis I
--                           Write a solution to report the product_name, year, and price for each sale_id in the Sales table.
                            
--                           Return the resulting table in any order.


SELECT t2.product_name, t1.year, t1.price FROM Sales AS t1 LEFT JOIN Product AS t2 ON t1.product_id = t2.product_id ORDER BY t2.product_name ASC;
