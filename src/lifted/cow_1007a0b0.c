/* f_0x1007a0b0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1007a0b0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1007a0b0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    int iVar2;
    CowU32 pbVar3;
    int iVar4;
    CowU32 pbVar5;
    _Bool bVar6;
      
      if (param_2 == (CowU32)0x0) {
        if (rd32(COW_IMG(COW_ADDR_LIFT_1047D4C0)) == '\0') {
          cow_bridge_10129e30(g, COW_IMG(COW_ADDR_LIFT_1007A0D6), 1u, (const CowU32[]){ 162u }, g->ecx, param_1, param_3, 0u);
          return;
        }
      }
      else if (rd32((uint32_t)param_2) == 3) {
        iVar2 = rd32((uint32_t)(param_2 + 4u * (uint32_t)(2)));
        if ((rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) != 0) && ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x3c390)) != (int32_t)rd32((uint32_t)(iVar2 + 0x18)))) {
          pbVar5 = (CowU32)0x1047d340;
          pbVar3 = (CowU32)(iVar2 + 4);
          do {
            bVar1 = rd8((uint32_t)pbVar3);
            bVar6 = bVar1 < rd8((uint32_t)pbVar5);
            if (bVar1 != rd8((uint32_t)pbVar5)) {
    L_1007a128:
              iVar4 = (1 - (CowU32)bVar6) - (CowU32)(bVar6 != 0);
              goto L_1007a12d;
            }
            if (bVar1 == 0) break;
            bVar1 = rd8((uint32_t)(pbVar3 + 1u * (uint32_t)(1)));
            bVar6 = bVar1 < rd8((uint32_t)(pbVar5 + 1u * (uint32_t)(1)));
            if (bVar1 != rd8((uint32_t)(pbVar5 + 1u * (uint32_t)(1)))) goto L_1007a128;
            pbVar3 = pbVar3 + 2;
            pbVar5 = pbVar5 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
    L_1007a12d:
          if (iVar4 == 0) {
            cow_bridge_101ffa20(g, COW_IMG(COW_ADDR_LIFT_1007A141), 2u, (const CowU32[]){ iVar2, 1 }, g->ecx, g->edx, param_3, 0u);
            wr32(COW_IMG(COW_ADDR_LIFT_1047D4C0), '\x01');
          }
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(edx), cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [edi], frame pointer no, 0 locals, pops [edi], ret 0.
   Arguments: 1 register argument(s) [edx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1007a0b0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->edx;   /* edx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->eax = param_3;   /* 0x1007a0b0: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1007a0b4: push edi */
    cow_lift_1007a0b0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 2 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
