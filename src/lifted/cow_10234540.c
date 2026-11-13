/* f_0x10234540 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10234540 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10234540(Guest* g, int32_t param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 uVar2;
    int iVar3;
    if (rd32(COW_IMG(COW_ADDR_LIFT_10668ED4)) != 0) {
        iVar1 = cow_bridge_10233f70(g, COW_IMG(COW_ADDR_LIFT_1023455D), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, g->eax, 0u);
        if (iVar1 != 0) {
          iVar1 = cow_bridge_1015b9e0(g, COW_IMG(COW_ADDR_LIFT_10234571), 1u, (const CowU32[]){ iVar1 }, g->ecx, g->edx, g->eax, 0u);
          if (((iVar1 != 0) && (rd16((uint32_t)(iVar1 + 0x1594)) != (CowU32)0x0)) &&
             (rd16((uint32_t)rd32((uint32_t)((iVar1 + 0x1594)))) != 0)) {
            wr32((uint32_t)(param_1 + 100), param_2 & 0xff);
            uVar2 = (CowU32)rd16((uint32_t)rd32((uint32_t)((iVar1 + 0x1594))));
            cow_bridge_10221a30(g, COW_IMG(COW_ADDR_LIFT_102345A0), 0u, (const CowU32[]){ 0u }, g->edi, g->edx, g->eax, 0u);
            cow_bridge_10221900(g, COW_IMG(COW_ADDR_LIFT_102345B4), 4u, (const CowU32[]){ 0, 0, uVar2, 8 }, g->edi, g->edx, g->eax, 0u);
            cow_bridge_10221a80(g, COW_IMG(COW_ADDR_LIFT_102345BE), 2u, (const CowU32[]){ uVar2, 0 }, g->edi, g->edx, g->eax, 0u);
            wr32((uint32_t)(param_1 + 0x1c), COW_IMG(COW_ADDR_LIFT_102345F0));
            iVar3 = 0;
            if (uVar2 != 0) {
              do {
                cow_bridge_1015b9e0(g, COW_IMG(COW_ADDR_LIFT_102345E0), 1u, (const CowU32[]){ rd32((uint32_t)((int32_t)rd32((uint32_t)(iVar1 + 0x1598)) + iVar3 * 4)) }, g->ecx, g->edx, g->eax, 0u);
                iVar3 = iVar3 + 1;
              } while (iVar3 < (int)uVar2);
            }
          }
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10234540(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10234540: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10234541: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10234542: push edi */
    g->edi = g->ecx;   /* 0x10234543: the value the entry loaded and the decompiler dropped */
    g->ecx = rd32(COW_IMG(COW_ADDR_LIFT_10668ED4));   /* 0x10234545: the value the entry loaded and the decompiler dropped */
    cow_lift_10234540(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
