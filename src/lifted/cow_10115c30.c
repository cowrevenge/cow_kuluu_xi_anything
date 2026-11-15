/* f_0x10115c30 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10115c30 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10115c30(Guest* g, int32_t param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    int iVar3;
    CowU32 local_10[4];
    iVar2 = (int32_t)rd32((uint32_t)(param_1 + 0x4f1ac));
      if ((int32_t)rd32((uint32_t)(param_1 + 0x4f1a8)) != 0) {
        g->eax = (CowU32)(0); return;
      }
      iVar1 = param_1 + 0x2f0d4;
      iVar3 = cow_bridge_1026dc10(g, COW_IMG(COW_ADDR_LIFT_10115C5F), 1u, (const CowU32[]){ iVar1 }, g->ecx, g->edx, g->eax, 4u);
      if (iVar3 < 0) {
        g->eax = (CowU32)(0); return;
      }
      wr32((uint32_t)(iVar2 + 0x140), param_2);
      cow_bridge_1026dbee(g, COW_IMG(COW_ADDR_LIFT_10115C84), 2u, (const CowU32[]){ iVar1, local_10 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10116610(g, COW_IMG(COW_ADDR_LIFT_10115C91), 3u, (const CowU32[]){ local_10[0], 0x28, iVar2 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_1026dc2d(g, COW_IMG(COW_ADDR_LIFT_10115C9C), 2u, (const CowU32[]){ iVar1, local_10 }, g->ecx, g->edx, g->eax, 28u);
      wr32((uint32_t)(param_1 + 0x4f1a8), 0x14);
      g->eax = (CowU32)(1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 16 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10115c30(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 0x10u;                      /* 0x10115c30: 16 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10115c33: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10115c34: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10115c35: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0x20u); g->edi = (uint32_t)(rd32(A)); }   /* 0x10115c36: register edi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->edi + 0x4F1A8u); g->eax = (uint32_t)(rd32(A)); }   /* 0x10115c3a: register eax, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->edi + 0x4F1ACu); g->ebx = (uint32_t)(rd32(A)); }   /* 0x10115c40: register ebx, replayed as the entry ran it */
    cow_lift_10115c30(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
