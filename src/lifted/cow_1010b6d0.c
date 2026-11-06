/* f_0x1010b6d0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1010b6d0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1010b6d0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    CowU32 piVar3;
    piVar3 = rd32((uint32_t)(param_1 + 0x60));
      while ((rd32((uint32_t)(piVar3 + 4u * (uint32_t)(1))) != 0 && (rd32((uint32_t)(piVar3 + 4u * (uint32_t)(2))) != 0))) {
        iVar1 = rd32((uint32_t)piVar3);
        iVar2 = cow_bridge_1010b690(g, COW_IMG(COW_ADDR_LIFT_1010B6F4), 1u, (const CowU32[]){ rd32((uint32_t)(iVar1 + 0xc)) }, g->ecx, g->edx, g->eax, 0u);
        if (iVar2 != 0) {
          iVar2 = cow_bridge_1010b690(g, COW_IMG(COW_ADDR_LIFT_1010B705), 1u, (const CowU32[]){ rd32((uint32_t)(iVar1 + 0x14)) }, g->ecx, g->edx, g->eax, 0u);
          if (iVar2 != 0) {
            cow_bridge_101115e0(g, COW_IMG(COW_ADDR_LIFT_1010B712), 2u, (const CowU32[]){ iVar2, iVar1 }, g->ecx, g->edx, g->eax, 0u);
          }
        }
        if ((CowU32)rd32((uint32_t)(piVar3 + 4u * (uint32_t)(2))) != (CowU32)0x0) {
          piVar3 = (CowU32)rd32((uint32_t)(piVar3 + 4u * (uint32_t)(2)));
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1010b6d0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1010b6d0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1010b6d1: push ebp */
    g->ebp = g->ecx;   /* 0x1010b6d2: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1010b6d4: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1010b6d5: push edi */
    cow_lift_1010b6d0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
