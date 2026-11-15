/* f_0x101f2de0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101f2de0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101f2de0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    short sVar1;
    CowU32 psVar2;
    char cVar3;
    CowU32 puVar4;
    CowU32 this_00;
    puVar4 = (CowU32)cow_bridge_101f1120(g, COW_IMG(COW_ADDR_LIFT_101F2DEF), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      wr16((uint32_t)((int)param_1 + 0x14), puVar4);
      if (puVar4 != (CowU32)0x0) {
        this_00 = (CowU32)cow_bridge_1015b9e0(g, COW_IMG(COW_ADDR_LIFT_101F2E07), 1u, (const CowU32[]){ (CowU32)rd16((uint32_t)puVar4) }, rd32(COW_IMG(COW_ADDR_LIFT_10621808)), g->edx, g->eax, 0u);
        if (this_00 != (CowU32)0x0) {
          if (rd16((uint32_t)((int)this_00 + 0x14b4)) == (CowU32)0x0) {
            cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_101F2E23), 2u, (const CowU32[]){ 5u, 1u }, g->ecx, g->edx, g->eax, 0u);
            cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_101F2E2F), 2u, (const CowU32[]){ 5u, 2u }, g->ecx, g->edx, g->eax, 0u);
            return;
          }
          sVar1 = rd16((uint32_t)rd32((uint32_t)(((int)this_00 + 0x14b4))));
          if (((sVar1 == 8) || (sVar1 == 0x16)) || (sVar1 == 0x17)) goto L_101f2e7b;
          cVar3 = cow_bridge_1015b6c0(g, COW_IMG(COW_ADDR_LIFT_101F2E4E), 0u, (const CowU32[]){ 0u }, this_00, g->edx, g->eax, 0u);
          if (cVar3 != '\0') goto L_101f2e7b;
          cVar3 = cow_bridge_1015b6f0(g, COW_IMG(COW_ADDR_LIFT_101F2E59), 0u, (const CowU32[]){ 0u }, this_00, g->edx, g->eax, 0u);
          if (cVar3 != '\0') {
            cVar3 = cow_bridge_101cc3a0(g, COW_IMG(COW_ADDR_LIFT_101F2E68), 2u, (const CowU32[]){ rd32((uint32_t)((int)param_1 + 0x14)), 0 }, g->ecx, g->edx, g->eax, 8u);
            if (cVar3 != '\0') goto L_101f2e7b;
          }
        }
      }
      cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_101F2E7B), 2u, (const CowU32[]){ 5u, 1u }, g->ecx, g->edx, g->eax, 0u);
    L_101f2e7b:
      psVar2 = rd16((uint32_t)((int)param_1 + 0x14));
      if (((psVar2 == (CowU32)0x0) || ((char)rd16((uint32_t)(psVar2 + 2u * (uint32_t)(4))) != '\0')) || (rd16((uint32_t)psVar2) == -1)) {
        cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_101F2E9C), 2u, (const CowU32[]){ 5u, 2u }, g->ecx, g->edx, g->eax, 0u);
      }
      cVar3 = cow_bridge_10097d50(g, COW_IMG(COW_ADDR_LIFT_101F2EA1), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if (cVar3 != '\0') {
        cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_101F2EB1), 2u, (const CowU32[]){ 5u, 1u }, g->ecx, g->edx, g->eax, 0u);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101f2de0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101f2de0: push esi */
    g->esi = g->ecx;   /* 0x101f2de1: the value the entry loaded and the decompiler dropped */
    g->ecx = rd32(COW_IMG(COW_ADDR_LIFT_10663740));   /* 0x101f2de3: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101f2de9: push edi */
    cow_lift_101f2de0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
