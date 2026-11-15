/* f_0x101d83b0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101d83b0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101d83b0(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU16 uVar1;
    CowU32 uVar2;
    CowU32 uVar3;
    if (rd32((uint32_t)param_2) == 3) {
        cow_bridge_101f4b20(g, COW_IMG(COW_ADDR_LIFT_101D83D5), 4u, (const CowU32[]){ 3, 9, rd32((uint32_t)(param_2 + 4u * (uint32_t)(2))), 0x80808080 }, g->edi, g->edx, g->eax, 0u);
        uVar3 = 0x80808080;
        uVar1 = (CowU16)rd32((uint32_t)(param_2 + 4u * (uint32_t)(1)));
        uVar2 = 0x1a;
      }
      else {
        if (rd32((uint32_t)param_2) != 4) goto L_101d842c;
        cow_bridge_101f4b20(g, COW_IMG(COW_ADDR_LIFT_101D83FE), 4u, (const CowU32[]){ 3, 9, rd32((uint32_t)(param_2 + 4u * (uint32_t)(3))), 0x80808080 }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_101f4b20(g, COW_IMG(COW_ADDR_LIFT_101D8415), 4u, (const CowU32[]){ 2, 0x1b, (short)rd32((uint32_t)(param_2 + 4u * (uint32_t)(1))), 0x80808080 }, g->ecx, g->edx, g->eax, 0u);
        uVar3 = 0x80905050;
        uVar1 = (CowU16)rd32((uint32_t)(param_2 + 4u * (uint32_t)(1)));
        uVar2 = 0x19;
      }
      cow_bridge_101f4b20(g, COW_IMG(COW_ADDR_LIFT_101D842C), 4u, (const CowU32[]){ 1, uVar2, uVar1, uVar3 }, g->ecx, g->edx, g->eax, 0u);
    L_101d842c:
      cow_bridge_101f4b20(g, COW_IMG(COW_ADDR_LIFT_101D8443), 4u, (const CowU32[]){ 0, 0x15, (short)rd32((uint32_t)(param_2 + 4u * (uint32_t)(1))), 0x80808080 }, g->ecx, g->edx, g->eax, 0u);
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: stdcall, 2 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 8.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101d83b0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101d83b0: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->esi = (uint32_t)(rd32(A)); }   /* 0x101d83b1: register esi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101d83b5: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->edi = (uint32_t)(rd32(A)); }   /* 0x101d83b6: register edi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esi); g->eax = (uint32_t)(rd32(A)); }   /* 0x101d83ba: register eax, replayed as the entry ran it */
    cow_lift_101d83b0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 2 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
