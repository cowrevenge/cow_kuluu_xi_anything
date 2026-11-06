/* f_0x10028460 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10028460 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10028460(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU32 puVar2;
    CowU32 puVar3;
    int iVar4;
    int iVar5;
    CowU32 auStack_40[16];
    puVar2 = auStack_40;
      iVar4 = 4;
      do {
        iVar5 = 4;
        puVar3 = param_1;
        do {
          uVar1 = rd32((uint32_t)puVar3);
          puVar3 = puVar3 + 4;
          wr32((uint32_t)puVar2, uVar1);
          puVar2 = puVar2 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        param_1 = param_1 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      cow_bridge_100279f0(g, COW_IMG(COW_ADDR_LIFT_10028496), 1u, (const CowU32[]){ auStack_40 }, g->ecx, g->edx, g->eax, 0u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 64 locals, pops [-], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10028460(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 0x40u;                      /* 0x10028460: 64 bytes of locals */
    { g->eax = (uint32_t)((uint32_t)(g->esp)); }   /* 0x10028463: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10028467: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10028468: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10028469: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1002846a: push edi */
    g->edi = g->ecx;   /* 0x1002846b: the value the entry loaded and the decompiler dropped */
    cow_lift_10028460(g, param_1);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
