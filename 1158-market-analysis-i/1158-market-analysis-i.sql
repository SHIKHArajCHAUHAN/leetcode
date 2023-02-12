# Write your MySQL query statement below
SELECT u.user_id AS 'buyer_id', u.join_date,IFNULL(purchases,0) AS 'orders_in_2019'
FROM Users u
LEFT JOIN (
    SELECT buyer_id, COUNT(*) AS purchases
    FROM Orders 
    WHERE YEAR(order_date) = '2019'
    GROUP BY buyer_id
) AS o
ON u.user_id = o.buyer_id