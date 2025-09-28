# Write your MySQL query statement below
delete x
from Person x join Person y
where y.email = x.email and x.id > y.id