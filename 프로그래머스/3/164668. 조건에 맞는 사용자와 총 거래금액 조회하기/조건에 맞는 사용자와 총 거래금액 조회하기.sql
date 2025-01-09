-- 코드를 입력하세요
SELECT user_id,
    nickname, 
    sum(price) as total_sales
from used_goods_board as board
    inner join used_goods_user as user
    on board.writer_id = user.user_id
where status = 'DONE'
group by user_id, nickname
having sum(price) >= 700000
order by total_sales asc