/* f_0x10102210 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10102210 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10102210(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5, CowU32 param_6, int32_t param_7, CowU32 param_8)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    if (rd16((uint32_t)(param_7 + (CowU32)param_1 * 2)) <= (CowU16)param_2) {
        if ((param_6 & 0x20) != 0) {
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(param_1 == 0x15) & 0xffu)); return;
        }
        if (param_1 != 0x14) {
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
        }
        if ((param_6 & 8) != 0) {
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)((_Bool)(param_8 >> 2 & 1)) & 0xffu)); return;
        }
        if ((param_6 & 4) == 0) {
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
        }
        if (param_5 == '\x01') {
          bVar1 = param_8 & 1;
        }
        else {
          if (param_5 != '\x02') goto L_1010226f;
          bVar1 = param_8 & 2;
        }
        if (bVar1 != 0) {
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
        }
      }
    L_1010226f:
      if (((CowU16)param_4 < rd16((uint32_t)(param_7 + (CowU32)param_3 * 2))) || ((param_6 & 0x20) != 0)) {
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
      }
      if (param_3 == 0x14) {
        if ((param_6 & 8) != 0) {
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)((_Bool)(param_8 >> 2 & 1)) & 0xffu)); return;
        }
        if ((param_6 & 4) != 0) {
          if (param_5 == '\x01') {
            param_8 = param_8 & 1;
          }
          else {
            if (param_5 != '\x02') {
              g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
            }
            param_8 = param_8 & 2;
          }
          if (param_8 == 0) {
            g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
          }
        }
      }
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 8 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 0 register argument(s) [-], 8 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10102210(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    CowU32 param_6 = rd32((uint32_t)(sp0 + 4u + 0x14u));
    CowU32 param_7 = rd32((uint32_t)(sp0 + 4u + 0x18u));
    CowU32 param_8 = rd32((uint32_t)(sp0 + 4u + 0x1cu));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->ecx = param_1;   /* 0x10102210: the value the entry loaded and the decompiler dropped */
    g->edx = param_7;   /* 0x10102214: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10102218: push ebx */
    { uint32_t A = (uint32_t)(g->esp + 0x1Cu); g->ebx = (g->ebx & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x10102219: register ebx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1010221d: push esi */
    g->eax = g->ecx;   /* 0x1010221e: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->esi = (g->esi & 0xFFFF0000u) | (uint16_t)(rd8(A)); }   /* 0x10102220: register esi, replayed as the entry ran it */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0xFFu; uint32_t r = (uint32_t)(a & b); g->eax = (uint32_t)(r); }   /* 0x10102226: register eax, replayed as the entry ran it */
    cow_lift_10102210(g, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->edx = (CowU32)(param_7);   /* what edx holds at every ret of the entry */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 2 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
