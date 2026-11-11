/* f_0x1011bae0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1011bae0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1011bae0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    int iVar3;
    CowU8 local_10[16];
    if (rd32((uint32_t)(param_1 + 0x74)) == 0) {
        cow_bridge_10039810(g, COW_IMG(COW_ADDR_LIFT_1011BAFB), 1u, (const CowU32[]){ 272024100u }, g->ecx, g->edx, g->eax, 0u);
        iVar2 = cow_bridge_1003ac80(g, COW_IMG(COW_ADDR_LIFT_1011BB0B), 1u, (const CowU32[]){ local_10 }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)(param_1 + 0x74), iVar2);
        if (iVar2 == 0) {
          g->eax = (CowU32)(0); return;
        }
      }
      if ((rd8((uint32_t)(param_1 + 0x80)) == '\x01') && (rd32((uint32_t)(param_1 + 0x78)) == 0)) {
        cow_bridge_1011c720(g, COW_IMG(COW_ADDR_LIFT_1011BB30), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      }
      cVar1 = cow_bridge_1011c850(g, COW_IMG(COW_ADDR_LIFT_1011BB37), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if (cVar1 == '\0') {
        iVar2 = rd32((uint32_t)(rd32((uint32_t)(param_1 + 0x74)) + 0x40));
        if (iVar2 == 0) {
          iVar2 = rd32((uint32_t)(rd32((uint32_t)(param_1 + 0x74)) + 0x44));
        }
        cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045666C))) + 0xcu))))) + 0xf4u))), COW_IMG(COW_ADDR_LIFT_1011BB64), 3u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045666C)) + 0xc)), 0, iVar2 }, g->ecx, g->edx, g->eax, 0u);
        g->eax = (CowU32)(1); return;
      }
      iVar2 = rd32((uint32_t)(rd32((uint32_t)(param_1 + 0x78)) + 8));
      iVar3 = rd32((uint32_t)(iVar2 + 0x40));
      if (iVar3 == 0) {
        iVar3 = rd32((uint32_t)(iVar2 + 0x44));
      }
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1045666C))) + 0xcu))))) + 0xf4u))), COW_IMG(COW_ADDR_LIFT_1011BB8D), 3u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1045666C)) + 0xc)), 0, iVar3 }, g->ecx, g->edx, g->eax, 0u);
      g->eax = (CowU32)(1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 16 locals, pops [esi], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1011bae0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 0x10u;                      /* 0x1011bae0: 16 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1011bae3: push esi */
    g->esi = g->ecx;   /* 0x1011bae4: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esi + 0x74u); g->eax = (uint32_t)(rd32(A)); }   /* 0x1011bae6: register eax, replayed as the entry ran it */
    cow_lift_1011bae0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
