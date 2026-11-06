/* f_0x101c7e20 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101c7e20 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101c7e20(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 uVar2;
    int iVar3;
    int iVar4;
    CowU32 piVar5;
    CowU32 puVar6;
    CowU32 uVar7;
    iVar1 = rd32((uint32_t)(param_1 + 8));
      iVar3 = 0;
      if (0 < iVar1) {
        piVar5 = rd32((uint32_t)(param_1 + 0x10));
        do {
          if (rd32((uint32_t)piVar5) == -2) {
            g->eax = (CowU32)(iVar3); return;
          }
          iVar3 = iVar3 + 1;
          piVar5 = piVar5 + 1;
        } while (iVar3 < iVar1);
      }
      puVar6 = rd32((uint32_t)(param_1 + 0x10));
      iVar4 = 1;
      iVar3 = 0;
      uVar7 = rd32((uint32_t)puVar6);
      if (1 < iVar1) {
        do {
          puVar6 = puVar6 + 1;
          uVar2 = rd32((uint32_t)puVar6);
          if ((-1 < (int)uVar2) && (uVar2 < uVar7)) {
            iVar3 = iVar4;
            uVar7 = uVar2;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar1);
      }
      g->eax = (CowU32)(iVar3); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [esi, edi, ebx], frame pointer no, 0 locals, pops [ebx, edi, esi], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101c7e20(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101c7e20: push esi */
    { uint32_t A = (uint32_t)(g->ecx + 0x8u); g->esi = (uint32_t)(rd32(A)); }   /* 0x101c7e21: register esi, replayed as the entry ran it */
    g->eax = 0u;   /* 0x101c7e24: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101c7e26: push edi */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* push ebx (from the epilogue's pops) */
    cow_lift_101c7e20(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
