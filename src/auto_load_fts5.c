#include "sqlite3.h"
#include <stddef.h>

// Forward declaration of the fts5_snowball extension initialization function
int sqlite3_ftsstemmer_init(sqlite3 *db, char **pzErrMsg, const sqlite3_api_routines *pApi);

// This function will be called by SQLite to automatically load the extension
void auto_load_fts5_snowball_extension(sqlite3 *db) {
  sqlite3_auto_extension((void (*)(void))sqlite3_ftsstemmer_init);
}