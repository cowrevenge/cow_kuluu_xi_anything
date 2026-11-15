/* f_0x101e2550 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101e2550 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101e2550(Guest* g, int32_t param_1, int32_t param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU32 psVar2;
    int iVar3;
    int iVar4;
    uVar1 = param_1 + 4;
      if (((int16_t)rd16((uint32_t)(param_1 + 6)) == 0x73ff) && ((int16_t)rd16((uint32_t)(param_2 + 6)) != 0x73ff)) {
        g->eax = (CowU32)(uVar1 & 0xffffff00); return;
      }
      if (((rd16((uint32_t)(param_2 + 8)) ^ rd16((uint32_t)(param_1 + 8))) & 0x7fff) == 0) {
        iVar3 = 0;
        psVar2 = (CowU32)(param_1 + 10);
        iVar4 = (param_2 + 4) - uVar1;
        while (uVar1 = (((uint32_t)((short)(uVar1 >> 0x10)) & 0xffffu) << 16 | ((uint32_t)(rd16((uint32_t)psVar2)) & 0xffffu)),
              rd16((uint32_t)psVar2) == (int16_t)rd16((uint32_t)(iVar4 + (int)psVar2))) {
          iVar3 = iVar3 + 1;
          psVar2 = psVar2 + 2u * (uint32_t)(1);
          if (7 < iVar3) {
            g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)((((uint32_t)((uVar1 >> 8)) & 0xffffffu) << 8 | ((uint32_t)(1) & 0xffu))) & 0xffu)); return;
          }
        }
      }
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(uVar1 & 0xffffff00) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), stdcall, 3 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 4.
   Arguments: 2 register argument(s) [ecx, edx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101e2550(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    { g->eax = (uint32_t)((uint32_t)(g->ecx + 0x4u)); }   /* 0x101e2550: register eax, replayed as the entry ran it */
    g->ecx = param_3;   /* 0x101e2553: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101e2557: push esi */
    { g->esi = (uint32_t)((uint32_t)(g->ecx + 0x4u)); }   /* 0x101e2558: register esi, replayed as the entry ran it */
    g->ecx = 29695u;   /* 0x101e255b: the value the entry loaded and the decompiler dropped */
    cow_lift_101e2550(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
