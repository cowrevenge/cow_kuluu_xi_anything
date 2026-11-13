/* f_0x1012ec10 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1012ec10 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1012ec10(Guest* g, int32_t param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    short sVar1;
    int iVar2;
    CowU32 uVar3;
    if (param_2 == '\0') {
        wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x85), 0);
        wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1057876C)) + 0x74), rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1057876C)) + 0x74)) & 0xfe);
        if (rd32(COW_IMG(COW_ADDR_LIFT_1057847C)) != 0) {
          cow_bridge_10150cc0(g, COW_IMG(COW_ADDR_LIFT_1012EC5D), 2u, (const CowU32[]){ 0, 2 }, g->ecx, g->edx, g->eax, 0u);
        }
        if (rd32(COW_IMG(COW_ADDR_LIFT_105781F8)) != 0) {
          cow_bridge_1013a320(g, COW_IMG(COW_ADDR_LIFT_1012EC8F), 2u, (const CowU32[]){ 0, 2 }, g->ecx, g->edx, g->eax, 0u);
        }
      }
      else if (param_2 == '\x01') {
        wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x85), 1);
        wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1057876C)) + 0x74), rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1057876C)) + 0x74)) | 1);
        iVar2 = cow_bridge_1012eb40(g, COW_IMG(COW_ADDR_LIFT_1012EC47), 0u, (const CowU32[]){ 0u }, g->esi, g->edx, g->eax, 0u);
        if ((iVar2 != 0) && (rd32(COW_IMG(COW_ADDR_LIFT_1057847C)) != 0)) {
          cow_bridge_10150cc0(g, COW_IMG(COW_ADDR_LIFT_1012ECBE), 2u, (const CowU32[]){ 0u, 2u }, g->ecx, g->edx, g->eax, 0u);
        }
        uVar3 = cow_bridge_1012eba0(g, COW_IMG(COW_ADDR_LIFT_1012EC64), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        sVar1 = (int16_t)rd16((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x4c));
        if ((8 < sVar1) && (sVar1 < 0xc)) {
          uVar3 = 0;
        }
        wr32((uint32_t)(param_1 + 0x1ec), uVar3);
        if (rd32(COW_IMG(COW_ADDR_LIFT_105781F8)) != 0) {
          cow_bridge_1013a320(g, COW_IMG(COW_ADDR_LIFT_1012ECD1), 2u, (const CowU32[]){ 0u, 2u }, g->ecx, g->edx, g->eax, 0u);
          return;
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), stdcall, 3 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 4.
   Arguments: 2 register argument(s) [ecx, edx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1012ec10(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->eax = param_3;   /* 0x1012ec10: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1012ec14: push esi */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0xFFu; uint32_t r = (uint32_t)(a & b); g->eax = (uint32_t)(r); }   /* 0x1012ec15: register eax, replayed as the entry ran it */
    g->esi = g->ecx;   /* 0x1012ec1a: the value the entry loaded and the decompiler dropped */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0x0u; uint32_t r = (uint32_t)(a - b); g->eax = (uint32_t)(r); }   /* 0x1012ec1c: register eax, replayed as the entry ran it */
    cow_lift_1012ec10(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
