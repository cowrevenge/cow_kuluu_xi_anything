/* layout/cow_types.h - the scalar vocabulary of guest layouts.

   Nothing here is a guess about the game: these are widths and calling conventions, so a struct in
   layout/structs.h reads as the game wrote it. Anything that IS a claim about the game (an offset, a
   field's meaning) lives with the field it describes, next to its static_assert and its evidence. */
#ifndef COW_LAYOUT_TYPES_H
#define COW_LAYOUT_TYPES_H

#include <stdint.h>

/* The guest is 32-bit MSVC: int/long/pointer are 4 bytes, bool is 1, enums are int unless declared
   otherwise, and structs are packed at 8. A field is therefore never `int` (host-dependent width)
   and never `long`. */
typedef uint32_t CowU32;
typedef int32_t CowI32;
typedef uint16_t CowU16;
typedef int16_t CowI16;
typedef uint8_t CowU8;
typedef int8_t CowI8;
typedef uint32_t CowBool; /* the game stores 0/1 in 4 bytes almost everywhere; 1-byte bools are CowU8 */

/* A reference count / tally the game increments in place (f_100083b0 takes a pointer to one). */
typedef uint32_t CowCounter;

#endif /* COW_LAYOUT_TYPES_H */
