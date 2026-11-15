/* f_0x10111a60 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10111a60 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10111a60(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 this_00;
    CowU32 uVar2;
    int iVar3;
    CowU32 piVar4;
    CowU8 local_c[8];
    CowU32 local_4;
    local_4 = 0;
      this_00 = (CowU32)cow_bridge_101085e0(g, COW_IMG(COW_ADDR_LIFT_10111A75), 1u, (const CowU32[]){ 92u }, param_1, g->edx, g->eax, 0u);
      if (this_00 == (CowU32)0x0) {
        iVar3 = 0;
      }
      else {
        wr32((uint32_t)((int)param_1 + 0x20), (int32_t)rd32((uint32_t)((int)param_1 + 0x20)) + 1);
        uVar2 = cow_bridge_10109110(g, COW_IMG(COW_ADDR_LIFT_10111A93), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        iVar3 = cow_bridge_10110680(g, COW_IMG(COW_ADDR_LIFT_10111A9F), 2u, (const CowU32[]){ rd32((uint32_t)((int)param_1 + 0x20)), uVar2 }, this_00, g->edx, g->eax, 0u);
        cow_bridge_101090a0(g, COW_IMG(COW_ADDR_LIFT_10111AB3), 0u, (const CowU32[]){ 0u }, local_c, g->edx, g->eax, 0u);
      }
      if (iVar3 != 0) {
        piVar4 = (CowU32)cow_bridge_101085e0(g, COW_IMG(COW_ADDR_LIFT_10111ABE), 1u, (const CowU32[]){ 12u }, g->ecx, g->edx, g->eax, 4u);
        if (piVar4 == (CowU32)0x0) {
          piVar4 = (CowU32)0x0;
        }
        else {
          wr32((uint32_t)piVar4, iVar3);
          wr32((uint32_t)(piVar4 + 4u * (uint32_t)(2)), 0);
          wr32((uint32_t)(piVar4 + 4u * (uint32_t)(1)), 0);
        }
        iVar1 = (int32_t)rd32((uint32_t)((int)param_1 + 0x3c));
        wr32((uint32_t)(piVar4 + 4u * (uint32_t)(2)), (int)param_1 + 0x38);
        wr32((uint32_t)(piVar4 + 4u * (uint32_t)(1)), iVar1);
        if (iVar1 != 0) {
          wr32((uint32_t)(iVar1 + 8), piVar4);
        }
        if (rd32((uint32_t)(piVar4 + 4u * (uint32_t)(2))) != 0) {
          wr32((uint32_t)(rd32((uint32_t)(piVar4 + 4u * (uint32_t)(2))) + 4), piVar4);
        }
        wr16((uint32_t)((int)param_1 + 0x2a), (int16_t)rd16((uint32_t)((int)param_1 + 0x2a)) + 1);
      }
      g->eax = (CowU32)(iVar3); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 12 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10111a60(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->esp -= 0xcu;                      /* 0x10111a60: 12 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10111a63: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10111a64: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10111a65: push edi */
    g->ebx = 0u;   /* 0x10111a66: the value the entry loaded and the decompiler dropped */
    cow_lift_10111a60(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
