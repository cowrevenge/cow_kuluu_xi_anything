/* f_0x101c7660 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101c7660 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101c7660(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    CowU32 uVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iStack_8;
    iVar5 = rd32((uint32_t)(param_1 + 8)) * rd32((uint32_t)(param_1 + 4));
      iVar6 = 0;
      if (0 < iVar5) {
        iStack_8 = 0;
        iVar4 = 1;
        do {
          iVar2 = rd32((uint32_t)(param_1 + 0xc));
          iVar1 = iVar6 * 4;
          if (iVar4 < iVar5) {
            uVar3 = rd32((uint32_t)(iVar2 + 4 + iVar6 * 4));
            iVar6 = iVar6 + 1;
            iVar4 = iVar4 + 1;
          }
          else {
            uVar3 = 0;
          }
          uVar3 = cow_bridge_101c75e0(g, COW_IMG(COW_ADDR_LIFT_101C76A2), 2u, (const CowU32[]){ rd32((uint32_t)(iVar2 + iVar1)), uVar3 }, g->ecx, g->edx, g->eax, 0u);
          wr32((uint32_t)(iStack_8 + iVar2), uVar3);
          iStack_8 = iStack_8 + 4;
          iVar6 = iVar6 + 1;
          iVar4 = iVar4 + 1;
        } while (iVar6 < iVar5);
      }
      g->eax = (CowU32)(0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebp, esi, ebx, edi], frame pointer no, 8 locals, pops [edi, ebx, esi, ebp], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101c7660(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 0x8u;                      /* 0x101c7660: 8 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x101c7663: push ebp */
    { uint32_t A = (uint32_t)(g->ecx + 0x8u); g->ebp = (uint32_t)(rd32(A)); }   /* 0x101c7664: register ebp, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* push esi (from the epilogue's pops) */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* push ebx (from the epilogue's pops) */
    g->esp -= 4u; wr32(g->esp, g->edi); /* push edi (from the epilogue's pops) */
    cow_lift_101c7660(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
