/* f_0x10227450 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10227450 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10227450(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU32 uVar2;
    CowU8 local_20[32];
    uVar1 = rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10456A28)) + 8));
      if (((rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10456A28)) + 0x18)) < '\0') && ((uVar1 == 2 || (uVar1 == 3)))) || (uVar1 < 4)) {
        switch(uVar1) {
        case 0:
          cow_bridge_10258c20(g, COW_IMG(COW_ADDR_LIFT_10227490), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10227590(g, COW_IMG(COW_ADDR_LIFT_102274A1), 2u, (const CowU32[]){ local_20, param_2 }, g->ecx, g->edx, g->eax, 0u);
          uVar2 = cow_bridge_10258c50(g, COW_IMG(COW_ADDR_LIFT_102274AA), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_1018d430(g, COW_IMG(COW_ADDR_LIFT_102274B4), 1u, (const CowU32[]){ uVar2 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10258be0(g, COW_IMG(COW_ADDR_LIFT_102274BD), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          return;
        default:
          cow_bridge_102588a0(g, COW_IMG(COW_ADDR_LIFT_102274CD), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10227590(g, COW_IMG(COW_ADDR_LIFT_102274DE), 2u, (const CowU32[]){ local_20, param_2 }, g->ecx, g->edx, g->eax, 0u);
          uVar2 = cow_bridge_10258910(g, COW_IMG(COW_ADDR_LIFT_102274E7), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_1018d430(g, COW_IMG(COW_ADDR_LIFT_102274F1), 1u, (const CowU32[]){ uVar2 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10258860(g, COW_IMG(COW_ADDR_LIFT_102274FA), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          return;
        case 2:
          cow_bridge_102586b0(g, COW_IMG(COW_ADDR_LIFT_1022750A), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10227590(g, COW_IMG(COW_ADDR_LIFT_1022751B), 2u, (const CowU32[]){ local_20, param_2 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10258760(g, COW_IMG(COW_ADDR_LIFT_1022752D), 3u, (const CowU32[]){ param_1, 0xffffffff, 0 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10258650(g, COW_IMG(COW_ADDR_LIFT_10227536), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          return;
        case 3:
          cow_bridge_10258a60(g, COW_IMG(COW_ADDR_LIFT_10227546), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10227590(g, COW_IMG(COW_ADDR_LIFT_10227557), 2u, (const CowU32[]){ local_20, param_2 }, g->ecx, g->edx, g->eax, 0u);
          uVar2 = cow_bridge_10258af0(g, COW_IMG(COW_ADDR_LIFT_10227560), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_1018d430(g, COW_IMG(COW_ADDR_LIFT_1022756A), 1u, (const CowU32[]){ uVar2 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10258a20(g, COW_IMG(COW_ADDR_LIFT_10227573), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), stdcall, 2 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 32 locals, pops [esi], ret 8.
   Arguments: 2 register argument(s) [ecx, edx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10227450(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    g->esp -= 0x20u;                      /* 0x10227450: 32 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10227453: push esi */
    g->esi = g->ecx;   /* 0x10227454: the value the entry loaded and the decompiler dropped */
    g->ecx = rd32(COW_IMG(COW_ADDR_LIFT_10456A28));   /* 0x10227456: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->ecx + 0x18u); g->edx = (g->edx & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x1022745c: register edx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->ecx + 0x8u); g->eax = (uint32_t)(rd32(A)); }   /* 0x1022745f: register eax, replayed as the entry ran it */
    cow_lift_10227450(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
