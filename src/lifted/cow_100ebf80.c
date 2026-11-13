/* f_0x100ebf80 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100ebf80 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100ebf80(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU16 uVar1;
    int iVar2;
    int iVar3;
    CowU16 uVar4;
    CowU32 puVar5;
    CowU32 puVar6;
    iVar2 = rd32(COW_IMG(COW_ADDR_LIFT_104DFD98));
      if (rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) != 0) {
        uVar4 = 0;
        if (rd16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x19a50)) != 0) {
          do {
            if (0xf < uVar4) {
              g->eax = (CowU32)(0); return;
            }
            if ((param_1 == rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x198d1 + (CowU32)uVar4 * 0x18))) &&
               (param_2 == (int8_t)rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + (CowU32)uVar4 * 0x18 + 0x198d2)))) {
              if (param_3 == '\0') {
                g->eax = (CowU32)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x9868 + (uVar4 + 0xaaf) * 0x18); return;
              }
              puVar6 = (CowU32)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x9868 + (uVar4 + 0xaaf) * 0x18);
              puVar5 = puVar6;
              for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
                wr32((uint32_t)puVar5, 0);
                puVar5 = puVar5 + 4u * (uint32_t)(1);
              }
              wr16((uint32_t)(iVar2 + 0x19a50), (int16_t)rd16((uint32_t)(iVar2 + 0x19a50)) + -1);
              uVar1 = rd16((uint32_t)(iVar2 + 0x19a50));
              if (uVar1 <= uVar4) {
                g->eax = (CowU32)(0); return;
              }
              if (0xf < uVar1) {
                g->eax = (CowU32)(0); return;
              }
              puVar5 = (CowU32)(iVar2 + 0x9868 + (uVar1 + 0xaaf) * 0x18);
              for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
                wr32((uint32_t)puVar6, rd32((uint32_t)puVar5));
                puVar5 = puVar5 + 4u * (uint32_t)(1);
                puVar6 = puVar6 + 4u * (uint32_t)(1);
              }
              g->eax = (CowU32)(0); return;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < rd16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x19a50)));
        }
      }
      g->eax = (CowU32)(0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100ebf80(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100ebf80: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x100ebf81: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100ebf82: push esi */
    g->esi = rd32(COW_IMG(COW_ADDR_LIFT_104DFD98));   /* 0x100ebf83: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* push edi (from the epilogue's pops) */
    cow_lift_100ebf80(g, param_1, param_2, param_3);

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
