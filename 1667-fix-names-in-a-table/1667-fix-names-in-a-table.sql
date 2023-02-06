# Write your MySQL query statement below
select user_id , concat(ucase(substr(users.name,1,1)),lcase(substr(users.name, 2))) as name from users
order by user_id asc