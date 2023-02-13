# Write your MySQL query statement below
#select product_id,product_name from Product where Product.product_id=Sales.product_id group by #product_name where Sales.sale_date is between '2019-01-01' and '2019-03-31'
SELECT product_id, product_name FROM Product 
WHERE product_id NOT IN (SELECT product_id FROM Sales WHERE sale_date > '2019-03-31' OR sale_date < '2019-01-01') AND product_id IN (SELECT product_id FROM Sales)