/* f_0x100f1c40 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100f1c40 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100f1c40(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    short sVar1;
    CowU32 pvVar2;
    CowU32 uVar3;
    cow_bridge_100f1e70(g, COW_IMG(COW_ADDR_LIFT_100F1C49), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      wr8((uint32_t)((int)param_1 + 7), (int8_t)rd8((uint32_t)((int)param_1 + 7)) + '\x01');
      pvVar2 = rd32((uint32_t)((int)param_1 + 0x28));
      if (pvVar2 != (CowU32)0x0) {
        sVar1 = (int16_t)rd16((uint32_t)((int)pvVar2 + 0x1058));
        while ((sVar1 != 0 && (uVar3 = cow_bridge_100f2c80(g, COW_IMG(COW_ADDR_LIFT_100F1C6A), 1u, (const CowU32[]){ 1u }, pvVar2, g->edx, g->eax, 0u), (char)uVar3 == '\0'))) {
          if ((char)param_2 == '\0') {
            g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(uVar3 & 0xffffff00) & 0xffu)); return;
          }
          pvVar2 = rd32((uint32_t)((int)param_1 + 0x28));
          sVar1 = (int16_t)rd16((uint32_t)((int)pvVar2 + 0x1058));
        }
        wr32((uint32_t)((int)param_1 + 0x28), 0);
      }
      pvVar2 = rd32((uint32_t)((int)param_1 + 0x20));
      if (pvVar2 != (CowU32)0x0) {
        cow_bridge_100f2a40(g, COW_IMG(COW_ADDR_LIFT_100F1C92), 0u, (const CowU32[]){ 0u }, pvVar2, g->edx, g->eax, 0u);
        cow_bridge_10311bf0(g, COW_IMG(COW_ADDR_LIFT_100F1C98), 1u, (const CowU32[]){ pvVar2 }, g->ecx, g->edx, g->eax, 4u);
      }
      pvVar2 = rd32((uint32_t)((int)param_1 + 0x24));
      wr32((uint32_t)((int)param_1 + 0x20), 0);
      if (pvVar2 != (CowU32)0x0) {
        cow_bridge_100f2a40(g, COW_IMG(COW_ADDR_LIFT_100F1CAC), 0u, (const CowU32[]){ 0u }, pvVar2, g->edx, g->eax, 0u);
        cow_bridge_10311bf0(g, COW_IMG(COW_ADDR_LIFT_100F1CB2), 1u, (const CowU32[]){ pvVar2 }, g->ecx, g->edx, g->eax, 4u);
      }
      pvVar2 = rd32((uint32_t)((int)param_1 + 0x1c));
      wr32((uint32_t)((int)param_1 + 0x24), 0);
      if (pvVar2 != (CowU32)0x0) {
        cow_bridge_100f2a40(g, COW_IMG(COW_ADDR_LIFT_100F1CC6), 0u, (const CowU32[]){ 0u }, pvVar2, g->edx, g->eax, 0u);
        cow_bridge_10311bf0(g, COW_IMG(COW_ADDR_LIFT_100F1CCC), 1u, (const CowU32[]){ pvVar2 }, g->ecx, g->edx, g->eax, 4u);
      }
      wr32((uint32_t)((int)param_1 + 0x1c), 0);
      wr16((uint32_t)((int)param_1 + 0x18), 0);
      wr8((uint32_t)((int)param_1 + 7), 0);
      pvVar2 = rd32(COW_IMG(COW_ADDR_LIFT_104DF908));
      if (param_1 == rd32(COW_IMG(COW_ADDR_LIFT_104DF908))) {
        wr32(COW_IMG(COW_ADDR_LIFT_104DF908), (CowU32)0x0);
      }
      g->eax = (CowU32)((((uint32_t)(((CowU32)pvVar2 >> 8)) & 0xffffffu) << 8 | ((uint32_t)(1) & 0xffu))); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100f1c40(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100f1c40: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100f1c41: push esi */
    g->esi = g->ecx;   /* 0x100f1c42: the value the entry loaded and the decompiler dropped */
    cow_lift_100f1c40(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 2 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
