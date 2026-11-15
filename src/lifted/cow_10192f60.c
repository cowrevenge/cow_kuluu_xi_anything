/* f_0x10192f60 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10192f60 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10192f60(Guest* g, int32_t param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    short sVar1;
    int iVar2;
    char cVar3;
    int iVar4;
    iVar4 = (int32_t)rd32((uint32_t)(param_1 + 8));
      if (((int16_t)(0) < (int16_t)((int16_t)rd16((uint32_t)(iVar4 + 0x56))))) {
        return;
      }
      iVar2 = (int32_t)rd32((uint32_t)(param_1 + 0x18));
      if ((int32_t)rd32((uint32_t)(iVar2 + 8)) == 2) {
        cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_10193090), 2u, (const CowU32[]){ rd16((uint32_t)(param_1 + 0x20)), 0 }, g->ecx, g->edx, g->eax, 0u);
        iVar4 = (int)param_2;
        switch(iVar4) {
        case 1:
        case 2:
          cow_bridge_10190c70(g, COW_IMG(COW_ADDR_LIFT_10192FB5), 3u, (const CowU32[]){ 8u, 0u, 0u }, g->ecx, g->edx, g->eax, 0u);
          return;
        case 3:
        case 4:
          cVar3 = cow_bridge_10123a70(g, COW_IMG(COW_ADDR_LIFT_101930FE), 4u, (const CowU32[]){ 0x3e, 0x35, 4, 0xffffffff }, g->ecx, g->edx, g->eax, 0u);
          if (cVar3 == '\0') {
            cow_bridge_10190c70(g, COW_IMG(COW_ADDR_LIFT_10192FC5), 3u, (const CowU32[]){ 12u, 0u, 0u }, g->ecx, g->edx, g->eax, 0u);
            return;
          }
          cow_bridge_10190c70(g, COW_IMG(COW_ADDR_LIFT_10192FDD), 3u, (const CowU32[]){ 10, iVar4, 0 }, g->ecx, g->edx, g->eax, 0u);
          return;
        case 5:
        case 0x11:
          cow_bridge_10190c70(g, COW_IMG(COW_ADDR_LIFT_10193007), 3u, (const CowU32[]){ 8, 0, 0 }, g->ecx, g->edx, g->eax, 0u);
          return;
        case 6:
          cow_bridge_10190c70(g, COW_IMG(COW_ADDR_LIFT_10193017), 3u, (const CowU32[]){ 14u, 0u, 0u }, g->ecx, g->edx, g->eax, 0u);
          return;
        default:
          goto switchD_10192fa3_caseD_7;
        case 0xc:
          if ((int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x18)) + 0x18)) + 0xf0f8)) != 1) {
            cow_bridge_10190c70(g, COW_IMG(COW_ADDR_LIFT_10193041), 1u, (const CowU32[]){ 5u }, 4, 0, 1u, 0u);
            return;
          }
          break;
        case 0x12:
    switchD_10192fa3_caseD_12:
          break;
        case 0x13:
          cow_bridge_10190c70(g, COW_IMG(COW_ADDR_LIFT_10193054), 1u, (const CowU32[]){ 4u }, 0xd, 0, g->eax, 0u);
          return;
        }
    L_101930d2:
        cow_bridge_10190c70(g, COW_IMG(COW_ADDR_LIFT_10193064), 3u, (const CowU32[]){ 17u, 0u, 0u }, g->ecx, g->edx, g->eax, 0u);
    switchD_10192fa3_caseD_7:
        return;
      }
      if ((int32_t)rd32((uint32_t)(iVar2 + 8)) != 3) {
        switch(param_2) {
        case 1:
        case 2:
        case 3:
        case 4:
          sVar1 = (int16_t)rd16((uint32_t)(iVar4 + 0x4c));
          if (sVar1 == 0xd) {
            cow_bridge_10190c70(g, COW_IMG(COW_ADDR_LIFT_10193074), 3u, (const CowU32[]){ 18u, 0u, 0u }, g->ecx, g->edx, g->eax, 0u);
          }
          wr32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x18)) + 0x24), (int)sVar1);
          return;
        case 5:
          if (param_3 == 3) {
            wr32((uint32_t)(param_1 + 0x20), (int)(int16_t)rd16((uint32_t)(iVar4 + 0x4c)));
          }
          cow_bridge_10190c70(g, COW_IMG(COW_ADDR_LIFT_101930C6), 1u, (const CowU32[]){ 4u }, 0xf, (int)param_3, g->eax, 0u);
          return;
        case 6:
          cow_bridge_10190c70(g, COW_IMG(COW_ADDR_LIFT_101930D9), 3u, (const CowU32[]){ 0xe, 0, 0 }, g->ecx, g->edx, g->eax, 0u);
          return;
        default:
          goto switchD_10192fa3_caseD_7;
        case 10:
          cow_bridge_10190c70(g, COW_IMG(COW_ADDR_LIFT_101930EC), 3u, (const CowU32[]){ 4u, 0u, 0u }, g->ecx, g->edx, g->eax, 0u);
          return;
        case 0xb:
          cow_bridge_10190c70(g, COW_IMG(COW_ADDR_LIFT_10193112), 1u, (const CowU32[]){ 10u }, 0x12, 0, g->eax, 0u);
          return;
        case 0xc:
          if ((int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(iVar2 + 0x18)) + 0xf0f8)) == 1) {
            wr8((uint32_t)(iVar2 + 0x1c), 1);
            cow_bridge_10190c70(g, COW_IMG(COW_ADDR_LIFT_1019311E), 1u, (const CowU32[]){ 9u }, 5, 0, g->eax, 0u);
            return;
          }
          wr32((uint32_t)(param_1 + 0x20), (int)(int16_t)rd16((uint32_t)(iVar4 + 0x4c)));
          cow_bridge_10190c70(g, COW_IMG(COW_ADDR_LIFT_10193131), 3u, (const CowU32[]){ 8u, 0u, 0u }, g->ecx, g->edx, g->eax, 0u);
          return;
        case 0x11:
          goto switchD_10192fa3_caseD_11;
        case 0x12:
          goto switchD_10192fa3_caseD_12;
        case 0x13:
          goto switchD_10192fa3_caseD_13;
        case 0x15:
          cow_bridge_10190c70(g, COW_IMG(COW_ADDR_LIFT_10193144), 3u, (const CowU32[]){ 11u, 0u, 0u }, g->ecx, g->edx, g->eax, 0u);
          return;
        }
      }
      switch(param_2) {
      case 1:
      case 2:
      case 0x12:
        goto switchD_10192fa3_caseD_12;
      default:
        goto switchD_10192fa3_caseD_7;
      case 5:
      case 0x11:
    switchD_10192fa3_caseD_11:
        cow_bridge_10190c70(g, COW_IMG(COW_ADDR_LIFT_10193157), 3u, (const CowU32[]){ 13u, 0u, 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 6:
        cow_bridge_10190c70(g, COW_IMG(COW_ADDR_LIFT_1019319E), 1u, (const CowU32[]){ 4u }, 0xb, 0, g->eax, 0u);
        return;
      case 0xc:
        if ((int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(iVar2 + 0x18)) + 0xf0f8)) != 1) {
          cow_bridge_10190c70(g, COW_IMG(COW_ADDR_LIFT_101931AE), 3u, (const CowU32[]){ 11u, 0u, 0u }, g->ecx, g->edx, g->eax, 0u);
          return;
        }
        goto L_101930d2;
      case 0x13:
    switchD_10192fa3_caseD_13:
        cow_bridge_10190c70(g, COW_IMG(COW_ADDR_LIFT_101931BE), 3u, (const CowU32[]){ 13u, 0u, 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      }
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10192f60(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10192f60: push esi */
    g->esi = g->ecx;   /* 0x10192f61: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10192f63: push edi */
    { uint32_t A = (uint32_t)(g->esi + 0x8u); g->edx = (uint32_t)(rd32(A)); }   /* 0x10192f64: register edx, replayed as the entry ran it */
    cow_lift_10192f60(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
