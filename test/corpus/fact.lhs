===================
Basic
===================

In Bird-style you have to leave a blank before the code.

> fact :: Integer -> Integer
> fact 0 = 1
> fact n = n * fact (n-1)

And you have to leave a blank line after the code as well.

---

(source_file
  (comment_block
    (comment_line
      (line_content))
    (comment_line
      (line_content))
    (comment_line
      (line_content)))
  (code_block
    (code_line
      (bird_track)
      (line_content))
    (code_line
      (bird_track)
      (line_content))
    (code_line
      (bird_track)
      (line_content)))
  (comment_block
    (comment_line
      (line_content))
    (comment_line
      (line_content))))
