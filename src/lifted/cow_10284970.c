/* f_0x10284970 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10284970 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10284970(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 uVar2;
    int iVar3;
    CowU32 pbVar4;
    CowU32 local_40[16];
    _Bool bVar5;
      
      iVar1 = 0;
      bVar5 = (rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xa30)) & 1) != 0;
      if (bVar5) {
        local_40[0] = 0x20000000;
        local_40[1] = 0x40020000;
        iVar1 = 2;
      }
      uVar2 = (CowU32)bVar5;
      if ((rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xa30)) & 2) != 0) {
        local_40[iVar1] = uVar2 | 0x20000000;
        uVar2 = uVar2 + 1;
        local_40[iVar1 + 1] = 0x40020003;
        iVar1 = iVar1 + 2;
      }
      iVar3 = 0;
      if (((int32_t)(0) < (int32_t)(rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xb18)))) + 1) {
        pbVar4 = (CowU32)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xa34);
        do {
          if ((rd8((uint32_t)pbVar4) & 4) != 0) {
            local_40[iVar1] = uVar2 | 0x20000000;
            uVar2 = uVar2 + 1;
            local_40[iVar1 + 1] = iVar3 + 7U | 0x40010000;
            iVar1 = iVar1 + 2;
          }
          iVar3 = iVar3 + 1;
          pbVar4 = pbVar4 + 4;
        } while (((int32_t)(iVar3) < (int32_t)(rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xb18)))) + 1);
      }
      if ((rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xa30)) & 0x10) != 0) {
        local_40[iVar1] = uVar2 | 0x20000000;
        uVar2 = uVar2 + 1;
        local_40[iVar1 + 1] = 0x4002000f;
        iVar1 = iVar1 + 2;
      }
      if (((rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xa34)) & 8) != 0) ||
         (((rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xa38)) & 8) != 0 && (((int32_t)(0) < (int32_t)(rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1099D200)) + 0xb18)))))))) {
        local_40[iVar1] = uVar2 | 0x20000000;
        local_40[iVar1 + 1] = 0x40040005;
        iVar1 = iVar1 + 2;
      }
      local_40[iVar1] = 0xffffffff;
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1066941C))))) + 0x12cu))), COW_IMG(COW_ADDR_LIFT_10284A7E), 5u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_1066941C)), local_40, 0, param_1, 0 }, g->ecx, g->edx, 0u, 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1066941C))))) + 0x130u))), COW_IMG(COW_ADDR_LIFT_10284A8F), 2u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_1066941C)), rd32((uint32_t)param_1) }, g->ecx, g->edx, 0u, 0u);
      wr32(COW_IMG(COW_ADDR_LIFT_109A2740), 1);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 64 locals, pops [-], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10284970(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 0x40u;                      /* 0x10284970: 64 bytes of locals */
    g->eax = 0u;   /* 0x10284973: the value the entry loaded and the decompiler dropped */
    g->ecx = 0u;   /* 0x10284975: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10284977: push esi */
    g->esi = rd32(COW_IMG(COW_ADDR_LIFT_1099D200));   /* 0x10284978: the value the entry loaded and the decompiler dropped */
    cow_lift_10284970(g, param_1);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
