/* f_0x1026ece0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1026ece0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1026ece0(Guest* g)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    CowU32 puVar2;
    int iVar3;
    int iVar4;
    CowU32 puVar5;
    int iVar6;
    CowU32 uVar7;
    int local_8;
    cow_bridge_10273890(g, COW_IMG(COW_ADDR_LIFT_1026ECEE), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10273890(g, COW_IMG(COW_ADDR_LIFT_1026ECF5), 1u, (const CowU32[]){ 2u }, g->ecx, g->edx, g->eax, 8u);
      cow_bridge_102738c0(g, COW_IMG(COW_ADDR_LIFT_1026ECFD), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_1026ee20(g, COW_IMG(COW_ADDR_LIFT_1026ED02), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      iVar3 = rd32(COW_IMG(COW_ADDR_LIFT_1099AECC));
      iVar4 = -1;
      iVar6 = 0;
      if (0 < rd32(COW_IMG(COW_ADDR_LIFT_1099AECC))) {
        local_8 = 0;
        do {
          puVar5 = (CowU32)(local_8 + rd32(COW_IMG(COW_ADDR_LIFT_1099AED0)));
          puVar1 = puVar5 + 4u * (uint32_t)(0x2a);
          if (rd32((uint32_t)(puVar5 + 4u * (uint32_t)(0x2a))) != 0) {
            if ((rd32((uint32_t)puVar5) & 0x20) == 0) {
              if ((rd32((uint32_t)puVar5) & 0x100) == 0) {
                cow_bridge_10277ad0(g, COW_IMG(COW_ADDR_LIFT_1026ED6D), 1u, (const CowU32[]){ puVar1 }, g->ecx, g->edx, g->eax, 4u);
              }
              else {
                wr32((uint32_t)puVar1, 0);
              }
              iVar4 = iVar6;
            }
            else {
              if (iVar4 < 0) goto L_1026ed90;
              cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_1026ED49), 1u, (const CowU32[]){ 272308780u }, g->ecx, g->edx, g->eax, 0u);
              cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_1026ED55), 3u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103B1A0C), iVar6, iVar4 }, g->ecx, g->edx, g->eax, 0u);
              if ((rd32((uint32_t)puVar5) & 0x100) == 0) {
                cow_bridge_10277ad0(g, COW_IMG(COW_ADDR_LIFT_1026ED85), 1u, (const CowU32[]){ puVar1 }, g->ecx, g->edx, g->eax, 4u);
              }
              else {
                wr32((uint32_t)puVar1, 0);
              }
            }
            wr32(COW_IMG(COW_ADDR_LIFT_1099AECC), rd32(COW_IMG(COW_ADDR_LIFT_1099AECC)) + -1);
          }
    L_1026ed90:
          iVar6 = iVar6 + 1;
          local_8 = local_8 + 0xac;
        } while (iVar6 < iVar3);
      }
      iVar3 = 0;
      if (0 < rd32(COW_IMG(COW_ADDR_LIFT_1099AECC))) {
        iVar4 = 0;
        do {
          iVar6 = (int32_t)rd32((uint32_t)(iVar4 + 0xa8 + rd32(COW_IMG(COW_ADDR_LIFT_1099AED0))));
          puVar2 = (CowU32)(iVar4 + 0xa8 + rd32(COW_IMG(COW_ADDR_LIFT_1099AED0)));
          if (iVar6 != 0) {
            if ((rd32((uint32_t)(iVar6 + 0xa8)) & 0x8000) == 0) {
              uVar7 = 1;
            }
            else {
              uVar7 = 2;
            }
            cow_bridge_10273700(g, COW_IMG(COW_ADDR_LIFT_1026EDE9), 2u, (const CowU32[]){ iVar6, uVar7 }, g->ecx, g->edx, g->eax, 0u);
            cow_bridge_10273830(g, COW_IMG(COW_ADDR_LIFT_1026EDF6), 2u, (const CowU32[]){ rd32((uint32_t)puVar2), 1 }, g->ecx, g->edx, g->eax, 8u);
          }
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 0xac;
        } while (iVar3 < rd32(COW_IMG(COW_ADDR_LIFT_1099AECC)));
      }
      g->eax = (CowU32)(0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 0 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 8 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1026ece0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */

    g->esp -= 0x8u;                      /* 0x1026ece0: 8 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1026ece3: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1026ece4: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1026ece5: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1026ece6: push edi */
    cow_lift_1026ece0(g);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
