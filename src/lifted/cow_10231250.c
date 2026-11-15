/* f_0x10231250 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10231250 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10231250(Guest* g, int32_t param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5, CowU32 param_6)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU8 local_14[4];
    CowU32 local_10;
    _Bool bVar2;
      
      cow_bridge_10233250(g, COW_IMG(COW_ADDR_LIFT_10231268), 2u, (const CowU32[]){ param_2, param_4 }, local_14, g->edx, param_4, 0u);
      if ((CowU16)param_3 < 0xf200) {
        cVar1 = cow_bridge_102308e0(g, COW_IMG(COW_ADDR_LIFT_1023127E), 1u, (const CowU32[]){ param_3 }, g->ecx, g->edx, param_4, 4u);
        bVar2 = cVar1 == '\0';
        cVar1 = cow_bridge_10230930(g, COW_IMG(COW_ADDR_LIFT_1023128D), 1u, (const CowU32[]){ param_3 }, g->ecx, g->edx, param_4, 4u);
        if (cVar1 == '\0') goto L_10231296;
      }
      bVar2 = 0;
    L_10231296:
      cow_bridge_10233280(g, COW_IMG(COW_ADDR_LIFT_102312A6), 4u, (const CowU32[]){ 0, 0, bVar2, 0 }, g->ecx, g->edx, param_4, 0u);
      if (((CowU16)param_3 < 0xf200) && ((char)param_6 == '\0')) {
        local_10 = cow_bridge_10231140(g, COW_IMG(COW_ADDR_LIFT_102312C5), 3u, (const CowU32[]){ param_3, param_1, param_5 }, g->ecx, g->edx, param_4, 12u);
      }
      cow_bridge_10233280(g, COW_IMG(COW_ADDR_LIFT_102312E2), 4u, (const CowU32[]){ 0, 0, 0xffffffff, rd32((uint32_t)(param_1 + 0x14c8)) }, g->ecx, g->edx, param_4, 0u);
      cow_bridge_10233240(g, COW_IMG(COW_ADDR_LIFT_102312EB), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, param_4, 0u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 6 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 20 locals, pops [edi, esi], ret 0.
   Arguments: 0 register argument(s) [-], 6 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10231250(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    CowU32 param_6 = rd32((uint32_t)(sp0 + 4u + 0x14u));
    g->eax = param_4;   /* 0x10231250: the value the entry loaded and the decompiler dropped */
    g->ecx = param_2;   /* 0x10231254: the value the entry loaded and the decompiler dropped */
    g->esp -= 0x14u;                      /* 0x10231258: 20 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1023125b: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1023125c: push edi */
    cow_lift_10231250(g, param_1, param_2, param_3, param_4, param_5, param_6);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
