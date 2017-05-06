#ifndef _{PROJECT_NAME}_FILE_H_
#define _{PROJECT_NAME}_FILE_H_

/* Helpers */

#include "structures/file.h"

/* Usage functions */

t_file_list *   file_create   (void);
void            file_stack    (t_file_list * l, t_file_data p);
t_file_data     file_unstack  (t_file_list * l);
void            file_free     (t_file_list * l);

#endif //_{PROJECT_NAME}_FILE_H_
