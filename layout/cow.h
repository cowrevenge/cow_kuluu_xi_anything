/* layout/cow.h - the door to guest memory. Addresses live ONLY under layout/; user code in src/
   includes this file and never writes a 0x10xxxxxx literal.

   Three kinds of 32-bit guest address, and they are not interchangeable:

     1. a constant inside the image (.rdata/.data: a global, a table, a vtable). The retail launcher
        relocates FFXiMain, so every such constant takes the image's relocation delta - that is what
        the generated code emits as `+ RD` (guest.h). Use COW_IMG / COW_VIEW / COW_GLOBAL.
     2. a handle read OUT of guest memory (a pointer field, a stack argument). It is already a
        runtime address: no RD. Use cow_ptr() / the typed handles in layout/handles.h.
     3. the guest's stack and registers, which only an adapter (COW_ADAPTER block) may touch.

   Everything here is header-only and works in both host models: the 64-bit hosts keep guest memory
   in a reserved window (GUEST_PTR adds rt_guest_base) and the 32-bit stand-in maps it flat, so we
   always go through GUEST_PTR and never cast an int to a pointer ourselves.
*/
#ifndef COW_LAYOUT_H
#define COW_LAYOUT_H

#include <assert.h>
#include <stddef.h>
#include <stdint.h>

#include "guest.h"   /* Guest, GuestFn, rd8/rd32/wr32, GUEST_PTR, RD */
#include "runtime.h" /* rt_arg, rt_return, rt_fatal */
#include "gthread.h" /* guest_call, guest_thiscall */

typedef uint32_t CowAddr; /* any guest virtual address, including 0 for "null" */

/* (1) image-internal constant, made runtime-correct */
#define COW_IMG(va) ((CowAddr)((uint32_t)(va) + RD))

/* (2) a handle that came from guest memory */
static inline void* cow_ptr(CowAddr a)
{
    return a ? GUEST_PTR(a) : NULL;
}

/* a typed view onto a static table/global at a fixed image address */
#define COW_VIEW(type, va) ((type*)(uintptr_t)cow_ptr(COW_IMG(va)))
#define COW_AT(type, va, index) COW_VIEW(type, va) + (index)
#define COW_GLOBAL(type, name) (*(type*)(uintptr_t)cow_ptr(COW_ADDR_##name))

/* a typed view onto a handle held in guest memory */
#define COW_AS(type, handle) ((type*)(uintptr_t)cow_ptr((CowAddr)(handle)))

/* Layout proofs. Every field of every struct that overlays guest memory gets one, so a wrong
   offset is a compile error instead of a wrong value at run time. */
#define COW_ASSERT_OFFSET(structure, field, off) \
    static_assert(offsetof(structure, field) == (off), #structure "." #field " is not at " #off)
#define COW_ASSERT_SIZE(structure, size) \
    static_assert(sizeof(structure) == (size), #structure " is not " #size " bytes")

/* A guest pointer stored inside a struct, as a type you cannot confuse with another one.
   COW_HANDLE(MoActor, mo_actor_h) gives you `mo_actor_h`, `mo_actor_get(h)` and `mo_actor_null(h)`. */
#define COW_HANDLE(type, name)                                                                             \
    typedef struct                                                                                         \
    {                                                                                                      \
        CowAddr v;                                                                                         \
    } name;                                                                                                \
    static inline type* name##_get(name h)                                                                 \
    {                                                                                                      \
        return (type*)(uintptr_t)cow_ptr(h.v);                                                             \
    }                                                                                                      \
    static inline int name##_null(name h)                                                                  \
    {                                                                                                      \
        return h.v == 0;                                                                                   \
    }

#include "addresses.h"
#include "enums.h"
#include "structs.h"
#include "handles.h"
#include "vtables.h"
#include "calls.h"

#endif /* COW_LAYOUT_H */
