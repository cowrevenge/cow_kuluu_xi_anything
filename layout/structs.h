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


/* written by tools/cow/mkaccessor.py: `lea eax, [ecx+0x34]` hands back the address
   of that byte of the object, so the offset is a named constant, not a number in user
   code. */
#define COW_LEA_34 0x34u


/* written by tools/cow/mkaccessor.py: an object this build reads or writes one
   word of. Only +0x00 has been seen, so the bytes below it stay opaque. */
typedef struct CowWordObj_00
{
    uint32_t word_00;
} CowWordObj_00;

COW_ASSERT_OFFSET(CowWordObj_00, word_00, 0x00);
COW_ASSERT_SIZE(CowWordObj_00, 0x04);


/* written by tools/cow/mkaccessor.py: an object this build reads or writes one
   word of. Only +0x30 has been seen, so the bytes below it stay opaque. */
typedef struct CowWordObj_30
{
    uint8_t opaque_00[0x30]; /* never read by a conversion */
    uint32_t word_30;
} CowWordObj_30;

COW_ASSERT_OFFSET(CowWordObj_30, word_30, 0x30);
COW_ASSERT_OFFSET(CowWordObj_30, opaque_00, 0x00);
COW_ASSERT_SIZE(CowWordObj_30, 0x34);


/* written by tools/cow/mkaccessor.py: `lea eax, [ecx+0x20]` hands back the address
   of that byte of the object, so the offset is a named constant, not a number in user
   code. */
#define COW_LEA_20 0x20u


/* written by tools/cow/mkaccessor.py: `lea eax, [ecx+0x44]` hands back the address
   of that byte of the object, so the offset is a named constant, not a number in user
   code. */
#define COW_LEA_44 0x44u


/* written by tools/cow/mkaccessor.py: `lea eax, [ecx+0x08]` hands back the address
   of that byte of the object, so the offset is a named constant, not a number in user
   code. */
#define COW_LEA_08 0x08u


/* written by tools/cow/mkaccessor.py: `lea eax, [ecx+0x38]` hands back the address
   of that byte of the object, so the offset is a named constant, not a number in user
   code. */
#define COW_LEA_38 0x38u


/* written by tools/cow/mkaccessor.py: `lea eax, [ecx+0x02]` hands back the address
   of that byte of the object, so the offset is a named constant, not a number in user
   code. */
#define COW_LEA_02 0x02u


/* written by tools/cow/mkaccessor.py: `lea eax, [ecx+0x01]` hands back the address
   of that byte of the object, so the offset is a named constant, not a number in user
   code. */
#define COW_LEA_01 0x01u


/* written by tools/cow/mkaccessor.py: `lea eax, [ecx+0x03]` hands back the address
   of that byte of the object, so the offset is a named constant, not a number in user
   code. */
#define COW_LEA_03 0x03u


/* written by tools/cow/mkaccessor.py: an object this build reads or writes one
   word of. Only +0x34 has been seen, so the bytes below it stay opaque. */
typedef struct CowWordObj_34
{
    uint8_t opaque_00[0x34]; /* never read by a conversion */
    uint32_t word_34;
} CowWordObj_34;

COW_ASSERT_OFFSET(CowWordObj_34, word_34, 0x34);
COW_ASSERT_OFFSET(CowWordObj_34, opaque_00, 0x00);
COW_ASSERT_SIZE(CowWordObj_34, 0x38);


/* written by tools/cow/mkaccessor.py: `lea eax, [ecx+0x30]` hands back the address
   of that byte of the object, so the offset is a named constant, not a number in user
   code. */
#define COW_LEA_30 0x30u


/* written by tools/cow/mkaccessor.py: `lea eax, [ecx+0x78]` hands back the address
   of that byte of the object, so the offset is a named constant, not a number in user
   code. */
#define COW_LEA_78 0x78u


/* written by tools/cow/mkaccessor.py: an object this build reads or writes one
   word of. Only +0x2c has been seen, so the bytes below it stay opaque. */
