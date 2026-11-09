/* f_0x10081600 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10081600 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10081600(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    iVar2 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(rd32((uint32_t)(param_1 + 4)))));
      if ((iVar2 != 0) && (rd8((uint32_t)(param_1 + 0xb)) != '\x04')) {
        if (((rd32((uint32_t)(iVar2 + 0x120)) >> 9 & 1) != 0) &&
           (rd32((uint32_t)(iVar2 + 0x78)) == rd32((uint32_t)(param_1 + 8)))) {
          g->eax = (CowU32)(rd32((uint32_t)(iVar2 + 0xa0))); return;
        }
        iVar2 = 0;
        do {
          iVar1 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(iVar2)));
          if ((((iVar1 != 0) && ((rd32((uint32_t)(iVar1 + 0x120)) >> 9 & 1) != 0)) &&
              (rd32((uint32_t)(iVar1 + 0x78)) != 0x4000000)) &&
             (rd32((uint32_t)(iVar1 + 0x78)) == rd32((uint32_t)(param_1 + 8)))) {
            cow_bridge_10081530(g, COW_IMG(COW_ADDR_LIFT_1008169F), 2u, (const CowU32[]){ rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(iVar2))) + 0x74)), rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(iVar2))) + 0x78)) }, g->ecx, g->edx, g->eax, 0u);
            g->eax = (CowU32)(rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(rd32((uint32_t)(param_1 + 4))))) + 0xa0))); return;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < 0x900);
        cow_bridge_100814a0(g, COW_IMG(COW_ADDR_LIFT_10081679), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_100814e0(g, COW_IMG(COW_ADDR_LIFT_10081682), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      }
      g->eax = (CowU32)(0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 12 locals, pops [esi], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10081600(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 0xcu;                      /* 0x10081600: 12 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10081603: push esi */
    g->esi = g->ecx;   /* 0x10081604: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esi + 0x4u); g->eax = (uint32_t)(rd32(A)); }   /* 0x10081606: register eax, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->eax * 4 + COW_IMG(COW_ADDR_LIFT_10480AF0) + RD); g->eax = (uint32_t)(rd32(A)); }   /* 0x10081609: register eax, replayed as the entry ran it */
    cow_lift_10081600(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
