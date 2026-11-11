/* f_0x100b2940 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100b2940 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100b2940(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    short sVar1;
    int iVar2;
    if (rd32(COW_IMG(COW_ADDR_LIFT_1047D3EC)) == '\0') {
        cow_bridge_100b2a60(g, COW_IMG(COW_ADDR_LIFT_100B29B1), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_1015e790(g, COW_IMG(COW_ADDR_LIFT_100B29C6), 2u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10578204)) + 8)), 1 }, 274864184u, g->edx, g->eax, 0u);
        cow_bridge_1013bf40(g, COW_IMG(COW_ADDR_LIFT_100B29CD), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        wr16((uint32_t)(param_1 + 0x256), rd16((uint32_t)(param_1 + 0x256)) + 1);
      }
      else {
        iVar2 = cow_bridge_1014e0a0(g, COW_IMG(COW_ADDR_LIFT_100B295D), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if ((iVar2 != 0) && (rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1047D3E8)) + 0x53c)) != (CowU32)0x0)) {
          cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1047D3E8))) + 0x53cu))), COW_IMG(COW_ADDR_LIFT_100B2974), 1u, (const CowU32[]){ iVar2 }, g->ecx, g->edx, g->eax, 4u);
        }
        sVar1 = cow_bridge_1014e1c0(g, COW_IMG(COW_ADDR_LIFT_100B2982), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (sVar1 != 0) {
          wr16((uint32_t)(param_1 + 0x256), rd16((uint32_t)(param_1 + 0x256)) + 1);
          if (sVar1 == 0xff) {
            wr32(COW_IMG(COW_ADDR_LIFT_104887F8), 0xfe);
            cow_bridge_100ae3a0(g, COW_IMG(COW_ADDR_LIFT_100B29AC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            cow_bridge_100b2a60(g, COW_IMG(COW_ADDR_LIFT_100B29FC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            cow_bridge_1015e790(g, COW_IMG(COW_ADDR_LIFT_100B2A11), 2u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10578204)) + 8)), 1 }, 274864184u, g->edx, g->eax, 0u);
            cow_bridge_1013bf40(g, COW_IMG(COW_ADDR_LIFT_100B2A18), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            wr32(COW_IMG(COW_ADDR_LIFT_104804C2), 1);
            wr32(COW_IMG(COW_ADDR_LIFT_104808F0), 1);
            wr32(COW_IMG(COW_ADDR_LIFT_10487034), 1);
            wr8((uint32_t)(param_1 + 0x25a), 1);
            return;
          }
          wr32(COW_IMG(COW_ADDR_LIFT_104887F8), sVar1 + -1);
          cow_bridge_100ae3a0(g, COW_IMG(COW_ADDR_LIFT_100B29F7), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_100b2a60(g, COW_IMG(COW_ADDR_LIFT_100B2A27), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_1015e790(g, COW_IMG(COW_ADDR_LIFT_100B2A41), 2u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10578204)) + 8)), 1 }, 274864184u, g->edx, g->eax, 0u);
          cow_bridge_1013bf40(g, COW_IMG(COW_ADDR_LIFT_100B2A48), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          wr8((uint32_t)(param_1 + 0x25a), 1);
          return;
        }
      }
      wr8((uint32_t)(param_1 + 0x25a), 1);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100b2940(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    { uint32_t A = (uint32_t)(COW_IMG(COW_ADDR_LIFT_1047D3EC) + RD); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x100b2940: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100b2945: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100b2946: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100b2947: push edi */
    cow_lift_100b2940(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