typedef struct CowWordObj_2c
{
    uint8_t opaque_00[0x2c]; /* never read by a conversion */
    uint32_t word_2c;
} CowWordObj_2c;

COW_ASSERT_OFFSET(CowWordObj_2c, word_2c, 0x2c);
COW_ASSERT_OFFSET(CowWordObj_2c, opaque_00, 0x00);
COW_ASSERT_SIZE(CowWordObj_2c, 0x30);


/* written by tools/cow/mkaccessor.py: an object this build reads or writes one
   word of. Only +0x70 has been seen, so the bytes below it stay opaque. */
typedef struct CowWordObj_70
{
    uint8_t opaque_00[0x70]; /* never read by a conversion */
    uint32_t word_70;
} CowWordObj_70;

COW_ASSERT_OFFSET(CowWordObj_70, word_70, 0x70);
COW_ASSERT_OFFSET(CowWordObj_70, opaque_00, 0x00);
COW_ASSERT_SIZE(CowWordObj_70, 0x74);


/* written by tools/cow/mkaccessor.py: an object this build reads or writes one
   word of. Only +0x68 has been seen, so the bytes below it stay opaque. */
typedef struct CowWordObj_68
{
    uint8_t opaque_00[0x68]; /* never read by a conversion */
    uint32_t word_68;
} CowWordObj_68;

COW_ASSERT_OFFSET(CowWordObj_68, word_68, 0x68);
COW_ASSERT_OFFSET(CowWordObj_68, opaque_00, 0x00);
COW_ASSERT_SIZE(CowWordObj_68, 0x6c);


/* written by tools/cow/mkaccessor.py: an object this build reads or writes one
   word of. Only +0x74 has been seen, so the bytes below it stay opaque. */
typedef struct CowWordObj_74
{
    uint8_t opaque_00[0x74]; /* never read by a conversion */
    uint32_t word_74;
} CowWordObj_74;

COW_ASSERT_OFFSET(CowWordObj_74, word_74, 0x74);
COW_ASSERT_OFFSET(CowWordObj_74, opaque_00, 0x00);
COW_ASSERT_SIZE(CowWordObj_74, 0x78);


/* written by tools/cow/mkaccessor.py: an object this build reads or writes one
   word of. Only +0x38 has been seen, so the bytes below it stay opaque. */
typedef struct CowWordObj_38
{
    uint8_t opaque_00[0x38]; /* never read by a conversion */
    uint32_t word_38;
} CowWordObj_38;

COW_ASSERT_OFFSET(CowWordObj_38, word_38, 0x38);
COW_ASSERT_OFFSET(CowWordObj_38, opaque_00, 0x00);
COW_ASSERT_SIZE(CowWordObj_38, 0x3c);


/* written by tools/cow/mkaccessor.py: `lea eax, [ecx+0x10]` hands back the address
   of that byte of the object, so the offset is a named constant, not a number in user
   code. */
#define COW_LEA_10 0x10u


/* written by tools/cow/mkaccessor.py: an object this build reads or writes one
   word of. Only +0x18 has been seen, so the bytes below it stay opaque. */
typedef struct CowWordObj_18
{
    uint8_t opaque_00[0x18]; /* never read by a conversion */
    uint32_t word_18;
} CowWordObj_18;

COW_ASSERT_OFFSET(CowWordObj_18, word_18, 0x18);
COW_ASSERT_OFFSET(CowWordObj_18, opaque_00, 0x00);
COW_ASSERT_SIZE(CowWordObj_18, 0x1c);


/* written by tools/cow/mkaccessor.py: `lea eax, [ecx+0x04]` hands back the address
   of that byte of the object, so the offset is a named constant, not a number in user
   code. */
#define COW_LEA_04 0x04u


/* written by tools/cow/mkaccessor.py: `lea eax, [ecx+0x05]` hands back the address
   of that byte of the object, so the offset is a named constant, not a number in user
   code. */
#define COW_LEA_05 0x05u


