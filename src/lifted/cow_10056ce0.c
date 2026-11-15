/* f_0x10056ce0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10056ce0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10056ce0(Guest* g, CowU32 param_1, int32_t param_2, int32_t param_3, CowU32 param_4, CowU32 param_5)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU32 this_00;
    int iVar2;
    this_00 = (CowU32)cow_bridge_10028fd0(g, COW_IMG(COW_ADDR_LIFT_10056CF2), 3u, (const CowU32[]){ 330u, 4u, 0u }, param_1, g->edx, g->eax, 0u);
      cow_bridge_100748f0(g, COW_IMG(COW_ADDR_LIFT_10056CFE), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      wr32(COW_IMG(COW_ADDR_LIFT_1047D13C), 1);
      if (this_00 == (CowU32)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = cow_bridge_10057270(g, COW_IMG(COW_ADDR_LIFT_10056D1B), 3u, (const CowU32[]){ param_1, param_5, param_4 }, this_00, g->edx, g->eax, 0u);
      }
      uVar1 = rd32((uint32_t)((int)param_1 + 0x74));
      wr32((uint32_t)(iVar2 + 0x8c), uVar1);
      wr32((uint32_t)(iVar2 + 0x88), uVar1);
      if ((param_2 == 0) || ((int32_t)rd32((uint32_t)(param_2 + 0x70)) == 0)) {
        wr32((uint32_t)(iVar2 + 0x18), 0);
      }
      else {
        wr32((uint32_t)(iVar2 + 0x18), rd32((uint32_t)((int32_t)rd32((uint32_t)(param_2 + 0x70)) + 0x78)));
      }
      wr32((uint32_t)(iVar2 + 0x1c), 0x4d730000);
      if (param_2 != 0) {
        cow_bridge_10062830(g, COW_IMG(COW_ADDR_LIFT_10056D61), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, g->eax, 0u);
      }
      if (param_3 != 0) {
        cow_bridge_10062880(g, COW_IMG(COW_ADDR_LIFT_10056D71), 1u, (const CowU32[]){ param_3 }, g->ecx, g->edx, g->eax, 0u);
      }
      wr32((uint32_t)(iVar2 + 0x94), 0);
      wr32((uint32_t)(iVar2 + 0x98), 0);
      g->eax = (CowU32)(iVar2); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 5 parameter(s), cleanup 16 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 16.
   Arguments: 1 register argument(s) [ecx], 4 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10056ce0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10056ce0: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10056ce1: push edi */
    cow_lift_10056ce0(g, param_1, param_2, param_3, param_4, param_5);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
