-- 코드를 입력하세요
SELECT concat('/home/grep/src/', board.board_id, '/', file_id, file_name, file_ext) as FILE_PATH
from USED_GOODS_BOARD as board
    inner join USED_GOODS_FILE as file
    on board.board_id = file.board_id
where views = (
    select max(views)
    from USED_GOODS_BOARD)
order by file_id desc