/* written by tools/cow/mkaccessor.py: an object this build reads or writes one
   word of. Only +0x40 has been seen, so the bytes below it stay opaque. */
typedef struct CowWordObj_40
{
    uint8_t opaque_00[0x40]; /* never read by a conversion */
    uint32_t word_40;
} CowWordObj_40;

COW_ASSERT_OFFSET(CowWordObj_40, word_40, 0x40);
COW_ASSERT_OFFSET(CowWordObj_40, opaque_00, 0x00);
COW_ASSERT_SIZE(CowWordObj_40, 0x44);


/* written by tools/cow/mkaccessor.py: an object this build reads or writes one
   word of. Only +0x50 has been seen, so the bytes below it stay opaque. */
typedef struct CowWordObj_50
{
    uint8_t opaque_00[0x50]; /* never read by a conversion */
    uint32_t word_50;
} CowWordObj_50;

COW_ASSERT_OFFSET(CowWordObj_50, word_50, 0x50);
COW_ASSERT_OFFSET(CowWordObj_50, opaque_00, 0x00);
COW_ASSERT_SIZE(CowWordObj_50, 0x54);


/* written by tools/cow/mkaccessor.py: an object this build reads or writes one
   word of. Only +0x54 has been seen, so the bytes below it stay opaque. */
typedef struct CowWordObj_54
{
    uint8_t opaque_00[0x54]; /* never read by a conversion */
    uint32_t word_54;
} CowWordObj_54;

COW_ASSERT_OFFSET(CowWordObj_54, word_54, 0x54);
COW_ASSERT_OFFSET(CowWordObj_54, opaque_00, 0x00);
COW_ASSERT_SIZE(CowWordObj_54, 0x58);


/* written by tools/cow/mkaccessor.py: an object this build reads or writes one
   word of. Only +0x08 has been seen, so the bytes below it stay opaque. */
typedef struct CowWordObj_08
{
    uint8_t opaque_00[0x08]; /* never read by a conversion */
    uint32_t word_08;
} CowWordObj_08;

COW_ASSERT_OFFSET(CowWordObj_08, word_08, 0x08);
COW_ASSERT_OFFSET(CowWordObj_08, opaque_00, 0x00);
COW_ASSERT_SIZE(CowWordObj_08, 0x0c);


/* written by tools/cow/mkaccessor.py: an object this build reads or writes one
   word of. Only +0x04 has been seen, so the bytes below it stay opaque. */
typedef struct CowWordObj_04
{
    uint8_t opaque_00[0x04]; /* never read by a conversion */
    uint32_t word_04;
} CowWordObj_04;

COW_ASSERT_OFFSET(CowWordObj_04, word_04, 0x04);
COW_ASSERT_OFFSET(CowWordObj_04, opaque_00, 0x00);
COW_ASSERT_SIZE(CowWordObj_04, 0x08);


/* written by tools/cow/mkaccessor.py: an object this build reads or writes one
   word of. Only +0x20 has been seen, so the bytes below it stay opaque. */
typedef struct CowWordObj_20
{
    uint8_t opaque_00[0x20]; /* never read by a conversion */
    uint32_t word_20;
} CowWordObj_20;

COW_ASSERT_OFFSET(CowWordObj_20, word_20, 0x20);
COW_ASSERT_OFFSET(CowWordObj_20, opaque_00, 0x00);
COW_ASSERT_SIZE(CowWordObj_20, 0x24);


/* written by tools/cow/mkaccessor.py: an object this build reads or writes one
   word of. Only +0x10 has been seen, so the bytes below it stay opaque. */
typedef struct CowWordObj_10
{
    uint8_t opaque_00[0x10]; /* never read by a conversion */
    uint32_t word_10;
} CowWordObj_10;

COW_ASSERT_OFFSET(CowWordObj_10, word_10, 0x10);
COW_ASSERT_OFFSET(CowWordObj_10, opaque_00, 0x00);
COW_ASSERT_SIZE(CowWordObj_10, 0x14);


