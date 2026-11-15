/* f_0x10177d00 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10177d00 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10177d00(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 this_00;
    int iVar1;
    CowU32 puVar2;
    cow_bridge_10074740(g, COW_IMG(COW_ADDR_LIFT_10177D0B), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      iVar1 = 2;
      this_00 = (CowU32)((int)param_1 + 0xa4);
      do {
        cow_bridge_1016fc40(g, COW_IMG(COW_ADDR_LIFT_10177D1D), 0u, (const CowU32[]){ 0u }, this_00, g->edx, g->eax, 0u);
        this_00 = (CowU32)((int)this_00 + 0x78);
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      cow_bridge_10167800(g, COW_IMG(COW_ADDR_LIFT_10177D2E), 0u, (const CowU32[]){ 0u }, (CowU32)((int)param_1 + 0x178), g->edx, g->eax, 0u);
      cow_bridge_101718e0(g, COW_IMG(COW_ADDR_LIFT_10177D39), 0u, (const CowU32[]){ 0u }, (CowU32)((int)param_1 + 0x34330), g->edx, g->eax, 0u);
      cow_bridge_10027990(g, COW_IMG(COW_ADDR_LIFT_10177D44), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10167440(g, COW_IMG(COW_ADDR_LIFT_10177D4F), 0u, (const CowU32[]){ 0u }, (CowU32)((int)param_1 + 0x34428), g->edx, g->eax, 0u);
      cow_bridge_10054fc0(g, COW_IMG(COW_ADDR_LIFT_10177D5A), 0u, (const CowU32[]){ 0u }, (CowU32)((int)param_1 + 0x3959c), g->edx, g->eax, 0u);
      wr32((uint32_t)param_1, COW_IMG(COW_ADDR_LIFT_10336748));
      wr16((uint32_t)((int)param_1 + 0x34), 0);
      wr32((uint32_t)((int)param_1 + 0x58), 0);
      wr32((uint32_t)((int)param_1 + 0x5c), 0);
      puVar2 = (CowU32)((int)param_1 + 0x60);
      for (iVar1 = 0x3c; iVar1 != 0; iVar1 = iVar1 + -1) {
        wr32((uint32_t)puVar2, 0);
        puVar2 = puVar2 + 4u * (uint32_t)(1);
      }
      puVar2 = (CowU32)((int)param_1 + 0x37508);
      for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
        wr32((uint32_t)puVar2, 0);
        puVar2 = puVar2 + 4u * (uint32_t)(1);
      }
      wr32((uint32_t)((int)param_1 + 0x54), 0);
      wr32((uint32_t)((int)param_1 + 0x150), 1);
      wr32((uint32_t)((int)param_1 + 0x154), 0);
      wr32((uint32_t)((int)param_1 + 0x39454), 0);
      wr32((uint32_t)((int)param_1 + 0x39458), 0);
      wr32((uint32_t)((int)param_1 + 0x39498), 0);
      wr32((uint32_t)((int)param_1 + 0x3946c), 0);
      wr32((uint32_t)((int)param_1 + 0x39470), 0);
      wr32((uint32_t)((int)param_1 + 0x39474), 0);
      wr32((uint32_t)((int)param_1 + 0x39478), 0);
      wr32((uint32_t)((int)param_1 + 0x3947c), 0);
      wr32((uint32_t)((int)param_1 + 0x39494), 0);
      wr32((uint32_t)((int)param_1 + 0x158), 0);
      wr32((uint32_t)((int)param_1 + 0x3944c), 0);
      wr32((uint32_t)((int)param_1 + 0x39450), 0);
      wr32((uint32_t)((int)param_1 + 0x38e54), 0);
      wr32((uint32_t)((int)param_1 + 0x38e50), 0);
      wr32((uint32_t)((int)param_1 + 0x38e4c), 0);
      wr32((uint32_t)((int)param_1 + 0x38e48), 0);
      wr32((uint32_t)((int)param_1 + 0x38e40), 0);
      wr32((uint32_t)((int)param_1 + 0x38e3c), 0);
      wr32((uint32_t)((int)param_1 + 0x38e38), 0);
      wr32((uint32_t)((int)param_1 + 0x38e34), 0);
      wr32((uint32_t)((int)param_1 + 0x38e2c), 0);
      wr32((uint32_t)((int)param_1 + 0x38e28), 0);
      wr32((uint32_t)((int)param_1 + 0x38e24), 0);
      wr32((uint32_t)((int)param_1 + 0x38e20), 0);
      wr32((uint32_t)((int)param_1 + 0x38e58), 0x3f800000);
      wr32((uint32_t)((int)param_1 + 0x38e44), 0x3f800000);
      wr32((uint32_t)((int)param_1 + 0x38e30), 0x3f800000);
      wr32((uint32_t)((int)param_1 + 0x38e1c), 0x3f800000);
      cow_bridge_101784e0(g, COW_IMG(COW_ADDR_LIFT_10177E4C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, 0u, 0u);
      wr32((uint32_t)((int)param_1 + 0x38), 0);
      wr32((uint32_t)((int)param_1 + 0x17c), 0xffffffff);
      wr32((uint32_t)((int)param_1 + 0x3c), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065C5D8), 0);
      wr32((uint32_t)((int)param_1 + 0x40), 0);
      wr32((uint32_t)((int)param_1 + 0x44), 0);
      wr32((uint32_t)((int)param_1 + 0x48), 0);
      wr32((uint32_t)((int)param_1 + 0x50), 0);
      wr32((uint32_t)((int)param_1 + 0x174), 0);
      wr32((uint32_t)((int)param_1 + 0x3942c), 0);
      wr32((uint32_t)((int)param_1 + 0x39430), 0);
      wr32((uint32_t)((int)param_1 + 0x39438), 0);
      wr32((uint32_t)((int)param_1 + 0x3943c), 0);
      wr32((uint32_t)((int)param_1 + 0x39440), 0);
      wr32((uint32_t)((int)param_1 + 0x39444), 0);
      wr32((uint32_t)((int)param_1 + 0x38d90), 0);
      wr32((uint32_t)((int)param_1 + 0x39130), 0);
      wr32((uint32_t)((int)param_1 + 0x39448), 0);
      wr32((uint32_t)((int)param_1 + 0x39420), 0);
      wr32((uint32_t)((int)param_1 + 0x343e4), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_10376EE8), 1);
      wr32((uint32_t)((int)param_1 + 0x15c), 0);
      wr32((uint32_t)((int)param_1 + 0x3949c), 0);
      wr32((uint32_t)((int)param_1 + 0x16c), 0x40000000);
      wr32((uint32_t)((int)param_1 + 0x170), 0x40000000);
      wr32((uint32_t)((int)param_1 + 0x38d94), 0);
      wr8((uint32_t)((int)param_1 + 0x38d98), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_10632038), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_10631F18), 8);
      wr32(COW_IMG(COW_ADDR_LIFT_1065C4D0), 0xf);
      wr32(COW_IMG(COW_ADDR_LIFT_10631C88), 0xf);
      wr32(COW_IMG(COW_ADDR_LIFT_10621C00), 0);
      wr32((uint32_t)((int)param_1 + 0x3954c), 0x3f800000);
      puVar2 = COW_IMG(COW_ADDR_LIFT_10621C88);
      for (iVar1 = 0x4000; iVar1 != 0; iVar1 = iVar1 + -1) {
        wr32((uint32_t)puVar2, 0);
        puVar2 = puVar2 + 4u * (uint32_t)(1);
      }
      puVar2 = COW_IMG(COW_ADDR_LIFT_10631F38);
      for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
        wr32((uint32_t)puVar2, 0);
        puVar2 = puVar2 + 4u * (uint32_t)(1);
      }
      wr32(COW_IMG(COW_ADDR_LIFT_10621C80), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_10621C7C), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065C4D4), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_1065C4CC), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_10621C70), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_10621C74), 0);
      wr32(COW_IMG(COW_ADDR_LIFT_10621C78), 0);
      wr32((uint32_t)((int)param_1 + 0x394a4), 1);
      cow_bridge_10177fa0(g, COW_IMG(COW_ADDR_LIFT_10177F5F), 0u, (const CowU32[]){ 0u }, param_1, g->edx, 0u, 0u);
      wr8((uint32_t)((int)param_1 + 0x39598), 1);
      wr32((uint32_t)((int)param_1 + 0x39590), 0x399d4952);
      wr32((uint32_t)((int)param_1 + 0x39594), 0x399d4952);
      g->eax = (CowU32)(param_1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10177d00(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10177d00: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10177d01: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10177d02: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10177d03: push edi */
    g->esi = g->ecx;   /* 0x10177d04: the value the entry loaded and the decompiler dropped */
    cow_lift_10177d00(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
