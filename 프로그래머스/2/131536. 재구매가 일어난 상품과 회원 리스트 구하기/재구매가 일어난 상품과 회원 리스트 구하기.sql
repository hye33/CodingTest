-- 코드를 입력하세요
SELECT user_id, product_id
from (select user_id, product_id, count(*) as c
     from online_sale
     group by user_id, product_id) as repurchase
where c >= 2
order by user_id asc, product_id desc