; external function symbols
extern _glClearColor@16
extern _glViewport@16
extern _glClear@4

; get rid of name decoration
glClearColor        equ    _glClearColor@16
glViewport          equ    _glViewport@16
glClear             equ    _glClear@4

; constants (TODO maybe dump this?)
GL_COLOR_BUFFER_BIT         equ 0x00004000