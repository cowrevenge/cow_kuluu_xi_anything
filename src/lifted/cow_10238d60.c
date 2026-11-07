/* f_0x10238d60 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10238d60 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10238d60(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU32 pcVar2;
    if (rd32((uint32_t)(param_1 + 0x14)) != 1) {
        switch(param_2) {
        case 3:
          cow_bridge_101c6920(g, COW_IMG(COW_ADDR_LIFT_10238DF2), 1u, (const CowU32[]){ 5u }, g->ecx, g->edx, g->eax, 0u);
          return;
        case 4:
          cow_bridge_101c6920(g, COW_IMG(COW_ADDR_LIFT_10238E04), 1u, (const CowU32[]){ 4u }, g->ecx, g->edx, g->eax, 0u);
          break;
        case 5:
          cow_bridge_101c68a0(g, COW_IMG(COW_ADDR_LIFT_10238D95), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          wr32((uint32_t)(param_1 + 0x28), 1);
          wr32((uint32_t)(param_1 + 0x14), 1);
          cow_bridge_10037b90(g, COW_IMG(COW_ADDR_LIFT_10238DA0), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          return;
        case 6:
          cow_bridge_101c68a0(g, COW_IMG(COW_ADDR_LIFT_10238DB0), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          pcVar2 = COW_IMG(COW_ADDR_LIFT_103D3C84);
          do {
            cVar1 = rd8((uint32_t)pcVar2);
            wr8((uint32_t)(pcVar2 + 1u * (uint32_t)(param_1 + -0x103d3c6c)), cVar1);
            pcVar2 = pcVar2 + 1;
          } while (cVar1 != '\0');
          cow_bridge_101c5f30(g, COW_IMG(COW_ADDR_LIFT_10238DD1), 1u, (const CowU32[]){ 272448644u }, g->ecx, g->edx, g->eax, 0u);
          wr32((uint32_t)(param_1 + 0x28), 0xffffffff);
          wr32((uint32_t)(param_1 + 0x14), 1);
          cow_bridge_10037bf0(g, COW_IMG(COW_ADDR_LIFT_10238DE0), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          return;
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 8.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10238d60(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10238d60: push esi */
    g->esi = g->ecx;   /* 0x10238d61: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10238d63: push edi */
    g->edi = 1u;   /* 0x10238d64: the value the entry loaded and the decompiler dropped */
    cow_lift_10238d60(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
