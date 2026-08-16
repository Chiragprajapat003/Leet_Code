-- Last updated: 8/16/2026, 9:19:15 PM
# Write your MySQL query statement below
select name from Customer 
where referee_id != 2 
OR referee_id IS NULL