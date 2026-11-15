/* f_0x1019db70 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1019db70 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1019db70(Guest* g, int32_t param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    if (param_2 != 5) {
        if (param_2 == 6) {
          wr32((uint32_t)(param_1 + 0x20), 1);
          cow_bridge_10037bf0(g, COW_IMG(COW_ADDR_LIFT_1019DC2E), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        }
    switchD_1019db99_default:
        return;
      }
      switch((int)param_3) {
      case 1:
        wr8((uint32_t)(param_1 + 0x24), 1);
        wr32((uint32_t)(param_1 + 0x40), rd32((uint32_t)(param_1 + 0x28)));
        break;
      case 2:
        cow_bridge_10193830(g, COW_IMG(COW_ADDR_LIFT_1019DBDE), 2u, (const CowU32[]){ 172u, 0u }, g->ecx, g->edx, g->eax, 8u);
        return;
      case 3:
        cow_bridge_10193830(g, COW_IMG(COW_ADDR_LIFT_1019DBF1), 2u, (const CowU32[]){ 172u, 1u }, g->ecx, g->edx, g->eax, 8u);
        return;
      case 4:
        wr8((uint32_t)(param_1 + 0x2c), 1);
        wr32((uint32_t)(param_1 + 0x40), rd32((uint32_t)(param_1 + 0x30)));
        break;
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 0xb:
      case 0xc:
        iVar1 = param_3 + -5;
        cow_bridge_10193830(g, COW_IMG(COW_ADDR_LIFT_1019DC06), 2u, (const CowU32[]){ 0xaf, iVar1 }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10245570(g, COW_IMG(COW_ADDR_LIFT_1019DC0C), 1u, (const CowU32[]){ iVar1 }, g->ecx, g->edx, g->eax, 12u);
        return;
      case 0xd:
        cow_bridge_101bcb60(g, COW_IMG(COW_ADDR_LIFT_1019DC18), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      default:
        goto switchD_1019db99_default;
      }
      wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x62), 0);
      wr32((uint32_t)(param_1 + 0x44), (int)(int16_t)rd16((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x4c)));
      wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x85), 0);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1019db70(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    { uint32_t A = (uint32_t)(g->esp + 0x4u); g->eax = (g->eax & 0xFFFF0000u) | (uint16_t)(rd16(A)); }   /* 0x1019db70: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1019db75: push esi */
    cow_lift_1019db70(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