/* written by tools/cow/mkaccessor.py: `lea eax, [ecx+0x58]` hands back the address
   of that byte of the object, so the offset is a named constant, not a number in user
   code. */
#define COW_LEA_58 0x58u


/* written by tools/cow/mkaccessor.py: `lea eax, [ecx+0x14]` hands back the address
   of that byte of the object, so the offset is a named constant, not a number in user
   code. */
#define COW_LEA_14 0x14u


/* written by tools/cow/mkaccessor.py: `lea eax, [ecx+0x0c]` hands back the address
   of that byte of the object, so the offset is a named constant, not a number in user
   code. */
#define COW_LEA_0c 0x0cu


/* written by tools/cow/mkaccessor.py: an object this build reads or writes one
   word of. Only +0x24 has been seen, so the bytes below it stay opaque. */
typedef struct CowWordObj_24
{
    uint8_t opaque_00[0x24]; /* never read by a conversion */
    uint32_t word_24;
} CowWordObj_24;

COW_ASSERT_OFFSET(CowWordObj_24, word_24, 0x24);
COW_ASSERT_OFFSET(CowWordObj_24, opaque_00, 0x00);
COW_ASSERT_SIZE(CowWordObj_24, 0x28);


/* written by tools/cow/mkaccessor.py: an object this build reads or writes one
   word of. Only +0x28 has been seen, so the bytes below it stay opaque. */
typedef struct CowWordObj_28
{
    uint8_t opaque_00[0x28]; /* never read by a conversion */
    uint32_t word_28;
} CowWordObj_28;

COW_ASSERT_OFFSET(CowWordObj_28, word_28, 0x28);
COW_ASSERT_OFFSET(CowWordObj_28, opaque_00, 0x00);
COW_ASSERT_SIZE(CowWordObj_28, 0x2c);


/* written by tools/cow/mkaccessor.py: an object this build reads or writes one
   word of. Only +0x14 has been seen, so the bytes below it stay opaque. */
typedef struct CowWordObj_14
{
    uint8_t opaque_00[0x14]; /* never read by a conversion */
    uint32_t word_14;
} CowWordObj_14;

COW_ASSERT_OFFSET(CowWordObj_14, word_14, 0x14);
COW_ASSERT_OFFSET(CowWordObj_14, opaque_00, 0x00);
COW_ASSERT_SIZE(CowWordObj_14, 0x18);


/* written by tools/cow/mkaccessor.py: `lea eax, [ecx+0x6c]` hands back the address
   of that byte of the object, so the offset is a named constant, not a number in user
   code. */
#define COW_LEA_6c 0x6cu


/* written by tools/cow/mkaccessor.py: an object this build reads or writes one
   word of. Only +0x7c has been seen, so the bytes below it stay opaque. */
typedef struct CowWordObj_7c
{
    uint8_t opaque_00[0x7c]; /* never read by a conversion */
    uint32_t word_7c;
} CowWordObj_7c;

COW_ASSERT_OFFSET(CowWordObj_7c, word_7c, 0x7c);
COW_ASSERT_OFFSET(CowWordObj_7c, opaque_00, 0x00);
COW_ASSERT_SIZE(CowWordObj_7c, 0x80);


/* written by tools/cow/mkaccessor.py: `lea eax, [ecx+0x24]` hands back the address
   of that byte of the object, so the offset is a named constant, not a number in user
   code. */
#define COW_LEA_24 0x24u


/* written by tools/cow/mkaccessor.py: `lea eax, [ecx+0x64]` hands back the address
   of that byte of the object, so the offset is a named constant, not a number in user
   code. */
#define COW_LEA_64 0x64u


/* written by tools/cow/mkaccessor.py: `lea eax, [ecx+0x74]` hands back the address
   of that byte of the object, so the offset is a named constant, not a number in user
   code. */
#define COW_LEA_74 0x74u


/* written by tools/cow/mkaccessor.py: an object this build reads or writes one
   word of. Only +0x1c has been seen, so the bytes below it stay opaque. */
