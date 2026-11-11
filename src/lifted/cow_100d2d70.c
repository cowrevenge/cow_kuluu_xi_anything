/* f_0x100d2d70 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100d2d70 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100d2d70(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    int iVar3;
    if (8 < param_2) {
        param_2 = 1;
      }
      iVar2 = rd8((uint32_t)(param_1 + 0x881)) + -1;
      if (param_3 != 1) {
        if (iVar2 < 1) {
          if (iVar2 < 0) {
            iVar2 = 0;
          }
          if (param_3 != 0) {
            g->eax = (CowU32)(0); return;
          }
        }
        g->eax = (CowU32)(rd16((uint32_t)(COW_IMG(COW_ADDR_LIFT_1035F410) + param_2 * 2)) + 3 + iVar2); return;
      }
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      if ((param_4 == 1) || (param_4 != 2)) {
        cVar1 = rd8((uint32_t)(param_1 + 0x87b));
      }
      else {
        cVar1 = rd8((uint32_t)(param_1 + 0x88a));
      }
      iVar3 = (int)cVar1;
      if (iVar3 < 0) {
        g->eax = (CowU32)(-1); return;
      }
      iVar2 = iVar2 + param_2 * 2;
      if (param_4 == 1) {
        g->eax = (CowU32)((CowU32)rd16((uint32_t)(iVar2 * 2 + 0x1035d7d8)) + iVar3); return;
      }
      if (param_4 == 2) {
        g->eax = (CowU32)((CowU32)rd16((uint32_t)(iVar2 * 2 + 0x1035d7a0)) + iVar3); return;
      }
      g->eax = (CowU32)((CowU32)rd16((uint32_t)(iVar2 * 2 + 0x1035d768)) + iVar3); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 4 parameter(s), cleanup 12 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 12.
   Arguments: 1 register argument(s) [ecx], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100d2d70(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100d2d70: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0x8u); g->edi = (uint32_t)(rd32(A)); }   /* 0x100d2d71: register edi, replayed as the entry ran it */
    cow_lift_100d2d70(g, param_1, param_2, param_3, param_4);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 2 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
