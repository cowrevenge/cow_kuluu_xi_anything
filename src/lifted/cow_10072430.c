/* f_0x10072430 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10072430 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10072430(Guest* g, CowU32 param_1, int32_t param_2, CowU32 param_3, int32_t param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 uVar2;
    iVar1 = ((rd8((uint32_t)(param_2 + 0x24)) & 0x7f) != 1) - 1;
      do {
        uVar2 = rd32((uint32_t)(param_2 + 0x24)) & 0x7f;
        if (uVar2 == 1) {
          iVar1 = iVar1 + 1;
        }
        if ((uVar2 == 0) && (iVar1 = iVar1 + -1, iVar1 < 0)) break;
        if (param_3 == 0) {
          if ((int32_t)rd32((uint32_t)(param_2 + 0x20)) == param_4) {
    L_1007246a:
            wr32((uint32_t)param_1, rd32((uint32_t)(param_2 + 0x14)));
            return;
          }
        }
        else if (uVar2 == param_3) {
          if (param_4 == 0) goto L_1007246a;
          if ((int32_t)rd32((uint32_t)(param_2 + 0x20)) == param_4) {
            wr32((uint32_t)param_1, rd32((uint32_t)(param_2 + 0x14)));
            return;
          }
        }
        if (rd32((uint32_t)(param_2 + 8)) == (CowU32)0x0) {
          param_2 = 0;
        }
        else {
          param_2 = rd32((uint32_t)rd32((uint32_t)((param_2 + 8))));
        }
      } while (param_2 != 0);
      wr32((uint32_t)param_1, 0);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: stdcall, 4 parameter(s), cleanup 16 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 16.
   Arguments: 0 register argument(s) [-], 4 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10072430(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->ecx = param_2;   /* 0x10072430: the value the entry loaded and the decompiler dropped */
    g->edx = param_4;   /* 0x10072434: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10072438: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->esi = (uint32_t)(rd32(A)); }   /* 0x10072439: register esi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->ecx + 0x24u); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x1007243d: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10072440: push edi */
    { uint8_t a = (uint8_t)g->eax; uint8_t b = (uint8_t)0x7Fu; uint8_t r = (uint8_t)(a & b); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(r); }   /* 0x10072441: register eax, replayed as the entry ran it */
    { { uint8_t a = (uint8_t)g->eax; uint8_t r = (uint8_t)(a - 1u); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(r); }; }   /* 0x10072443: register eax, replayed as the entry ran it */
    { { uint8_t a = (uint8_t)g->eax; uint8_t r = (uint8_t)(0u - a); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(r); }; }   /* 0x10072445: register eax, replayed as the entry ran it */
    cow_lift_10072430(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->eax = (CowU32)(param_1);   /* what eax holds at every ret of the entry */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
