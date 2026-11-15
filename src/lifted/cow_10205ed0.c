/* f_0x10205ed0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10205ed0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10205ed0(Guest* g, int32_t param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    switch(param_2 + -1) {
      case 0:
        break;
      case 1:
        cow_bridge_10204d50(g, COW_IMG(COW_ADDR_LIFT_10205F0D), 1u, (const CowU32[]){ param_1 }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 2:
        cVar1 = cow_bridge_101cc330(g, COW_IMG(COW_ADDR_LIFT_10205F16), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (cVar1 == '\0') {
          cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_10205F2D), 3u, (const CowU32[]){ 272127128u, 1u, 0u }, 274864184u, g->edx, g->eax, 0u);
          return;
        }
        cow_bridge_10205280(g, COW_IMG(COW_ADDR_LIFT_10205F38), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 3:
        cow_bridge_10205040(g, COW_IMG(COW_ADDR_LIFT_10205F44), 1u, (const CowU32[]){ param_1 }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 4:
        cow_bridge_10204fe0(g, COW_IMG(COW_ADDR_LIFT_10205F50), 1u, (const CowU32[]){ param_1 }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 5:
        cow_bridge_10205010(g, COW_IMG(COW_ADDR_LIFT_10205F5B), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 6:
        cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_10205F72), 3u, (const CowU32[]){ 272127052u, 1u, 0u }, 274864184u, g->edx, g->eax, 0u);
        return;
      case 7:
        cow_bridge_10204e50(g, COW_IMG(COW_ADDR_LIFT_10205F7D), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 8:
        cow_bridge_10205100(g, COW_IMG(COW_ADDR_LIFT_10205F89), 1u, (const CowU32[]){ param_1 }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 9:
        cow_bridge_102051d0(g, COW_IMG(COW_ADDR_LIFT_10205F95), 1u, (const CowU32[]){ param_1 }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 10:
        cow_bridge_10204ee0(g, COW_IMG(COW_ADDR_LIFT_10205FA9), 1u, (const CowU32[]){ (((uint32_t)(((CowU32)(param_2 + -1) >> 8)) & 0xffffffu) << 8 | ((uint32_t)((int8_t)rd8((uint32_t)(param_1 + 0x2c)) == '\0') & 0xffu)) }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 0xb:
        cow_bridge_10204ed0(g, COW_IMG(COW_ADDR_LIFT_10205FB4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      default:
        return;
      }
      if ((int32_t)rd32((uint32_t)(param_1 + 0x18)) == 1) {
        cow_bridge_10204f70(g, COW_IMG(COW_ADDR_LIFT_10205EF8), 0u, (const CowU32[]){ 0u }, param_1, param_2, g->eax, 0u);
        return;
      }
      cow_bridge_10204c60(g, COW_IMG(COW_ADDR_LIFT_10205F01), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 4.
   Arguments: 2 register argument(s) [ecx, edx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10205ed0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    { uint32_t A = (uint32_t)(g->esp + 0x4u); g->eax = (uint32_t)((uint32_t)(int32_t)((int16_t)rd16(A))); }   /* 0x10205ed0: register eax, replayed as the entry ran it */
    { { uint32_t a = g->eax; uint32_t r = (uint32_t)(a - 1u); g->eax = (uint32_t)(r); }; }   /* 0x10205ed5: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10205ed6: push esi */
    cow_lift_10205ed0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
