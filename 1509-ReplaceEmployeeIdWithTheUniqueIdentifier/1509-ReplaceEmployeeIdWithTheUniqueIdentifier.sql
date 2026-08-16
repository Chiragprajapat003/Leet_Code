-- Last updated: 8/16/2026, 9:16:33 PM
# Write your MySQL query statement below
select u.unique_id , e.name from Employees e
left join EmployeeUNI u
on u.id = e.id