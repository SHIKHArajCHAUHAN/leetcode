# Write your MySQL query statement below
select name, COALESCE(SUM(distance),0) as travelled_distance FROM Users
LEFT JOIN Rides
ON Users.id=Rides.user_id GROUP BY user_id order by travelled_distance DESC , name ASC;