/* f_0x1007aaf0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1007aaf0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1007aaf0(Guest* g, CowU32 param_1, CowU32 param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    cVar1 = cow_bridge_101cc070(g, COW_IMG(COW_ADDR_LIFT_1007AAF8), 1u, (const CowU32[]){ 0u }, g->ecx, param_1, g->eax, 4u);
      if (cVar1 == '\0') {
        cVar1 = cow_bridge_101cbdf0(g, COW_IMG(COW_ADDR_LIFT_1007AB0A), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 4u);
        if (cVar1 == '\0') {
          cVar1 = cow_bridge_101cbe60(g, COW_IMG(COW_ADDR_LIFT_1007AB1A), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          if (cVar1 == '\0') {
            cVar1 = cow_bridge_101cc350(g, COW_IMG(COW_ADDR_LIFT_1007AB2B), 2u, (const CowU32[]){ 1u, 1u }, g->ecx, g->edx, g->eax, 8u);
            if (cVar1 == '\0') {
              cVar1 = cow_bridge_101cbe50(g, COW_IMG(COW_ADDR_LIFT_1007AB3B), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
              if (cVar1 != '\0') {
                cVar1 = cow_bridge_101cc4c0(g, COW_IMG(COW_ADDR_LIFT_1007AB48), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
                if (cVar1 != '\x01') {
                  cVar1 = cow_bridge_10177750(g, COW_IMG(COW_ADDR_LIFT_1007AB51), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
                  if (cVar1 == '\0') {
                    cow_bridge_10129d90(g, COW_IMG(COW_ADDR_LIFT_1007AB62), 1u, (const CowU32[]){ 8u }, g->ecx, g->edx, g->eax, 0u);
                    g->eax = (CowU32)(param_3); return;
                  }
                }
                iVar2 = cow_bridge_101cc4f0(g, COW_IMG(COW_ADDR_LIFT_1007AB6D), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
                cVar1 = cow_bridge_100fd3a0(g, COW_IMG(COW_ADDR_LIFT_1007AB80), 1u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x3c350)) }, g->ecx, g->edx, g->eax, 4u);
                if (cVar1 != '\0') {
                  if (iVar2 == 0) {
    L_1007ab96:
                    cow_bridge_10129d90(g, COW_IMG(COW_ADDR_LIFT_1007ABA3), 1u, (const CowU32[]){ 8u }, g->ecx, g->edx, g->eax, 0u);
                    g->eax = (CowU32)(param_3); return;
                  }
                  cVar1 = cow_bridge_1009aaf0(g, COW_IMG(COW_ADDR_LIFT_1007AB92), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
                  if (cVar1 == '\0') goto L_1007ab96;
                }
                if ((iVar2 != 0) && ((rd8((uint32_t)(iVar2 + 0x123)) & 7) == 4)) {
                  cow_bridge_10129d90(g, COW_IMG(COW_ADDR_LIFT_1007ABC8), 1u, (const CowU32[]){ 8u }, g->ecx, g->edx, g->eax, 0u);
                  g->eax = (CowU32)(param_3); return;
                }
                iVar2 = cow_bridge_100fc510(g, COW_IMG(COW_ADDR_LIFT_1007ABD3), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
                if (iVar2 == 0) {
                  g->eax = (CowU32)(-param_3); return;
                }
                cow_bridge_1009fa70(g, COW_IMG(COW_ADDR_LIFT_1007ABE4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
              }
            }
          }
        }
      }
      g->eax = (CowU32)(param_3); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(edx), cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 1 register argument(s) [edx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1007aaf0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->edx;   /* edx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1007aaf0: push esi */
    cow_lift_1007aaf0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
