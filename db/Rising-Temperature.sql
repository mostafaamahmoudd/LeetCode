# Write your MySQL query statement below
select x.id
from Weather x join Weather y
on x.recordDate = date_add(y.recordDate, interval 1 day)
where x.temperature > y.temperature