/* f_0x100e19c0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100e19c0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100e19c0(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU16 uVar1;
    CowU16 uVar2;
    int iVar3;
    CowU32 puVar4;
    CowU16 uVar5;
    CowU16 uVar6;
    CowU16 uVar7;
    iVar3 = 0;
      if (param_1 != 0) {
        uVar6 = 0;
        do {
          if ((int16_t)rd16((uint32_t)(param_1 + 0x7a0 + (CowU32)uVar6 * 0x794)) == 0) {
            wr16((uint32_t)(param_1 + 10), (int16_t)rd16((uint32_t)(param_1 + 10)) + 1);
            iVar3 = param_1 + (CowU32)uVar6 * 0x794;
            wr16((uint32_t)(iVar3 + 0x7a0), rd16((uint32_t)(param_1 + 10)));
            iVar3 = iVar3 + 0x10;
            if (iVar3 != 0) goto L_100e1a9d;
            break;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < 4);
        uVar6 = rd16((uint32_t)(param_1 + 10));
        uVar7 = 0;
        uVar5 = 1;
        puVar4 = (CowU32)(param_1 + 0xf34);
        do {
          uVar1 = rd16((uint32_t)(param_1 + 0x7a0 + (CowU32)uVar7 * 0x794));
          if (uVar6 < uVar1) {
            uVar2 = rd16((uint32_t)puVar4);
    L_100e1a64:
            if (uVar2 <= uVar1) goto L_100e1a66;
          }
          else {
            uVar2 = rd16((uint32_t)puVar4);
            if (uVar2 < uVar6) goto L_100e1a64;
    L_100e1a66:
            uVar7 = uVar5;
          }
          uVar5 = uVar5 + 1;
          puVar4 = puVar4 + 2u * (uint32_t)(0x3ca);
        } while (uVar5 < 4);
        wr16((uint32_t)(param_1 + 10), uVar6 + 1);
        iVar3 = param_1 + (CowU32)uVar7 * 0x794;
        wr16((uint32_t)(iVar3 + 0x7a0), uVar6 + 1);
        iVar3 = iVar3 + 0x10;
    L_100e1a9d:
        if ((int16_t)rd16((uint32_t)(param_1 + 10)) == 0) {
          wr16((uint32_t)(param_1 + 10), 1);
        }
      }
      g->eax = (CowU32)(iVar3); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100e19c0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->ecx = param_1;   /* 0x100e19c0: the value the entry loaded and the decompiler dropped */
    g->eax = 0u;   /* 0x100e19c4: the value the entry loaded and the decompiler dropped */
    cow_lift_100e19c0(g, param_1);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
