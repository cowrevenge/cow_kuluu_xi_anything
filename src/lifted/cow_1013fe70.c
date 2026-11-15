/* f_0x1013fe70 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1013fe70 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1013fe70(Guest* g)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    int iVar3;
    CowU32 uVar4;
    int iVar5;
    CowU32 uVar6;
    iVar2 = cow_bridge_101598b0(g, COW_IMG(COW_ADDR_LIFT_1013FE7F), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if (((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10578484)) + 0x74)) != 0) || ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10578484)) + 0x6c)) != 0)) {
    L_1013ff7f:
        uVar4 = cow_bridge_1013fd30(g, COW_IMG(COW_ADDR_LIFT_1013FF87), 1u, (const CowU32[]){ iVar2 }, g->ecx, g->edx, g->eax, 0u);
        g->eax = (CowU32)(uVar4); return;
      }
      if (iVar2 != 0) {
        if (rd32(COW_IMG(COW_ADDR_LIFT_1057876C)) == (CowU32)0x0) {
          iVar5 = 0;
        }
        else {
          iVar5 = cow_bridge_101598a0(g, COW_IMG(COW_ADDR_LIFT_1013FEB4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        }
        iVar3 = cow_bridge_10081550(g, COW_IMG(COW_ADDR_LIFT_1013FEC0), 0u, (const CowU32[]){ 0u }, 273143296u, g->edx, g->eax, 0u);
        if (iVar5 != iVar3) goto L_1013ff7f;
      }
      cVar1 = cow_bridge_10159440(g, COW_IMG(COW_ADDR_LIFT_1013FEDB), 2u, (const CowU32[]){ 269745264u, 92u }, rd32(COW_IMG(COW_ADDR_LIFT_1057876C)), g->edx, g->eax, 0u);
      if (cVar1 == '\0') {
        cow_bridge_10129e30(g, COW_IMG(COW_ADDR_LIFT_1013FF7A), 1u, (const CowU32[]){ 127u }, g->ecx, g->edx, g->eax, 0u);
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
      }
      cow_bridge_10140850(g, COW_IMG(COW_ADDR_LIFT_1013FEEA), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_101594e0(g, COW_IMG(COW_ADDR_LIFT_1013FEFD), 1u, (const CowU32[]){ 269745376u }, rd32(COW_IMG(COW_ADDR_LIFT_1057876C)), g->edx, g->eax, 0u);
      uVar6 = 2;
      uVar4 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_1013FF08), 3u, (const CowU32[]){ 13u, 10u, 2u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10150cc0(g, COW_IMG(COW_ADDR_LIFT_1013FF17), 1u, (const CowU32[]){ uVar6 }, uVar4, g->edx, g->eax, 0u);
      uVar6 = 2;
      uVar4 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_1013FF22), 3u, (const CowU32[]){ 14u, 45u, 2u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_1013a320(g, COW_IMG(COW_ADDR_LIFT_1013FF31), 1u, (const CowU32[]){ uVar6 }, uVar4, g->edx, g->eax, 0u);
      cow_bridge_1015e6e0(g, COW_IMG(COW_ADDR_LIFT_1013FF4C), 5u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1057823C)) + 8)), 1, 1, 0, 0 }, COW_IMG(COW_ADDR_LIFT_10621838), g->edx, g->eax, 0u);
      cow_bridge_1015e6e0(g, COW_IMG(COW_ADDR_LIFT_1013FF68), 5u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10578170)) + 8)), 1, 1, 0, 0 }, COW_IMG(COW_ADDR_LIFT_10621838), g->edx, g->eax, 0u);
      g->eax = (CowU32)(1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 0 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1013fe70(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */

    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1013fe70: push ebx */
    g->ebx = g->ecx;   /* 0x1013fe71: the value the entry loaded and the decompiler dropped */
    g->ecx = rd32(COW_IMG(COW_ADDR_LIFT_1057876C));   /* 0x1013fe73: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1013fe79: push edi */
    cow_lift_1013fe70(g);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
