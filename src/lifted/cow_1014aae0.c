/* f_0x1014aae0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1014aae0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1014aae0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    short sVar2;
    sVar2 = (short)param_2;
      if (sVar2 == 3) {
        cVar1 = cow_bridge_10123a70(g, COW_IMG(COW_ADDR_LIFT_1014AB65), 4u, (const CowU32[]){ 0x3e, 0xa8, 4, 0xffffffff }, g->ecx, g->edx, g->eax, 16u);
        if (cVar1 != '\0') {
          if ((rd32((uint32_t)(param_1 + 8)) == 0) || (rd8((uint32_t)(rd32((uint32_t)(param_1 + 8)) + 0x62)) != '\0')) {
            cow_bridge_101f6c70(g, COW_IMG(COW_ADDR_LIFT_1014AB30), 2u, (const CowU32[]){ 0x19, param_3 }, g->ecx, g->edx, g->eax, 0u);
            return;
          }
          return;
        }
      }
      else if (sVar2 == 4) {
        cVar1 = cow_bridge_10123a70(g, COW_IMG(COW_ADDR_LIFT_1014AB9D), 4u, (const CowU32[]){ 0x3e, 0xa8, 4, 0xffffffff }, g->ecx, g->edx, g->eax, 16u);
        if (cVar1 != '\0') {
          if ((rd32((uint32_t)(param_1 + 8)) == 0) || (rd8((uint32_t)(rd32((uint32_t)(param_1 + 8)) + 0x62)) != '\0')) {
            cow_bridge_101f6c70(g, COW_IMG(COW_ADDR_LIFT_1014AB88), 2u, (const CowU32[]){ 0x18, param_3 }, g->ecx, g->edx, g->eax, 0u);
            return;
          }
          return;
        }
      }
      else if (sVar2 == 9) {
        sVar2 = rd16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104E1D4C)) + 0x52));
        if ((sVar2 == 0xb) || (sVar2 == 0xc)) {
          if (rd32((uint32_t)(param_1 + 8)) == 0) {
            return;
          }
          cow_bridge_10118e90(g, COW_IMG(COW_ADDR_LIFT_1014AB42), 1u, (const CowU32[]){ (((uint32_t)((short)((CowU32)rd32(COW_IMG(COW_ADDR_LIFT_104E1D4C)) >> 0x10)) & 0xffffu) << 16 | ((uint32_t)(sVar2) & 0xffffu)) }, g->ecx, g->edx, g->eax, 0u);
          wr8((uint32_t)(rd32((uint32_t)(param_1 + 8)) + 0x62), 0);
          wr8((uint32_t)(rd32((uint32_t)(param_1 + 8)) + 0x61), 0);
          return;
        }
        if (rd32((uint32_t)(param_1 + 8)) != 0) {
          wr8((uint32_t)(rd32((uint32_t)(param_1 + 8)) + 0x62), 1);
          wr8((uint32_t)(rd32((uint32_t)(param_1 + 8)) + 0x61), 1);
        }
      }
      cow_bridge_101f6c70(g, COW_IMG(COW_ADDR_LIFT_1014ABC8), 2u, (const CowU32[]){ param_2, param_3 }, g->ecx, g->edx, g->eax, 0u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1014aae0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1014aae0: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1014aae1: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->edi = (uint32_t)(rd32(A)); }   /* 0x1014aae2: register edi, replayed as the entry ran it */
    g->esi = g->ecx;   /* 0x1014aae6: the value the entry loaded and the decompiler dropped */
    { g->eax = (uint32_t)((uint32_t)(int32_t)((int16_t)(uint16_t)g->edi)); }   /* 0x1014aae8: register eax, replayed as the entry ran it */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0x3u; uint32_t r = (uint32_t)(a - b); g->eax = (uint32_t)(r); }   /* 0x1014aaeb: register eax, replayed as the entry ran it */
    cow_lift_1014aae0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
