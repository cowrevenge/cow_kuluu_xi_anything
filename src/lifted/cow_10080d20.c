/* f_0x10080d20 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10080d20 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10080d20(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    int iVar2;
    CowU32 uVar3;
    CowU32 puVar4;
    if (-1 < (short)rd32(COW_IMG(COW_ADDR_LIFT_10357BB8))) {
        puVar4 = COW_IMG(COW_ADDR_LIFT_10357BB8);
        uVar3 = rd32(COW_IMG(COW_ADDR_LIFT_10357BB8));
        do {
          if (((((short)uVar3 == 0x32) && (rd16((uint32_t)(param_1 + 0x14)) == 0x32)) &&
              (iVar2 = cow_bridge_10081550(g, COW_IMG(COW_ADDR_LIFT_10080D4D), 0u, (const CowU32[]){ 0u }, 273143296u, g->edx, g->eax, 0u), iVar2 != 0)) && (rd32((uint32_t)(iVar2 + 0x70)) != 0)) {
            iVar2 = rd32((uint32_t)(rd32((uint32_t)(iVar2 + 0x70)) + 0x170));
            if (iVar2 == 0x21) {
              g->eax = (CowU32)(1); return;
            }
            if (iVar2 == 7) {
              g->eax = (CowU32)(1); return;
            }
          }
          if (rd16((uint32_t)(param_1 + 0x14)) == (short)uVar3) {
            g->eax = (CowU32)(0); return;
          }
          puVar1 = (CowU32)((int)puVar4 + 2);
          uVar3 = (CowU32)rd16((uint32_t)puVar1);
          puVar4 = (CowU32)((int)puVar4 + 2);
        } while (-1 < (short)rd16((uint32_t)puVar1));
      }
      g->eax = (CowU32)(1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10080d20(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10080d20: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10080d21: push esi */
    g->esi = rd32(COW_IMG(COW_ADDR_LIFT_10357BB8));   /* 0x10080d22: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10080d28: push edi */
    cow_lift_10080d20(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 2 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
