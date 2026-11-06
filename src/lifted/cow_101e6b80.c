/* f_0x101e6b80 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101e6b80 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101e6b80(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    int local_44[17];
    local_44[3] = 4;
      local_44[6] = 4;
      local_44[7] = 6;
      local_44[0xc] = 6;
      local_44[0] = 0;
      local_44[1] = 3;
      local_44[2] = 1;
      local_44[4] = 2;
      local_44[5] = 5;
      local_44[8] = 3;
      local_44[9] = 7;
      local_44[10] = 5;
      local_44[0xb] = 8;
      local_44[0xd] = 9;
      local_44[0xe] = 7;
      local_44[0xf] = 0xffffffff;
      local_44[0x10] = 0xffffffff;
      cow_bridge_1013a320(g, COW_IMG(COW_ADDR_LIFT_101E6C16), 2u, (const CowU32[]){ 0u, 2u }, g->ecx, 5u, 4u, 0u);
      iVar1 = 0;
      if (param_1 != 2) {
        iVar2 = 2;
        do {
          if (iVar2 == -1) {
            g->eax = (CowU32)((CowU32)0x0); return;
          }
          iVar2 = local_44[iVar1 * 2 + 1];
          iVar1 = iVar1 + 1;
        } while (iVar2 != param_1);
      }
      iVar1 = local_44[iVar1 * 2];
      if ((iVar1 < 0) || (7 < iVar1)) {
        g->eax = (CowU32)((CowU32)0x0); return;
      }
      g->eax = (CowU32)(COW_IMG(COW_ADDR_LIFT_1066356A) + iVar1 * 3); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 72 locals, pops [-], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101e6b80(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 0x48u;                      /* 0x101e6b80: 72 bytes of locals */
    g->eax = 4u;   /* 0x101e6b83: the value the entry loaded and the decompiler dropped */
    g->ecx = 6u;   /* 0x101e6b88: the value the entry loaded and the decompiler dropped */
    cow_lift_101e6b80(g, param_1);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 2 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
