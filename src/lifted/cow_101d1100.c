/* f_0x101d1100 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101d1100 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101d1100(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU8 uVar2;
    CowU16 uVar3;
    CowU16 uVar4;
    CowU32 this;
    int iVar5;
    uVar2 = 0;
      uVar3 = cow_bridge_10015600(g, COW_IMG(COW_ADDR_LIFT_101D110B), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      uVar4 = cow_bridge_10015610(g, COW_IMG(COW_ADDR_LIFT_101D1119), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      this = (CowU32)cow_bridge_1002c890(g, COW_IMG(COW_ADDR_LIFT_101D112C), 1u, (const CowU32[]){ 3324u }, g->ecx, g->edx, g->eax, 4u);
      if (this != (CowU32)0x0) {
        iVar5 = cow_bridge_101d08c0(g, COW_IMG(COW_ADDR_LIFT_101D113A), 0u, (const CowU32[]){ 0u }, this, g->edx, g->eax, 0u);
        if (iVar5 != 0) {
          cVar1 = cow_bridge_101d1060(g, COW_IMG(COW_ADDR_LIFT_101D1148), 3u, (const CowU32[]){ iVar5, (CowU32)uVar3, (CowU32)uVar4 }, g->ecx, g->edx, g->eax, 12u);
          uVar2 = 0;
          if (cVar1 != '\0') {
            uVar2 = cow_bridge_101d1180(g, COW_IMG(COW_ADDR_LIFT_101D115A), 2u, (const CowU32[]){ iVar5, param_1 }, g->ecx, g->edx, g->eax, 8u);
          }
          cow_bridge_101d08d0(g, COW_IMG(COW_ADDR_LIFT_101D1166), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_1002c8b0(g, COW_IMG(COW_ADDR_LIFT_101D116C), 1u, (const CowU32[]){ iVar5 }, g->ecx, g->edx, g->eax, 4u);
        }
      }
      g->eax = (CowU32)(uVar2); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101d1100(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101d1100: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x101d1101: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101d1102: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101d1103: push edi */
    { uint8_t a = (uint8_t)g->ebx; uint8_t b = (uint8_t)(uint8_t)g->ebx; uint8_t r = (uint8_t)(a ^ b); g->ebx = (g->ebx & 0xFFFFFF00u) | (uint8_t)(r); }   /* 0x101d1104: register ebx, replayed as the entry ran it */
    cow_lift_101d1100(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
