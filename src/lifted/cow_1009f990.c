/* f_0x1009f990 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1009f990 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1009f990(Guest* g, CowU32 param_1, CowU32 param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    char cVar2;
    CowU16 uVar4;
    CowU32 uVar3;
    cVar2 = cow_bridge_10086fc0(g, COW_IMG(COW_ADDR_LIFT_1009F9A1), 1u, (const CowU32[]){ g->ecx }, g->ecx, g->edx, g->eax, 4u);
      if (cVar2 == '\0') {
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
      }
      if (rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(g->ecx))) != 0) {
        iVar1 = (int32_t)rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(g->ecx))) + 0x78));
        if (iVar1 == (int32_t)rd32((uint32_t)(param_3 + 4))) {
          uVar4 = (CowU16)((CowU32)iVar1 >> 0x10);
          uVar3 = (((uint32_t)(uVar4) & 0xffffu) << 16 | ((uint32_t)(rd16((uint32_t)(param_3 + 0xe))) & 0xffffu));
          cow_bridge_1009f430(g, COW_IMG(COW_ADDR_LIFT_1009F9D3), 4u, (const CowU32[]){ (int32_t)rd32((uint32_t)(param_3 + 4)), (((uint32_t)(uVar4) & 0xffffu) << 16 | ((uint32_t)(rd16((uint32_t)(param_3 + 10))) & 0xffffu)), (((uint32_t)(((CowU32)uVar3 >> 8)) & 0xffffffu) << 8 | ((uint32_t)(rd8((uint32_t)(param_3 + 0xc))) & 0xffu)), uVar3 }, g->ecx, g->edx, g->eax, 0u);
          if ((rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(rd16((uint32_t)(param_3 + 8))))) + 0x120)) >> 1 & 1) == 0) {
            wr32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(rd16((uint32_t)(param_3 + 8))))) + 0x16c), (int)(int8_t)rd8((uint32_t)(param_3 + 0xd)));
          }
        }
      }
      g->eax = (CowU32)(1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1009f990(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1009f990: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->esi = (uint32_t)(rd32(A)); }   /* 0x1009f991: register esi, replayed as the entry ran it */
    g->ecx = 0u;   /* 0x1009f995: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esi + 0x8u); g->ecx = (g->ecx & 0xFFFF0000u) | (uint16_t)(rd16(A)); }   /* 0x1009f997: register ecx, replayed as the entry ran it */
    cow_lift_1009f990(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
