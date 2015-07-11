/* ./combining_table.h */
/* Automatically generated at 2012-12-09T14:10:17.926645 */

#ifndef COMBINING_TABLE_H
#define COMBINING_TABLE_H 1

#include <krb5-types.h>

struct translation {
  uint32_t key;
  unsigned combining_class;	
};

extern const struct translation _wind_combining_table[];

extern const size_t _wind_combining_table_size;
#endif /* COMBINING_TABLE_H */
