-- Last updated: 8/16/2026, 9:22:12 PM
# Write your MySQL query statement below
select email 
from Person 
group by email
having count(email) > 1