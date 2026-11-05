/* layout/trivial.h - the vocabulary for entries that are a shape, not a function.

   An entry whose whole generated body is one or two instructions (`ret 4`, `xor eax, eax / ret`,
   `mov eax, dword ptr [ecx + 0x14] / ret`) is not a piece of code somebody wrote: it is what MSVC
   emits for a trivial virtual method, a folded duplicate (/OPT:ICF), or an inlined accessor. There are
   943 of them in this build and they are ALL of one vocabulary - tools/cow/trivial_audit.py reads every
   body in generated/all and says so; anything outside it is not tabled, it is a unit to be read.

   So each one is a ROW here and the code is written once, in src/tables/cow_trivial.c:

     { entry, kind, value, pop, owner }

   - `kind` is one of COW_TRIV_* below, and each kind names the instruction texts it stands for. A row
     may only carry a kind the bytes have (mktable.py writes the rows out of generated/all and refuses
     anything else, so a row cannot claim a shape the entry does not have);
   - `value` is the immediate, the global address, or the field offset the shape reads - an address only
     ever appears in a row, which is why this header is in layout/ and the runner is not;
   - `pop` is the byte count the entry's `ret` cleans, taken from the generated `ret N`;
   - `owner` says who reaches the address - a caller site, an RTTI-bounded vtable slot, or a data table -
     because an entry with no owner is a stub, and a stub means the file was not read.

   `verified` is not a column: the proof is per row and external. tools/cow/cowdiff.py <hex> compares
   the shared runner against THAT entry's generated original, and the table is only as honest as the
   batch run that says every row passed (docs/cow/STATUS.md prints the count).
*/
#ifndef COW_LAYOUT_TRIVIAL_H
#define COW_LAYOUT_TRIVIAL_H

#include <stdint.h>

/* Every kind is the instruction texts it stands for, exactly as generated/all spells them. The runner
   switches on these; adding a kind means adding both the texts to mktable.py's matcher and the case to
   src/tables/cow_trivial.c, and nothing else. */
typedef enum CowTrivialKind
{
    COW_TRIV_NONE = 0,     /* never valid in a row: it is the value that means "nobody matched" */
    COW_TRIV_RET,          /* `ret N` */
    COW_TRIV_ZERO,         /* `xor eax, eax / ret N` */
    COW_TRIV_SELF,         /* `mov eax, ecx / ret N`            - value unused */
    COW_TRIV_TRUE,         /* `mov al, 1 / ret N`               - al only */
    COW_TRIV_FALSE,        /* `xor al, al / ret N`              - al only */
    COW_TRIV_CONST,        /* `mov eax, <imm> / ret N`          - value = the immediate */
    COW_TRIV_CONST_PUSH,   /* `push 1 / pop eax / ret N`        - leaves a 1 in memory below esp */
    COW_TRIV_GPTR,         /* `mov eax, <addr> / ret N`         - value = the image VA, returned + RD */
    COW_TRIV_GDWORD,       /* `mov eax, [<addr>] / ret N`       - value = the image VA */
    COW_TRIV_GBYTE,        /* `mov al, byte ptr [<addr>] / ret N` - value = the image VA, al only */
    COW_TRIV_GET,          /* `mov eax, dword ptr [ecx + off] / ret N` - value = the field offset */
    COW_TRIV_GETBYTE,      /* `mov al, byte ptr [ecx + off] / ret N`   - value = the field offset */
    COW_TRIV_LEA,          /* `lea eax, [ecx + off] / ret N`           - value = the field offset */
    COW_TRIV_INCARG        /* `mov eax, dword ptr [esp + 4] / inc eax / ret N` */
} CowTrivialKind;

typedef struct CowTrivialRow
{
    uint32_t entry;      /* the address this row stands for - the key the dispatcher searches on */
    uint32_t value;      /* the immediate, the global VA, or the field offset; 0 for the shape-only kinds */
    uint16_t pop;        /* the bytes the entry's `ret` cleans above the return address */
    uint16_t kind;       /* CowTrivialKind */
    const char* owner;   /* who reaches this address, in the ledger's words (never empty) */
} CowTrivialRow;

/* The generated rows, sorted by entry (mktable.py sorts them; the dispatcher binary-searches). */
extern const CowTrivialRow g_cow_trivial_rows[];
extern const unsigned g_cow_trivial_rows_count;

/* One shared implementation for all of them: find the row, do what its kind says, return the way the
   entry's `ret` returned. src/tables/cow_trivial.c */
void cow_trivial_run(Guest* g, const CowTrivialRow* row);
/* The dispatcher every generated adapter calls. */
void cow_trivial_dispatch(Guest* g, uint32_t entry);

#endif /* COW_LAYOUT_TRIVIAL_H */
