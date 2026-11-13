/* f_0x1010fc50 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1010fc50 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1010fc50(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    int iVar2;
    CowU32 uVar3;
    CowU32 uVar4;
    CowU32 puVar5;
    CowU32 pbVar6;
    int iVar7;
    CowU32 local_18[6];
    if (rd32(COW_IMG(COW_ADDR_LIFT_104E1708)) != 0) {
        iVar2 = cow_bridge_10109140(g, COW_IMG(COW_ADDR_LIFT_1010FC6E), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104E1708)), 0u);
        if ((int32_t)rd32((uint32_t)(iVar2 + 4)) == 0) {
          pbVar6 = (CowU32)0x0;
        }
        else {
          pbVar6 = rd8((uint32_t)((int32_t)rd32((uint32_t)(iVar2 + 4)) + 4));
        }
        puVar5 = local_18;
        iVar2 = 3;
        do {
          wr32((uint32_t)puVar5, 0);
          if ((pbVar6 != (CowU32)0x0) && (rd8((uint32_t)pbVar6) != 0)) {
            uVar4 = 0;
            iVar7 = 5;
            do {
              bVar1 = rd8((uint32_t)pbVar6);
              uVar4 = uVar4 << 6;
              if (bVar1 != 0) {
                if (bVar1 < 0x61) {
                  uVar3 = bVar1 - 0x20;
                }
                else {
                  uVar3 = bVar1 - 0x40;
                }
                uVar4 = uVar4 | uVar3 & 0x3f;
                pbVar6 = pbVar6 + 1;
              }
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
            wr32((uint32_t)puVar5, uVar4);
          }
          puVar5 = puVar5 + 4u * (uint32_t)(1);
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        iVar2 = cow_bridge_10109140(g, COW_IMG(COW_ADDR_LIFT_1010FCDC), 1u, (const CowU32[]){ param_1 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104E1708)), 0u);
        if ((int32_t)rd32((uint32_t)(iVar2 + 4)) == 0) {
          pbVar6 = (CowU32)0x0;
        }
        else {
          pbVar6 = rd8((uint32_t)((int32_t)rd32((uint32_t)(iVar2 + 4)) + 4));
        }
        puVar5 = local_18 + 3;
        iVar2 = 3;
        do {
          wr32((uint32_t)puVar5, 0);
          if ((pbVar6 != (CowU32)0x0) && (rd8((uint32_t)pbVar6) != 0)) {
            iVar7 = 5;
            do {
              uVar4 = rd32((uint32_t)puVar5);
              wr32((uint32_t)puVar5, uVar4 << 6);
              bVar1 = rd8((uint32_t)pbVar6);
              if (bVar1 != 0) {
                if (bVar1 < 0x61) {
                  uVar3 = bVar1 - 0x20;
                }
                else {
                  uVar3 = bVar1 - 0x40;
                }
                pbVar6 = pbVar6 + 1;
                wr32((uint32_t)puVar5, uVar3 & 0x3f | uVar4 << 6);
              }
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          puVar5 = puVar5 + 4u * (uint32_t)(1);
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        cow_bridge_1010fa30(g, COW_IMG(COW_ADDR_LIFT_1010FD5E), 5u, (const CowU32[]){ local_18 + 3, local_18, param_3, 0, param_4 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104E1708)), 0u);
        cow_bridge_101090a0(g, COW_IMG(COW_ADDR_LIFT_1010FD67), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104E1708)), 0u);
        cow_bridge_101090a0(g, COW_IMG(COW_ADDR_LIFT_1010FD70), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104E1708)), 0u);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 4 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 40 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 4 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1010fc50(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_104E1708));   /* 0x1010fc50: the value the entry loaded and the decompiler dropped */
    g->esp -= 0x28u;                      /* 0x1010fc55: 40 bytes of locals */
    cow_lift_1010fc50(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
