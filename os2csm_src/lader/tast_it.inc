Title    automaticly generated keyboard remap table (italy it 142)

keyboard_title equ "italy it 142"

keytable_remapscan:
  db 0

keytable_Lower:
  db 00Ch,027h
  db 00Dh,'�'
  db 01Ah,'�'
  db 01Bh,'+'
  db 027h,'�'
  db 028h,'�'
  db 029h,'\'
  db 02Bh,'�'
  db 035h,'-'
  db 056h,'<'
  db 0

keytable_Upper:
  db 003h,'"'
  db 004h,'�'
  db 007h,'&'
  db 008h,'/'
  db 009h,'('
  db 00Ah,')'
  db 00Bh,'='
  db 00Ch,'?'
  db 00Dh,'^'
  db 01Ah,'�'
  db 01Bh,'*'
  db 027h,'�'
  db 028h,'�'
  db 029h,'|'
  db 02Bh,'�'
  db 033h,';'
  db 034h,':'
  db 035h,'_'
  db 056h,'>'
  db 0

keytable_AltGr:
  db 004h,'#'
  db 006h,'�'
  db 008h,'{'
  db 009h,'['
  db 00Ah,']'
  db 00Bh,'}'
  db 00Dh,'~'
  db 012h,'�'
  db 01Ah,'['
  db 01Bh,']'
  db 027h,'@'
  db 028h,'#'
  db 029h,'\'
  db 033h,'<'
  db 034h,'>'
  db 0

keytable_Alt:
  db 0

keytable_Ctrl:
  db 0

