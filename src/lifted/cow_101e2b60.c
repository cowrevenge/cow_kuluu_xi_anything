/* f_0x101e2b60 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101e2b60 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101e2b60(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU16 uVar2;
    CowU32 uVar3;
    CowU32 piVar4;
    if (param_2 != (CowU32)0x0) {
        wr32((uint32_t)((int)param_1 + 0x54), param_4);
        wr32((uint32_t)((int)param_1 + 0x58), param_2);
        wr32((uint32_t)((int)param_1 + 0x50), param_3);
        cow_bridge_101f6700(g, COW_IMG(COW_ADDR_LIFT_101E2B8B), 1u, (const CowU32[]){ 0xb }, param_1, g->edx, g->eax, 0u);
        uVar3 = cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_2)) + 0xcu))), COW_IMG(COW_ADDR_LIFT_101E2B92), 0u, (const CowU32[]){ 0u }, g->edi, g->edx, g->eax, 0u);
        uVar2 = cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_2)) + 0x10u))), COW_IMG(COW_ADDR_LIFT_101E2B9B), 0u, (const CowU32[]){ 0u }, g->edi, g->edx, g->eax, 0u);
        wr16((uint32_t)((int)param_1 + 0x16), uVar2);
        wr32((uint32_t)((int)param_1 + 0x30), uVar3);
        wr16((uint32_t)((int)param_1 + 0x26), 0x12);
        uVar3 = cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_2)) + 0x4u))), COW_IMG(COW_ADDR_LIFT_101E2BAF), 0u, (const CowU32[]){ 0u }, g->edi, g->edx, g->eax, 0u);
        wr32((uint32_t)((int)param_1 + 0x40), uVar3);
        cVar1 = cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_2)) + 0x8u))), COW_IMG(COW_ADDR_LIFT_101E2BB9), 0u, (const CowU32[]){ 0u }, g->edi, g->edx, g->eax, 0u);
        if (cVar1 != '\0') {
          piVar4 = (CowU32)cow_bridge_101c8c30(g, COW_IMG(COW_ADDR_LIFT_101E2BC5), 1u, (const CowU32[]){ 2u }, g->ecx, g->edx, g->eax, 0u);
          uVar3 = rd32((uint32_t)(rd32((uint32_t)piVar4) + 0x6b0));
          wr8((uint32_t)((int)param_1 + 0x49), 1);
          wr32((uint32_t)((int)param_1 + 0x34), uVar3);
          wr8((uint32_t)((int)param_1 + 0x2e), 0);
          wr8((uint32_t)((int)param_1 + 0x2f), 6);
        }
        wr8((uint32_t)((int)param_1 + 0x2c), 0);
        wr8((uint32_t)((int)param_1 + 0x2d), 3);
        wr8((uint32_t)((int)param_1 + 0x47), 1);
        cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_101E2BFE), 3u, (const CowU32[]){ 272102124u, 1u, 0u }, 274864184u, g->edx, g->eax, 0u);
        if ((int32_t)rd32((uint32_t)((int)param_1 + 8)) != 0) {
          wr16((uint32_t)((int32_t)rd32((uint32_t)((int)param_1 + 8)) + 0x38), 0x81);
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 4 parameter(s), cleanup 12 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi], ret 12.
   Arguments: 1 register argument(s) [ecx], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101e2b60(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101e2b60: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101e2b61: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->edi = (uint32_t)(rd32(A)); }   /* 0x101e2b62: register edi, replayed as the entry ran it */
    g->esi = g->ecx;   /* 0x101e2b66: the value the entry loaded and the decompiler dropped */
    cow_lift_101e2b60(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
