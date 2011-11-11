# wtf-sqlite

SQLite is awesome for reads.

For writes, not so much - unless your calling app controls concurrency.

But, it helps to know exactly wtf is happening internally in your sqlite build.

For such a "lite" library, sqlite has an wide combination of threading options.

Compile this bit of code against your sqlite3 headers and libs to figure out your build's threading config.


# usage

Designed to compare apple provides sqlite with homebrew installed sqlite.

Modify the make files with custom -I and -L paths to get details for other installs

Build this program like:

    make

Then get the apple/system sqlite details like:

    $ ./sqlite-sys
   
And get the brew installed sqlite details like:

    $ ./sqlite-brew