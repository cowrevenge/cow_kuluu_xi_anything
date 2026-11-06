/* f_0x10246710 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10246710 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10246710(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    iVar1 = -1;
      if (param_1 == 0) {
        iVar1 = 0;
        if ((-1 < rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_106690B8)) + 0x94))) &&
           ((param_2 < 0 || (rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_106690B8)) + 0x94)) == param_2)))) {
          iVar1 = 1;
        }
      }
      else if (param_1 == 1) {
        if ((-1 < rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_106690B8)) + 0x94))) &&
           ((param_2 < 0 || (rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_106690B8)) + 0x94)) == param_2)))) {
          g->eax = (CowU32)(rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_106690B8)) + 0x4c)) >> 0xc); return;
        }
      }
      else if (((param_1 == 3) && (-1 < rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_106690B8)) + 0x94)))) &&
              ((param_2 < 0 || (rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_106690B8)) + 0x94)) == param_2)))) {
        g->eax = (CowU32)(rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_106690B8)) + 0x4c)) >> 0xc); return;
      }
      g->eax = (CowU32)(rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_106690B8)) + 0x4c)) >> 0xc); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: stdcall, 2 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [esi], ret 8.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10246710(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->edx = param_1;   /* 0x10246710: the value the entry loaded and the decompiler dropped */
    g->ecx = rd32(COW_IMG(COW_ADDR_LIFT_106690B8));   /* 0x10246714: the value the entry loaded and the decompiler dropped */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0xFFFFFFFFu; uint32_t r = (uint32_t)(a | b); g->eax = (uint32_t)(r); }   /* 0x1024671a: register eax, replayed as the entry ran it */
    { uint32_t a = g->edx; uint32_t b = (uint32_t)0x0u; uint32_t r = (uint32_t)(a - b); g->edx = (uint32_t)(r); }   /* 0x1024671d: register edx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10246720: push esi */
    cow_lift_10246710(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 1 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
