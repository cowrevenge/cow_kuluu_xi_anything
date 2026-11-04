/* src/util/cow_accessors.c - the shared bodies of the object accessors that
   tools/cow/mkaccessor.py found in FFXiMain.dll. Each one is one instruction of the
   original, expressed as C: it reads or writes exactly the field named in layout/structs.h.
   cowdiff proves every entry that calls one against its generated original.
*/
#include "cow.h"

/* `mov eax, [ecx+0x0c]` then `ret`: read the field. */
uint32_t cow_read_word_0c(const CowWordObj_0c* o)
{
    return o->word_0c;
}

