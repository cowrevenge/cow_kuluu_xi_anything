/* f_0x10205e70 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10205e70 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10205e70(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    char cVar2;
    CowU32 piVar3;
    piVar3 = (CowU32)cow_bridge_101c8c30(g, COW_IMG(COW_ADDR_LIFT_10205E7B), 1u, (const CowU32[]){ 1u }, param_1, g->edx, g->eax, 0u);
      cVar2 = cow_bridge_100e47c0(g, COW_IMG(COW_ADDR_LIFT_10205E84), 1u, (const CowU32[]){ 11u }, g->ecx, g->edx, g->eax, 8u);
      if (cVar2 == '\0') {
        uVar1 = rd32((uint32_t)(rd32((uint32_t)piVar3) + 0xc28));
        wr8((uint32_t)(param_1 + 0x2c), 0);
        cow_bridge_1011ae50(g, COW_IMG(COW_ADDR_LIFT_10205EA2), 2u, (const CowU32[]){ 0xb, uVar1 }, rd32((uint32_t)(param_1 + 8)), g->edx, g->eax, 0u);
        return;
      }
      uVar1 = rd32((uint32_t)(rd32((uint32_t)piVar3) + 0xc30));
      wr8((uint32_t)(param_1 + 0x2c), 1);
      cow_bridge_1011ae50(g, COW_IMG(COW_ADDR_LIFT_10205EBE), 2u, (const CowU32[]){ 0xb, uVar1 }, rd32((uint32_t)(param_1 + 8)), g->edx, g->eax, 0u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 1 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 4.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10205e70(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10205e70: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10205e71: push edi */
    cow_lift_10205e70(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
