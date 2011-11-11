

build:
	clang -o sqlite-sys wtf-sqlite3.c -lsqlite3
	clang -o sqlite-brew wtf-sqlite3.c -I/usr/local/Cellar/sqlite/3.7.7.1/include -L/usr/local/Cellar/sqlite/3.7.7.1/lib -lsqlite3