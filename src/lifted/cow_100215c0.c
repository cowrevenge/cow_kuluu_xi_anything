/* f_0x100215c0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100215c0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100215c0(Guest* g, CowU32 param_1, int32_t param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    int iVar2;
    CowU32 uVar3;
    CowU8 auStack_4c[12];
    CowU8 local_40[64];
    cow_bridge_10027990(g, COW_IMG(COW_ADDR_LIFT_100215D0), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_100279b0(g, COW_IMG(COW_ADDR_LIFT_100215D9), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      puVar1 = (CowU32)cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_3)) + 0x1c0u))), COW_IMG(COW_ADDR_LIFT_100215E7), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10027b80(g, COW_IMG(COW_ADDR_LIFT_100215F3), 1u, (const CowU32[]){ rd32((uint32_t)puVar1) }, g->ecx, g->edx, g->eax, 0u);
      iVar2 = cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_3)) + 0x1c0u))), COW_IMG(COW_ADDR_LIFT_100215FD), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10027bd0(g, COW_IMG(COW_ADDR_LIFT_1002160A), 1u, (const CowU32[]){ rd32((uint32_t)(iVar2 + 4)) }, g->ecx, g->edx, g->eax, 0u);
      iVar2 = cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_3)) + 0x1c0u))), COW_IMG(COW_ADDR_LIFT_10021614), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10027c20(g, COW_IMG(COW_ADDR_LIFT_10021621), 1u, (const CowU32[]){ rd32((uint32_t)(iVar2 + 8)) }, g->ecx, g->edx, g->eax, 0u);
      uVar3 = cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_3)) + 0x1bcu))), COW_IMG(COW_ADDR_LIFT_1002162B), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10027cf0(g, COW_IMG(COW_ADDR_LIFT_10021635), 1u, (const CowU32[]){ uVar3 }, local_40, g->edx, g->eax, 0u);
      cow_bridge_100283c0(g, COW_IMG(COW_ADDR_LIFT_1002163E), 0u, (const CowU32[]){ 0u }, local_40, g->edx, g->eax, 0u);
      cow_bridge_10026eb0(g, COW_IMG(COW_ADDR_LIFT_1002164C), 2u, (const CowU32[]){ auStack_4c, (int)param_1 + 0x44 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10028230(g, COW_IMG(COW_ADDR_LIFT_10021662), 2u, (const CowU32[]){ param_2, auStack_4c }, local_40, g->edx, g->eax, 0u);
      wr32((uint32_t)(param_2 + 0xc), 0x3f800000);
      cow_bridge_100279a0(g, COW_IMG(COW_ADDR_LIFT_10021672), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 76 locals, pops [edi, esi], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100215c0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 0x4cu;                      /* 0x100215c0: 76 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100215c3: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100215c4: push edi */
    g->edi = g->ecx;   /* 0x100215c5: the value the entry loaded and the decompiler dropped */
    { g->ecx = (uint32_t)((uint32_t)(g->esp + 0x14u)); }   /* 0x100215c7: register ecx, replayed as the entry ran it */
    cow_lift_100215c0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
