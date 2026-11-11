/* f_0x100a3800 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100a3800 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100a3800(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    short sVar2;
    int iVar3;
    CowU32 puVar4;
    int iVar5;
    sVar2 = cow_bridge_100e3730(g, COW_IMG(COW_ADDR_LIFT_100A3806), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)param_2, 0);
      if (sVar2 != 0) {
        iVar5 = 0;
        iVar3 = cow_bridge_101cc4f0(g, COW_IMG(COW_ADDR_LIFT_100A3821), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (iVar3 != 0) {
          cVar1 = rd8((uint32_t)(iVar3 + 0x1ff));
          if (cVar1 == '\x02') {
            iVar5 = 1;
          }
          else if (cVar1 == '\x03') {
            iVar5 = 2;
          }
          else if (cVar1 == '\x04') {
            iVar5 = 3;
          }
        }
        wr32((uint32_t)param_5, 0x80806060);
        g->eax = (CowU32)((g->eax & 0xffff0000u) | ((CowU32)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1035BA98) + 4u * (uint32_t)(iVar5)))) & 0xffffu)); return;
      }
      cVar1 = cow_bridge_100e9730(g, COW_IMG(COW_ADDR_LIFT_100A3875), 4u, (const CowU32[]){ param_2, param_3, param_4, param_1 }, g->ecx, g->edx, g->eax, 16u);
      if (cVar1 == '\0') {
        wr32((uint32_t)param_5, 0x80808080);
        puVar4 = (CowU32)cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_100A38A9), 2u, (const CowU32[]){ 12u, 85u }, g->ecx, g->edx, g->eax, 8u);
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(puVar4) & 0xffu)); return;
      }
      wr32((uint32_t)param_5, 0x80806060);
      puVar4 = (CowU32)cow_bridge_101c8fb0(g, COW_IMG(COW_ADDR_LIFT_100A3891), 1u, (const CowU32[]){ rd32((uint32_t)param_2) + 9 }, g->ecx, g->edx, g->eax, 4u);
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(puVar4) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 5 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 0 register argument(s) [-], 5 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100a3800(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100a3800: push esi */
    cow_lift_100a3800(g, param_1, param_2, param_3, param_4, param_5);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
