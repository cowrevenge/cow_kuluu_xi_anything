/* f_0x100ec730 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100ec730 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100ec730(Guest* g, int32_t param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU16 uVar1;
    CowU32 uVar2;
    int iVar3;
    CowU16 uVar4;
    CowU32 puVar5;
    CowU32 puVar6;
    if ((param_1 != 0) || (param_1 = rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) != 0)) {
        uVar1 = 0x10;
        uVar4 = 0;
        while (uVar2 = (CowU32)uVar4, uVar4 < rd16((uint32_t)(param_1 + 0x19a50))) {
          if (((int8_t)rd8((uint32_t)(param_1 + 0x198d1 + uVar2 * 0x18)) == (int8_t)rd8((uint32_t)((int)param_3 + 5))) &&
             ((int8_t)rd8((uint32_t)(param_1 + uVar2 * 0x18 + 0x198d2)) == (int8_t)rd8((uint32_t)((int)param_3 + 6)))) {
            puVar5 = (CowU32)(param_1 + 0x9868 + (uVar4 + 0xaaf) * 0x18);
            puVar6 = param_3;
            for (iVar3 = 6; puVar6 = puVar6 + 4u * (uint32_t)(1), iVar3 != 0; iVar3 = iVar3 + -1) {
              wr32((uint32_t)puVar5, rd32((uint32_t)puVar6));
              puVar5 = puVar5 + 4u * (uint32_t)(1);
            }
            goto L_100ec7ed;
          }
          if ((int8_t)rd8((uint32_t)(param_1 + 0x9868 + (uVar2 * 3 + 0x200d) * 8)) == '\0') {
            uVar1 = uVar4;
          }
          uVar4 = uVar4 + 1;
          if (0xf < uVar4) goto L_100ec7f3;
        }
        puVar5 = (CowU32)(param_1 + 0x9868 + (uVar2 + 0xaaf) * 0x18);
        puVar6 = param_3;
        for (iVar3 = 6; puVar6 = puVar6 + 4u * (uint32_t)(1), iVar3 != 0; iVar3 = iVar3 + -1) {
          wr32((uint32_t)puVar5, rd32((uint32_t)puVar6));
          puVar5 = puVar5 + 4u * (uint32_t)(1);
        }
        wr16((uint32_t)(param_1 + 0x19a50), (int16_t)rd16((uint32_t)(param_1 + 0x19a50)) + 1);
    L_100ec7ed:
        if (0xf < uVar4) {
    L_100ec7f3:
          if ((uVar1 < 0x10) && ((int8_t)rd8((uint32_t)(param_3 + 4u * (uint32_t)(1))) != '\0')) {
            puVar6 = (CowU32)(param_1 + 0x9868 + (uVar1 + 0xaaf) * 0x18);
            for (iVar3 = 6; param_3 = param_3 + 4u * (uint32_t)(1), iVar3 != 0; iVar3 = iVar3 + -1) {
              wr32((uint32_t)puVar6, rd32((uint32_t)param_3));
              puVar6 = puVar6 + 4u * (uint32_t)(1);
            }
          }
        }
      }
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100ec730(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    g->edx = param_1;   /* 0x100ec730: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100ec734: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x100ec735: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100ec736: push esi */
    cow_lift_100ec730(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
