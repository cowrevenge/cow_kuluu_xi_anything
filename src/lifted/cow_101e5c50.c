/* f_0x101e5c50 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101e5c50 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101e5c50(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    char cVar2;
    int iVar3;
    CowU32 uVar4;
    puVar1 = param_1;
      cVar2 = cow_bridge_100e9730(g, COW_IMG(COW_ADDR_LIFT_101E5C65), 4u, (const CowU32[]){ g->eax, 0u, 0u, g->edi }, g->ecx, g->edx, g->eax, 16u);
      if ((cVar2 != '\0') && (iVar3 = cow_bridge_100e1af0(g, COW_IMG(COW_ADDR_LIFT_101E5C71), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u), iVar3 != 0)) {
        cow_bridge_10103f60(g, COW_IMG(COW_ADDR_LIFT_101E5C7D), 1u, (const CowU32[]){ iVar3 }, g->ecx, g->edx, g->eax, 0u);
        uVar4 = (CowU32)puVar1 & 0xff;
        if (uVar4 == 1) {
          cow_bridge_10107660(g, COW_IMG(COW_ADDR_LIFT_101E5CA9), 2u, (const CowU32[]){ iVar3, rd32((uint32_t)param_1) }, g->ecx, g->edx, g->eax, 8u);
        }
        else if (uVar4 == 2) {
          cow_bridge_10107670(g, COW_IMG(COW_ADDR_LIFT_101E5C9A), 2u, (const CowU32[]){ iVar3, rd32((uint32_t)param_1) }, g->ecx, g->edx, (((g->edi & 255u) - 1u) - 1u), 0u);
        }
        cow_bridge_1020a9d0(g, COW_IMG(COW_ADDR_LIFT_101E5CC1), 6u, (const CowU32[]){ 3, iVar3, 0, 0, 0, puVar1 }, g->ecx, g->edx, g->eax, 0u);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: stdcall, 1 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 4.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101e5c50(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101e5c50: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101e5c51: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->edi = (uint32_t)(rd32(A)); }   /* 0x101e5c52: register edi, replayed as the entry ran it */
    { g->eax = (uint32_t)((uint32_t)(g->esp + 0xCu)); }   /* 0x101e5c56: register eax, replayed as the entry ran it */
    cow_lift_101e5c50(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
