/* f_0x100cf100 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100cf100 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100cf100(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    short sVar2;
    int iVar3;
    int iVar4;
    iVar4 = 0;
      do {
        if ((int16_t)rd16((uint32_t)((int)param_1 + 0xb2)) == 0) {
          iVar3 = cow_bridge_10084390(g, COW_IMG(COW_ADDR_LIFT_100CF117), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          if (iVar3 != 1) goto L_100cf141;
          sVar2 = cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_1)) + 0x320u))), COW_IMG(COW_ADDR_LIFT_100CF126), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          if (sVar2 == 0) goto L_100cf141;
          cVar1 = cow_bridge_100d6240(g, COW_IMG(COW_ADDR_LIFT_100CF133), 1u, (const CowU32[]){ iVar4 }, g->ecx, g->edx, g->eax, 0u);
          if (cVar1 != '\0') goto L_100cf141;
          cow_bridge_100d5fe0(g, COW_IMG(COW_ADDR_LIFT_100CF13F), 1u, (const CowU32[]){ iVar4 }, g->ecx, g->edx, g->eax, 0u);
        }
        else {
    L_100cf141:
          cow_bridge_100d6180(g, COW_IMG(COW_ADDR_LIFT_100CF149), 1u, (const CowU32[]){ iVar4 }, g->ecx, g->edx, g->eax, 0u);
        }
        iVar4 = iVar4 + 1;
        if (9 < iVar4) {
          g->eax = (CowU32)(1); return;
        }
      } while( 1 );
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 1 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 4.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100cf100(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100cf100: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100cf101: push edi */
    g->esi = g->ecx;   /* 0x100cf102: the value the entry loaded and the decompiler dropped */
    g->edi = 0u;   /* 0x100cf104: the value the entry loaded and the decompiler dropped */
    cow_lift_100cf100(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 1 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
