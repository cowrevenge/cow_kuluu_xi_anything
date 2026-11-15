/* f_0x1024d630 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1024d630 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1024d630(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    int iVar3;
    iVar1 = 4;
      iVar3 = param_1 + 0x160;
      iVar2 = param_1 + 0x78;
      do {
        cow_bridge_10251390(g, COW_IMG(COW_ADDR_LIFT_1024D64D), 2u, (const CowU32[]){ iVar3, iVar2 }, g->ecx, g->edx, g->eax, 8u);
        iVar2 = iVar2 + 4;
        iVar3 = iVar3 + 0x1c;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      cow_bridge_1024d420(g, COW_IMG(COW_ADDR_LIFT_1024D65F), 1u, (const CowU32[]){ param_1 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_1024d2e0(g, COW_IMG(COW_ADDR_LIFT_1024D667), 2u, (const CowU32[]){ param_1, 0 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_101c4d30(g, COW_IMG(COW_ADDR_LIFT_1024D675), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_1024d6d0(g, COW_IMG(COW_ADDR_LIFT_1024D67B), 1u, (const CowU32[]){ param_1 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_101c4d40(g, COW_IMG(COW_ADDR_LIFT_1024D689), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_1024d560(g, COW_IMG(COW_ADDR_LIFT_1024D697), 3u, (const CowU32[]){ param_1, rd32((uint32_t)(param_1 + 8)), rd32((uint32_t)(param_1 + 0xc)) }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(param_1 + 4), 1);
      cow_bridge_10252630(g, COW_IMG(COW_ADDR_LIFT_1024D6BC), 2u, (const CowU32[]){ param_1 + 0xcc, (int32_t)rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10389538) + (int32_t)rd32((uint32_t)(param_1 + 8)) * 4)) + 4 + (int32_t)rd32((uint32_t)(param_1 + 0xc)) * 2 }, g->ecx, g->edx, g->eax, 20u);
      g->eax = (CowU32)(0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1024d630(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1024d630: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1024d631: push ebp */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->ebp = (uint32_t)(rd32(A)); }   /* 0x1024d632: register ebp, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1024d636: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1024d637: push edi */
    g->ebx = 4u;   /* 0x1024d638: the value the entry loaded and the decompiler dropped */
    { g->edi = (uint32_t)((uint32_t)(g->ebp + 0x160u)); }   /* 0x1024d63d: register edi, replayed as the entry ran it */
    cow_lift_1024d630(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
