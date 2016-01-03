; external function symbols
extern _glClearColor@16
extern _glViewport@16
extern _glClear@4
extern _glBegin@4
extern _glEnd@0
extern _glColor3f@12
extern _glVertex3f@12

; get rid of name decoration
glClearColor        equ    _glClearColor@16
glViewport          equ    _glViewport@16
glClear             equ    _glClear@4
glBegin             equ    _glBegin@4
glEnd               equ    _glEnd@0
glColor3f           equ    _glColor3f@12
glVertex3f          equ    _glVertex3f@12

; constants (TODO maybe dump this?)
GL_COLOR_BUFFER_BIT         equ 0x4000
GL_TRIANGLES                equ 0x4