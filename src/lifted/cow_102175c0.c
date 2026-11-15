/* f_0x102175c0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102175c0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102175c0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU32 puVar2;
    int iVar3;
    CowU32 this_00;
    CowU32 puVar4;
    cow_bridge_10126320(g, COW_IMG(COW_ADDR_LIFT_102175CD), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)param_1, COW_IMG(COW_ADDR_LIFT_10333360));
      wr16((uint32_t)((int)param_1 + 0xe), 0xffff);
      wr32((uint32_t)((int)param_1 + 8), 0);
      wr8((uint32_t)((int)param_1 + 0xc), 1);
      cow_bridge_1021b330(g, COW_IMG(COW_ADDR_LIFT_102175EC), 0u, (const CowU32[]){ 0u }, (CowU32)((int)param_1 + 0x52), g->edx, g->eax, 0u);
      cow_bridge_1021b330(g, COW_IMG(COW_ADDR_LIFT_102175F4), 0u, (const CowU32[]){ 0u }, (CowU32)((int)param_1 + 0x60), g->edx, g->eax, 0u);
      this_00 = (CowU32)((int)param_1 + 0x6e);
      iVar3 = 0x20;
      do {
        cow_bridge_1021b330(g, COW_IMG(COW_ADDR_LIFT_10217603), 0u, (const CowU32[]){ 0u }, this_00, g->edx, g->eax, 0u);
        this_00 = (CowU32)((int)this_00 + 0xe);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      cow_bridge_1021b330(g, COW_IMG(COW_ADDR_LIFT_10217614), 0u, (const CowU32[]){ 0u }, (CowU32)((int)param_1 + 0x22e), g->edx, g->eax, 0u);
      cow_bridge_1021b330(g, COW_IMG(COW_ADDR_LIFT_1021761F), 0u, (const CowU32[]){ 0u }, (CowU32)((int)param_1 + 0x23c), g->edx, g->eax, 0u);
      cow_bridge_1021b330(g, COW_IMG(COW_ADDR_LIFT_1021762A), 0u, (const CowU32[]){ 0u }, (CowU32)((int)param_1 + 0x24a), g->edx, g->eax, 0u);
      wr32((uint32_t)param_1, COW_IMG(COW_ADDR_LIFT_1033BD58));
      wr8((uint32_t)((int)param_1 + 0x2c0), 0);
      puVar4 = (CowU32)((int)param_1 + 0x2c4);
      for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
        wr32((uint32_t)puVar4, 0);
        puVar4 = puVar4 + 4u * (uint32_t)(1);
      }
      iVar3 = (int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10456A28)) + 8));
      uVar1 = rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10456A28)) + 0x18)) >> 7 & 1;
      if ((((uVar1 == 0) || ((iVar3 != 2 && (iVar3 != 3)))) && (iVar3 == 2)) ||
         ((uVar1 == 0 && (iVar3 == 3)))) {
        puVar2 = (CowU32)((int)param_1 + 0x7a);
        iVar3 = 0x20;
        do {
          wr8((uint32_t)puVar2, 1);
          puVar2 = puVar2 + 0xe;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        wr8((uint32_t)((int)param_1 + 0x5e), 1);
        wr8((uint32_t)((int)param_1 + 0x6c), 1);
        wr8((uint32_t)((int)param_1 + 0x23a), 1);
        wr8((uint32_t)((int)param_1 + 0x248), 1);
        wr8((uint32_t)((int)param_1 + 0x256), 1);
      }
      g->eax = (CowU32)(param_1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102175c0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102175c0: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102175c1: push esi */
    g->esi = g->ecx;   /* 0x102175c2: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102175c4: push edi */
    { g->ecx = (uint32_t)((uint32_t)(g->esi + 0x4u)); }   /* 0x102175c5: register ecx, replayed as the entry ran it */
    cow_lift_102175c0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
