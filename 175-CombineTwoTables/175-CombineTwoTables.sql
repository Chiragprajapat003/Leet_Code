-- Last updated: 8/16/2026, 9:22:15 PM
# Write your MySQL query statement below
select p.firstName , p.lastName , a.city  , a.state from Person p
left join Address a
on  p.personId = a.personId