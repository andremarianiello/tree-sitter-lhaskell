(code_block
  (code_line
    (line_content) @injection.content
    (#set! injection.language "haskell")))

((comment_line) @injection.content
  (#set! injection.include-children)
  (#set! injection.combined)
  (#set! injection.language "markdown"))