typedef struct CowWordObj_1c
{
    uint8_t opaque_00[0x1c]; /* never read by a conversion */
    uint32_t word_1c;
} CowWordObj_1c;

COW_ASSERT_OFFSET(CowWordObj_1c, word_1c, 0x1c);
COW_ASSERT_OFFSET(CowWordObj_1c, opaque_00, 0x00);
COW_ASSERT_SIZE(CowWordObj_1c, 0x20);


/* written by tools/cow/mkaccessor.py: an object this build reads or writes one
   word of. Only +0x48 has been seen, so the bytes below it stay opaque. */
typedef struct CowWordObj_48
{
    uint8_t opaque_00[0x48]; /* never read by a conversion */
    uint32_t word_48;
} CowWordObj_48;

COW_ASSERT_OFFSET(CowWordObj_48, word_48, 0x48);
COW_ASSERT_OFFSET(CowWordObj_48, opaque_00, 0x00);
COW_ASSERT_SIZE(CowWordObj_48, 0x4c);


/* written by tools/cow/mkaccessor.py: an object this build reads one float of.
   Only the offset below has been seen, so the bytes around it stay opaque. */
typedef struct CowFloatObj_08
{
    uint8_t opaque_00[0x08]; /* never read by a conversion */
    float float_08;
} CowFloatObj_08;

COW_ASSERT_OFFSET(CowFloatObj_08, float_08, 0x08);
COW_ASSERT_OFFSET(CowFloatObj_08, opaque_00, 0x00);
COW_ASSERT_SIZE(CowFloatObj_08, 0x0c);


/* written by tools/cow/mkaccessor.py: an object this build reads one byte of.
   Only the offset below has been seen, so the bytes around it stay opaque. */
typedef struct CowByteObj_01
{
    uint8_t opaque_00[0x01]; /* never read by a conversion */
    uint8_t byte_01;
} CowByteObj_01;

COW_ASSERT_OFFSET(CowByteObj_01, byte_01, 0x01);
COW_ASSERT_OFFSET(CowByteObj_01, opaque_00, 0x00);
COW_ASSERT_SIZE(CowByteObj_01, 0x02);


/* written by tools/cow/mkaccessor.py: `lea eax, [ecx-48]` hands back the address of
   that byte of the object, so the displacement is a named constant, not a number in
   user code. */
#define COW_LEA_m30 ((uint32_t)-48)


/* written by tools/cow/mkaccessor.py: an object this build reads one byte of.
   Only the offset below has been seen, so the bytes around it stay opaque. */
typedef struct CowByteObj_00
{
    uint8_t byte_00;
} CowByteObj_00;

COW_ASSERT_OFFSET(CowByteObj_00, byte_00, 0x00);
COW_ASSERT_SIZE(CowByteObj_00, 0x01);


/* written by tools/cow/mkaccessor.py: an object this build reads one float of.
   Only the offset below has been seen, so the bytes around it stay opaque. */
typedef struct CowFloatObj_2c
{
    uint8_t opaque_00[0x2c]; /* never read by a conversion */
    float float_2c;
} CowFloatObj_2c;

COW_ASSERT_OFFSET(CowFloatObj_2c, float_2c, 0x2c);
COW_ASSERT_OFFSET(CowFloatObj_2c, opaque_00, 0x00);
COW_ASSERT_SIZE(CowFloatObj_2c, 0x30);


/* written by tools/cow/mkaccessor.py: an object this build reads one float of.
   Only the offset below has been seen, so the bytes around it stay opaque. */
typedef struct CowFloatObj_24
{
    uint8_t opaque_00[0x24]; /* never read by a conversion */
    float float_24;
} CowFloatObj_24;

COW_ASSERT_OFFSET(CowFloatObj_24, float_24, 0x24);
COW_ASSERT_OFFSET(CowFloatObj_24, opaque_00, 0x00);
COW_ASSERT_SIZE(CowFloatObj_24, 0x28);

#endif /* COW_LAYOUT_STRUCTS_H */
