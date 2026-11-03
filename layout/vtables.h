/* layout/vtables.h - the game's class vtables.

   The binary is compiled /GR- (no RTTI), so the only class names in existence are the 113 allocator /
   debug tag strings in vendor/cow_ffxi_disassembly/Disassembly_Tools/artifacts/
   ffximain_tables_v0.zip:tables_classnames.csv, and the only shape evidence is tables_vtables.csv
   (1,059 vtables with their first eight slot targets). Both describe the vault's build: a vtable is
   declared here only after `python tools/cow/image_cmp.py --mode vas --csv tables_vtables.csv` says
   the bytes at that address still match ours (784 of 1,059 do today), and each slot gets a
   COW_ASSERT_OFFSET like any other field.

   A slot holds a CowAddr - a guest function - so it is called through the runtime (guest_thiscall /
   guest_call), which marshals the Guest, the stack and the guest lock for us. It is never cast to a
   host function pointer. */
#ifndef COW_LAYOUT_VTABLES_H
#define COW_LAYOUT_VTABLES_H

/* the object's vtable pointer (word 0) and the target of slot N */
#define COW_VT(object) rd32((CowAddr)(object))
#define COW_VT_FN(object, n) rd32(COW_VT(object) + 4u * (uint32_t)(n))

/* call slot n of `object` as thiscall (self in ecx) or as a plain cdecl call */
#define COW_VT_THISCALL(object, n, self, nargs, args) \
    guest_thiscall(COW_VT_FN(object, n), (uint32_t)(self), (uint32_t)(nargs), (args))
#define COW_VT_CALL(object, n, nargs, args) guest_call(COW_VT_FN(object, n), (uint32_t)(nargs), (args))

#endif /* COW_LAYOUT_VTABLES_H */
