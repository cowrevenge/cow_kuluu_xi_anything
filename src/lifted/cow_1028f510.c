/* f_0x1028f510 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1028f510 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1028f510(Guest* g, int32_t param_1, int32_t param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 piVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    CowU32 local_8;
    int local_4;
    iVar5 = 0;
      iVar4 = 0;
      local_4 = 0;
      if (((int32_t)(0) < (int32_t)((int32_t)rd32((uint32_t)(param_2 + 0x20))))) {
        local_8 = (CowU32)(param_2 + 0x24);
        iVar3 = iVar5;
        do {
          piVar1 = (CowU32)((int32_t)rd32((uint32_t)(param_1 + 0x24)) + rd32((uint32_t)local_8) * 0xc);
          iVar2 = rd32((uint32_t)piVar1);
          iVar5 = iVar3;
          if ((int8_t)rd8((uint32_t)(rd32((uint32_t)local_8) + (int32_t)rd32((uint32_t)(param_1 + 0x28)))) != '\0') {
            if ((int32_t)rd32((uint32_t)(iVar2 + 0x30)) == 0) {
              iVar5 = iVar3 + 1;
            }
            else {
              iVar3 = iVar4;
              iVar4 = iVar4 + 1;
            }
            if ((iVar3 < 4) && (-1 < iVar3)) {
              cow_bridge_10283280(g, COW_IMG(COW_ADDR_LIFT_1028F57C), 2u, (const CowU32[]){ iVar3, (CowU32)((int32_t)rd32((uint32_t)(iVar2 + 0x30)) == 0) }, g->ecx, g->edx, g->eax, 0u);
              cow_bridge_1026e3f0(g, COW_IMG(COW_ADDR_LIFT_1028F582), 1u, (const CowU32[]){ iVar2 }, g->ecx, g->edx, g->eax, 0u);
              cow_bridge_10283dc0(g, COW_IMG(COW_ADDR_LIFT_1028F58B), 1u, (const CowU32[]){ rd32((uint32_t)(piVar1 + 4u * (uint32_t)(1))) }, g->ecx, g->edx, g->eax, 0u);
              cow_bridge_10283e00(g, COW_IMG(COW_ADDR_LIFT_1028F594), 1u, (const CowU32[]){ rd32((uint32_t)(iVar2 + 0x24)) }, g->ecx, g->edx, g->eax, 0u);
              cow_bridge_10283320(g, COW_IMG(COW_ADDR_LIFT_1028F59B), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 0u);
            }
          }
          local_4 = local_4 + 1;
          local_8 = local_8 + 4u * (uint32_t)(1);
          iVar3 = iVar5;
        } while (((int32_t)(local_4) < (int32_t)((int32_t)rd32((uint32_t)(param_2 + 0x20)))));
        if (3 < iVar4) goto joined_r0x1028f5e3;
      }
      do {
        cow_bridge_10283280(g, COW_IMG(COW_ADDR_LIFT_1028F5D0), 2u, (const CowU32[]){ iVar4, 0 }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10283320(g, COW_IMG(COW_ADDR_LIFT_1028F5D7), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 12u);
        iVar4 = iVar4 + 1;
      } while (iVar4 < 4);
    joined_r0x1028f5e3:
      for (; iVar5 < 4; iVar5 = iVar5 + 1) {
        cow_bridge_10283280(g, COW_IMG(COW_ADDR_LIFT_1028F5ED), 2u, (const CowU32[]){ iVar5, 1 }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10283320(g, COW_IMG(COW_ADDR_LIFT_1028F5F4), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 12u);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 8 locals, pops [ebp, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1028f510(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 0x8u;                      /* 0x1028f510: 8 bytes of locals */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->edx = (uint32_t)(rd32(A)); }   /* 0x1028f513: register edx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1028f517: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1028f518: push ebp */
    g->ebp = 0u;   /* 0x1028f519: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->edx + 0x20u); g->eax = (uint32_t)(rd32(A)); }   /* 0x1028f51b: register eax, replayed as the entry ran it */
    g->ebx = 0u;   /* 0x1028f51e: the value the entry loaded and the decompiler dropped */
    cow_lift_1028f510(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
