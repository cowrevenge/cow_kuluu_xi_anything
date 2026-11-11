/* f_0x10234370 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10234370 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10234370(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    short sVar2;
    sVar2 = (short)param_3;
      switch((short)param_2) {
      case 3:
        cVar1 = cow_bridge_10123a70(g, COW_IMG(COW_ADDR_LIFT_102343FD), 4u, (const CowU32[]){ 0x3e, 0xa8, 4, 0xffffffff }, g->ecx, g->edx, g->eax, 16u);
        if (cVar1 == '\0') {
          cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_1023441D), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10234280(g, COW_IMG(COW_ADDR_LIFT_10234424), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          return;
        }
        cow_bridge_10222150(g, COW_IMG(COW_ADDR_LIFT_10234412), 2u, (const CowU32[]){ 0x19, param_3 }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 4:
        cVar1 = cow_bridge_10123a70(g, COW_IMG(COW_ADDR_LIFT_1023443A), 4u, (const CowU32[]){ 0x3e, 0xa8, 4, 0xffffffff }, g->ecx, g->edx, g->eax, 16u);
        if (cVar1 == '\0') {
          cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_1023445A), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_102342a0(g, COW_IMG(COW_ADDR_LIFT_10234461), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          return;
        }
        cow_bridge_10222150(g, COW_IMG(COW_ADDR_LIFT_1023444F), 2u, (const CowU32[]){ 0x18, param_3 }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 5:
        if ((char)rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x1a))) == '\0') {
          if (sVar2 == 9) {
            cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_1)) + 0x18u))), COW_IMG(COW_ADDR_LIFT_102343C8), 2u, (const CowU32[]){ 4, param_3 }, g->ecx, g->edx, g->eax, 0u);
            return;
          }
          if (sVar2 == 10) {
            cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_1)) + 0x18u))), COW_IMG(COW_ADDR_LIFT_102343D8), 2u, (const CowU32[]){ 3, param_3 }, g->ecx, g->edx, g->eax, 0u);
            return;
          }
          cow_bridge_102342c0(g, COW_IMG(COW_ADDR_LIFT_102343B8), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(0xc))) }, g->esi, g->edx, g->eax, 0u);
          return;
        }
        break;
      case 6:
        cow_bridge_10234230(g, COW_IMG(COW_ADDR_LIFT_102343E7), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 0u);
        return;
      case 9:
        if ((8 < sVar2) && (sVar2 < 0xb)) {
          cow_bridge_10221cd0(g, COW_IMG(COW_ADDR_LIFT_1023447B), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          return;
        }
        cow_bridge_10221ce0(g, COW_IMG(COW_ADDR_LIFT_10234488), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      default:
        cow_bridge_10222150(g, COW_IMG(COW_ADDR_LIFT_10234491), 2u, (const CowU32[]){ param_2, param_3 }, g->ecx, g->edx, g->eax, 0u);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10234370(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10234370: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10234371: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10234372: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->edi = (uint32_t)(rd32(A)); }   /* 0x10234373: register edi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esp + 0x14u); g->ebx = (uint32_t)(rd32(A)); }   /* 0x10234377: register ebx, replayed as the entry ran it */
    g->esi = g->ecx;   /* 0x1023437b: the value the entry loaded and the decompiler dropped */
    { g->eax = (uint32_t)((uint32_t)(int32_t)((int16_t)(uint16_t)g->edi)); }   /* 0x1023437d: register eax, replayed as the entry ran it */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0xFFFFFFFDu; uint32_t r = (uint32_t)(a + b); g->eax = (uint32_t)(r); }   /* 0x10234380: register eax, replayed as the entry ran it */
    cow_lift_10234370(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
