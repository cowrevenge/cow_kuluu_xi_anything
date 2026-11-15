/* f_0x100d1070 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100d1070 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100d1070(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    iVar2 = cow_bridge_10084400(g, COW_IMG(COW_ADDR_LIFT_100D1079), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      if (((iVar2 == 0) || (iVar2 = cow_bridge_10084400(g, COW_IMG(COW_ADDR_LIFT_100D1086), 0u, (const CowU32[]){ 0u }, g->esi, g->edx, g->eax, 0u), iVar2 == 1)) || (iVar2 = cow_bridge_10084400(g, COW_IMG(COW_ADDR_LIFT_100D1092), 0u, (const CowU32[]){ 0u }, g->esi, g->edx, g->eax, 0u), iVar2 == 6)
         ) {
        if ((rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x22c))) & 0x1ffU) != 0x1ff) {
          return;
        }
        switch((char)rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x229)))) {
        case '\x01':
          cow_bridge_100d14c0(g, COW_IMG(COW_ADDR_LIFT_100D10C8), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
          break;
        case '\x02':
          if ((int8_t)rd8((uint32_t)((int)param_1 + 0x8b5)) == '\0') {
            cow_bridge_100d16c0(g, COW_IMG(COW_ADDR_LIFT_100D10E2), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
          }
          else {
            cow_bridge_100d1970(g, COW_IMG(COW_ADDR_LIFT_100D10DB), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
          }
          break;
        case '\x03':
          cow_bridge_100d1c80(g, COW_IMG(COW_ADDR_LIFT_100D10EB), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          break;
        case '\x04':
          cow_bridge_100d2460(g, COW_IMG(COW_ADDR_LIFT_100D10F4), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
          break;
        case '\x05':
          cow_bridge_100d1f70(g, COW_IMG(COW_ADDR_LIFT_100D10FD), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
          break;
        default:
          goto switchD_100d10ba_default;
        }
        wr8((uint32_t)(param_1 + 4u * (uint32_t)(0x229)), 0);
      }
    switchD_100d10ba_default:
      iVar2 = cow_bridge_10084400(g, COW_IMG(COW_ADDR_LIFT_100D110A), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if (((iVar2 == 2) || (iVar2 = cow_bridge_10084400(g, COW_IMG(COW_ADDR_LIFT_100D1116), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u), iVar2 == 7)) && ((char)rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x229))) == '\x03')) {
        cow_bridge_100d1c80(g, COW_IMG(COW_ADDR_LIFT_100D112B), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        wr8((uint32_t)(param_1 + 4u * (uint32_t)(0x229)), 0);
      }
      cVar1 = cow_bridge_100d12d0(g, COW_IMG(COW_ADDR_LIFT_100D1138), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      if ((cVar1 == '\x01') && (rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x231))) != 0)) {
        cVar1 = cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_1)) + 0x298u))), COW_IMG(COW_ADDR_LIFT_100D1153), 3u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x231))), param_1, 0 }, g->ecx, g->edx, g->eax, 0u);
        if (cVar1 == '\x01') {
          wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x231)), 0);
          return;
        }
        cow_bridge_10017d30(g, COW_IMG(COW_ADDR_LIFT_100D116A), 1u, (const CowU32[]){ 271972768u }, g->ecx, g->edx, g->eax, 4u);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [ebx, esi], frame pointer no, 0 locals, pops [esi, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100d1070(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100d1070: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100d1071: push esi */
    g->esi = g->ecx;   /* 0x100d1072: the value the entry loaded and the decompiler dropped */
    cow_lift_100d1070(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
