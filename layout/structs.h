/* layout/structs.h - guest memory layouts. Every field gets a static_assert, so a wrong offset is a
   compile error and not a wrong value at run time (the vault calls this the byte re-read rule: a
   field is only allowed here once its offset has been read in THIS build).

   Bytes nobody has read stay inside an `opaque_NN[NN]` array: user code physically cannot touch them,
   which is better than a named field nobody can verify yet. */
#ifndef COW_LAYOUT_STRUCTS_H
#define COW_LAYOUT_STRUCTS_H

#include "cow_types.h"

/* The object whose flag decides whether a counter gets incremented. Only +0x1c has been read
   (f_100083b0: `test byte ptr [eax + 0x1c], 1`), so the first 28 bytes stay opaque.
   cow/names.csv: kind=struct, confidence=guess. */
typedef struct CowCountedObj
{
    uint8_t opaque_00[0x1c]; /* never read by a conversion; do not name a field here without bytes */
    uint8_t flags_1c;        /* bit 0 (COW_COUNTED_FLAGS_ACTIVE) gates the increment */
} CowCountedObj;

COW_ASSERT_OFFSET(CowCountedObj, opaque_00, 0x00);
COW_ASSERT_OFFSET(CowCountedObj, flags_1c, 0x1c);
COW_ASSERT_SIZE(CowCountedObj, 0x1d);


/* written by tools/cow/mkaccessor.py: an object this build reads or writes one
   word of. Only +0x0c has been seen, so the bytes below it stay opaque. */
typedef struct CowWordObj_0c
{
    uint8_t opaque_00[0x0c]; /* never read by a conversion */
    uint32_t word_0c;
} CowWordObj_0c;

COW_ASSERT_OFFSET(CowWordObj_0c, word_0c, 0x0c);
COW_ASSERT_OFFSET(CowWordObj_0c, opaque_00, 0x00);
COW_ASSERT_SIZE(CowWordObj_0c, 0x10);

#endif /* COW_LAYOUT_STRUCTS_H */
