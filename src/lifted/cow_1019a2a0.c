/* f_0x1019a2a0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1019a2a0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1019a2a0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 this_00;
    CowU32 uVar1;
    CowU32 uVar2;
    CowU32 piVar3;
    if (rd32((uint32_t)((int)param_1 + 8)) != (CowU32)0x0) {
        cow_bridge_10118f70(g, COW_IMG(COW_ADDR_LIFT_1019A2B4), 1u, (const CowU32[]){ (g->esi + 68u) }, rd32((uint32_t)((int)param_1 + 8)), g->edx, (g->esi + 68u), 0u);
      }
      uVar2 = cow_bridge_101addc0(g, COW_IMG(COW_ADDR_LIFT_1019A2C0), 2u, (const CowU32[]){ 1835102822u, 88u }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)((int)param_1 + 0x18), uVar2);
      uVar2 = cow_bridge_101addc0(g, COW_IMG(COW_ADDR_LIFT_1019A2CF), 2u, (const CowU32[]){ 1835102822u, 89u }, g->ecx, g->edx, g->eax, 16u);
      wr32((uint32_t)((int)param_1 + 0x14), uVar2);
      piVar3 = (CowU32)cow_bridge_10120450(g, COW_IMG(COW_ADDR_LIFT_1019A2E4), 1u, (const CowU32[]){ 272039860u }, COW_IMG(COW_ADDR_LIFT_104E1BF8), g->edx, g->eax, 0u);
      this_00 = rd32((uint32_t)((int)param_1 + 8));
      uVar2 = rd32((uint32_t)(rd32((uint32_t)piVar3) + 0xba4));
      wr32((uint32_t)((int)param_1 + 0x1c), uVar2);
      uVar1 = rd32((uint32_t)(rd32((uint32_t)piVar3) + 0xba8));
      wr32((uint32_t)((int)param_1 + 0x40), 0);
      wr32((uint32_t)((int)param_1 + 0x20), uVar1);
      if (this_00 != (CowU32)0x0) {
        cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_1019A318), 2u, (const CowU32[]){ (((uint32_t)((short)((CowU32)uVar2 >> 0x10)) & 0xffffu) << 16 | ((uint32_t)((int16_t)rd16((uint32_t)((int)param_1 + 0x40)) + 1) & 0xffffu)), 0 }, this_00, g->edx, g->eax, 0u);
        cow_bridge_101186a0(g, COW_IMG(COW_ADDR_LIFT_1019A31F), 0u, (const CowU32[]){ 0u }, this_00, g->edx, g->eax, 0u);
        wr8((uint32_t)((int32_t)rd32((uint32_t)((int)param_1 + 8)) + 0x85), 0);
      }
      cow_bridge_1019a6e0(g, COW_IMG(COW_ADDR_LIFT_1019A330), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      cow_bridge_1019a760(g, COW_IMG(COW_ADDR_LIFT_1019A33F), 2u, (const CowU32[]){ rd32((uint32_t)((int)param_1 + 0x34)), rd32((uint32_t)((int)param_1 + 0x38)) }, param_1, g->edx, g->eax, 0u);
      wr16((uint32_t)((int)param_1 + 0x4c), 1);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1019a2a0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1019a2a0: push esi */
    g->esi = g->ecx;   /* 0x1019a2a1: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1019a2a3: push edi */
    { uint32_t A = (uint32_t)(g->esi + 0x8u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x1019a2a4: register ecx, replayed as the entry ran it */
    cow_lift_1019a2a0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
