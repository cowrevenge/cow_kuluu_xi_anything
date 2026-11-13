/* f_0x1013ac50 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1013ac50 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1013ac50(Guest* g, int32_t param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU8 bVar2;
    char cVar3;
    cow_bridge_1013cba0(g, COW_IMG(COW_ADDR_LIFT_1013AC5D), 1u, (const CowU32[]){ param_2 }, param_1, g->edx, param_2, 0u);
      cow_bridge_1013ad50(g, COW_IMG(COW_ADDR_LIFT_1013AC64), 0u, (const CowU32[]){ 0u }, g->esi, g->edx, param_2, 0u);
      bVar2 = rd8((uint32_t)(param_1 + 0x3a8)) & 3;
      if ((rd8((uint32_t)(param_1 + 0x3a8)) & 3) == 0) {
        cVar3 = cow_bridge_10160700(g, COW_IMG(COW_ADDR_LIFT_1013ACCF), 0u, (const CowU32[]){ 0u }, 274864184u, g->edx, param_2, 0u);
        if ((cVar3 == '\0') &&
           ((cVar3 = cow_bridge_10123a70(g, COW_IMG(COW_ADDR_LIFT_1013ACE0), 4u, (const CowU32[]){ 0x3e, 0x76, 4, 0xffffffff }, g->ecx, g->edx, param_2, 16u), cVar3 != '\0' ||
            (cVar3 = cow_bridge_10123a70(g, COW_IMG(COW_ADDR_LIFT_1013ACF7), 4u, (const CowU32[]){ 0x3e, 0x89, 4, 0xffffffff }, g->ecx, g->edx, param_2, 16u), cVar3 != '\0')))) {
          cVar3 = '\x01';
        }
        else {
          cVar3 = '\0';
        }
        cVar1 = (int8_t)rd8((uint32_t)(param_1 + 0x3a9));
        wr8((uint32_t)(param_1 + 0x3a9), cVar3);
        if ((cVar1 != cVar3) && (cVar3 != '\0')) {
          bVar2 = rd8((uint32_t)(param_1 + 0x3a8));
          wr8((uint32_t)(param_1 + 0x3a8), (bVar2 + 1 ^ bVar2) & 3 ^ bVar2);
        }
        return;
      }
      if (bVar2 == 1) {
        wr32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x34), rd32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x34)) | 1);
        bVar2 = rd8((uint32_t)(param_1 + 0x3a8));
        wr8((uint32_t)(param_1 + 0x3a8), (bVar2 + 1 ^ bVar2) & 3 ^ bVar2);
        return;
      }
      if (bVar2 == 2) {
        cow_bridge_1015e790(g, COW_IMG(COW_ADDR_LIFT_1013AC8C), 2u, (const CowU32[]){ rd32((uint32_t)(param_1 + 8)), 1 }, 274864184u, g->edx, param_2, 0u);
        wr8((uint32_t)(param_1 + 0x3a8), rd8((uint32_t)(param_1 + 0x3a8)) & 0xfc);
        return;
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1013ac50(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->eax = param_2;   /* 0x1013ac50: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1013ac54: push esi */
    g->esi = g->ecx;   /* 0x1013ac56: the value the entry loaded and the decompiler dropped */
    cow_lift_1013ac50(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
