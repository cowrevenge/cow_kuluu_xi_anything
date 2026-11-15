/* f_0x101a75c0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101a75c0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101a75c0(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    CowU32 uVar2;
    int iVar3;
    CowU32 piVar4;
    uint64_t uVar5;
    if (param_1 != 0) {
        cow_bridge_101a74f0(g, COW_IMG(COW_ADDR_LIFT_101A75D6), 2u, (const CowU32[]){ (g->edi + 16u), 2u }, g->ecx, param_1, (g->edi + 16u), 8u);
        uVar5 = cow_bridge_100e5290(g, COW_IMG(COW_ADDR_LIFT_101A75DE), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        iVar3 = 0;
        do {
          piVar4 = (CowU32)uVar5;
          if (piVar4 == (CowU32)0x0) {
            return;
          }
          uVar2 = (((uint32_t)(((uint64_t)uVar5 >> 0x28)) & 0xffffffu) << 8 | ((uint32_t)(rd8((uint32_t)(param_1 + 0x10 + rd32((uint32_t)piVar4) * 4))) & 0xffu)) & 0xfffffffd;
          wr8((uint32_t)(param_1 + 0x10 + rd32((uint32_t)piVar4) * 4), (CowU8)uVar2 | 1);
          uVar2 = (((uint32_t)((uVar2 >> 8)) & 0xffffffu) << 8 | ((uint32_t)(rd8((uint32_t)(param_1 + 0x10 + rd32((uint32_t)piVar4) * 4))) & 0xffu)) &
                  0xffffff03;
          wr8((uint32_t)(param_1 + 0x10 + rd32((uint32_t)piVar4) * 4), (CowU8)uVar2 ^ (int8_t)rd8((uint32_t)((int)piVar4 + 5)) << 2);
          wr8((uint32_t)(param_1 + 0x11 + rd32((uint32_t)piVar4) * 4), (char)rd32((uint32_t)(piVar4 + 4u * (uint32_t)(1))));
          puVar1 = (CowU32)
                   cow_bridge_100eb490(g, COW_IMG(COW_ADDR_LIFT_101A7629), 2u, (const CowU32[]){ rd8((uint32_t)((int)piVar4 + 5)), (((uint32_t)((uVar2 >> 8)) & 0xffffffu) << 8 | ((uint32_t)((char)rd32((uint32_t)(piVar4 + 4u * (uint32_t)(1)))) & 0xffu)) }, g->ecx, g->edx, g->eax, 8u);
          if (puVar1 != (CowU32)0x0) {
            wr16((uint32_t)(param_1 + 0x12 + rd32((uint32_t)piVar4) * 4), rd16((uint32_t)puVar1));
          }
          uVar5 = cow_bridge_100e52c0(g, COW_IMG(COW_ADDR_LIFT_101A763F), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          iVar3 = iVar3 + 1;
        } while (iVar3 < 0x10);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(edx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp], ret 0.
   Arguments: 1 register argument(s) [edx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101a75c0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->edx;   /* edx argument */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x101a75c0: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101a75c1: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101a75c2: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->edi = (uint32_t)(rd32(A)); }   /* 0x101a75c3: register edi, replayed as the entry ran it */
    cow_lift_101a75c0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
