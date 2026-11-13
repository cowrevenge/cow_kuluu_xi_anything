/* f_0x10108f40 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10108f40 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10108f40(Guest* g, int32_t param_1, int32_t param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    short sVar1;
    short sVar2;
    int iVar3;
    if ((param_3 == 0) || (rd16((uint32_t)(param_3 + 8)) == 0)) {
        iVar3 = 0;
      }
      else {
        iVar3 = (CowU32)rd16((uint32_t)(param_3 + 8)) + param_1;
      }
      sVar1 = (short)param_1;
      if (param_2 != 0) {
        if (iVar3 == 0) {
          sVar2 = 0;
        }
        else {
          sVar2 = (short)iVar3 - sVar1;
        }
        wr16((uint32_t)(param_2 + 8), sVar2);
        if (param_3 == 0) {
          sVar2 = 0;
        }
        else {
          sVar2 = (short)param_3 - sVar1;
        }
        wr16((uint32_t)(param_2 + 10), sVar2);
      }
      if ((rd16((uint32_t)(param_2 + 8)) != 0) &&
         (iVar3 = (CowU32)rd16((uint32_t)(param_2 + 8)) + param_1, iVar3 != 0)) {
        wr16((uint32_t)(iVar3 + 10), (short)param_2 - sVar1);
      }
      if ((rd16((uint32_t)(param_2 + 10)) != 0) &&
         (iVar3 = (CowU32)rd16((uint32_t)(param_2 + 10)) + param_1, iVar3 != 0)) {
        wr16((uint32_t)(iVar3 + 8), (short)param_2 - sVar1);
      }
      if ((rd16((uint32_t)(param_2 + 10)) == 0) || ((CowU32)rd16((uint32_t)(param_2 + 10)) + param_1 == 0)) {
        wr16((uint32_t)(param_1 + 8), rd16((uint32_t)(param_2 + 6)));
        cow_bridge_101088c0(g, COW_IMG(COW_ADDR_LIFT_10108FDA), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        param_1 = g->ecx;
      }
      if ((rd16((uint32_t)(param_2 + 8)) == 0) || ((CowU32)rd16((uint32_t)(param_2 + 8)) + param_1 == 0)) {
        wr32((uint32_t)(param_1 + 0x10), param_2);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [esi], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10108f40(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->edx = param_3;   /* 0x10108f40: the value the entry loaded and the decompiler dropped */
    cow_lift_10108f40(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 1 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
