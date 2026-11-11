/* f_0x100b2aa0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100b2aa0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100b2aa0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    short sVar1;
    int iVar2;
    CowU32 uVar3;
    if (rd32(COW_IMG(COW_ADDR_LIFT_1047D3EC)) == '\0') {
        cow_bridge_100b2a60(g, COW_IMG(COW_ADDR_LIFT_100B2B0B), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_1015e790(g, COW_IMG(COW_ADDR_LIFT_100B2B42), 2u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10578204)) + 8)), 1 }, 274864184u, g->edx, g->eax, 0u);
        cow_bridge_1013bf40(g, COW_IMG(COW_ADDR_LIFT_100B2B49), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        wr16((uint32_t)(param_1 + 0x256), rd16((uint32_t)(param_1 + 0x256)) + 1);
      }
      else {
        iVar2 = cow_bridge_1014e0a0(g, COW_IMG(COW_ADDR_LIFT_100B2ABC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if ((iVar2 != 0) && (rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1047D3E8)) + 0x53c)) != (CowU32)0x0)) {
          cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1047D3E8))) + 0x53cu))), COW_IMG(COW_ADDR_LIFT_100B2AD3), 1u, (const CowU32[]){ iVar2 }, g->ecx, g->edx, g->eax, 4u);
        }
        sVar1 = cow_bridge_1014e1c0(g, COW_IMG(COW_ADDR_LIFT_100B2AE1), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (sVar1 != 0) {
          wr16((uint32_t)(param_1 + 0x256), rd16((uint32_t)(param_1 + 0x256)) + 1);
          if (sVar1 == 0xff) {
            wr32(COW_IMG(COW_ADDR_LIFT_104887F8), 0xff);
            cow_bridge_100ae3a0(g, COW_IMG(COW_ADDR_LIFT_100B2B06), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            cow_bridge_100b2a60(g, COW_IMG(COW_ADDR_LIFT_100B2B2C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            uVar3 = rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10578204)) + 8));
          }
          else {
            wr32(COW_IMG(COW_ADDR_LIFT_104887F8), sVar1 + -1);
            cow_bridge_100ae3a0(g, COW_IMG(COW_ADDR_LIFT_100B2B27), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            cow_bridge_100b2a60(g, COW_IMG(COW_ADDR_LIFT_100B2B58), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            uVar3 = rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10578204)) + 8));
          }
          cow_bridge_1015e790(g, COW_IMG(COW_ADDR_LIFT_100B2B6E), 2u, (const CowU32[]){ uVar3, 1 }, 274864184u, g->edx, g->eax, 0u);
          cow_bridge_1013bf40(g, COW_IMG(COW_ADDR_LIFT_100B2B75), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
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
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100b2aa0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    { uint32_t A = (uint32_t)(COW_IMG(COW_ADDR_LIFT_1047D3EC) + RD); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x100b2aa0: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100b2aa5: push esi */
    cow_lift_100b2aa0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
