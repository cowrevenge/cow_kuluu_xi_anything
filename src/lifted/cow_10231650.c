/* f_0x10231650 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10231650 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10231650(Guest* g, int32_t param_1, CowU32 param_2, int32_t param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    CowU16 uVar2;
    int iVar3;
    if (param_1 != 0) {
        cow_bridge_10231080(g, COW_IMG(COW_ADDR_LIFT_10231663), 0u, (const CowU32[]){ 0u }, g->edi, param_1, g->eax, 0u);
        if (((-1 < param_3) && (((int32_t)(param_3) < (int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x44)))))) &&
           (puVar1 = (CowU32)((int32_t)rd32((uint32_t)(param_1 + 0x20)) + param_3 * 8), puVar1 != (CowU32)0x0)) {
          uVar2 = rd16((uint32_t)puVar1);
          if (uVar2 != 0) {
            iVar3 = cow_bridge_1015b9e0(g, COW_IMG(COW_ADDR_LIFT_10231696), 1u, (const CowU32[]){ uVar2 }, g->ecx, g->edx, g->eax, 0u);
            if ((iVar3 != 0) && ((int32_t)rd32((uint32_t)(param_1 + 0x40)) != 0)) {
              cow_bridge_10231250(g, COW_IMG(COW_ADDR_LIFT_102316BF), 6u, (const CowU32[]){ iVar3, param_2, uVar2, param_4, 1, (int32_t)rd32((uint32_t)(param_1 + 0x30)) == param_3 }, g->ecx, g->edx, g->eax, 24u);
              if (uVar2 < 0xf200) {
                cow_bridge_10231360(g, COW_IMG(COW_ADDR_LIFT_102316D2), 4u, (const CowU32[]){ iVar3, uVar2, param_2, param_4 }, g->ecx, g->edx, g->eax, 16u);
              }
            }
          }
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(edx), cdecl, 4 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 1 register argument(s) [edx], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10231650(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->edx;   /* edx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10231650: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10231651: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10231652: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10231653: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0x14u); g->edi = (uint32_t)(rd32(A)); }   /* 0x10231654: register edi, replayed as the entry ran it */
    cow_lift_10231650(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
