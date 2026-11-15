/* f_0x10296290 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10296290 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10296290(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    iVar2 = cow_bridge_10291220(g, COW_IMG(COW_ADDR_LIFT_102962A2), 2u, (const CowU32[]){ g->ebx, 271906812u }, g->ecx, g->edx, g->eax, 0u);
      if (iVar2 == 0) {
        cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_102962BF), 3u, (const CowU32[]){ 272316316u, 272350064u, 142u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_102962CA), 2u, (const CowU32[]){ 272341448u, g->ebx }, g->ecx, g->edx, g->eax, 20u);
        return;
      }
      cVar1 = cow_bridge_1029cd60(g, COW_IMG(COW_ADDR_LIFT_102962DE), 2u, (const CowU32[]){ iVar2, rd32((uint32_t)param_1) }, g->ecx, g->edx, g->eax, 8u);
      if (cVar1 == '\0') {
        cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_102962F9), 3u, (const CowU32[]){ 272316316u, 272350064u, 146u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_10296304), 2u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103B99B4), param_2 }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10311f70(g, COW_IMG(COW_ADDR_LIFT_1029630A), 1u, (const CowU32[]){ iVar2 }, g->ecx, g->edx, g->eax, 24u);
        return;
      }
      switch(rd32((uint32_t)param_1)) {
      case 0x50001:
        cow_bridge_10294890(g, COW_IMG(COW_ADDR_LIFT_1029632B), 2u, (const CowU32[]){ param_1, iVar2 }, g->ecx, g->edx, g->eax, 8u);
        cow_bridge_10311f70(g, COW_IMG(COW_ADDR_LIFT_10296334), 1u, (const CowU32[]){ iVar2 }, g->ecx, g->edx, g->eax, 4u);
        return;
      case 0x50002:
        cow_bridge_10295da0(g, COW_IMG(COW_ADDR_LIFT_10296342), 2u, (const CowU32[]){ param_1, iVar2 }, g->ecx, g->edx, g->eax, 8u);
        cow_bridge_10311f70(g, COW_IMG(COW_ADDR_LIFT_1029634B), 1u, (const CowU32[]){ iVar2 }, g->ecx, g->edx, g->eax, 4u);
        return;
      case 0x50003:
        cow_bridge_10293a20(g, COW_IMG(COW_ADDR_LIFT_10296359), 2u, (const CowU32[]){ param_1, iVar2 }, g->ecx, g->edx, g->eax, 8u);
        cow_bridge_10311f70(g, COW_IMG(COW_ADDR_LIFT_10296362), 1u, (const CowU32[]){ iVar2 }, g->ecx, g->edx, g->eax, 4u);
        return;
      default:
        cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_102963AB), 3u, (const CowU32[]){ 272316316u, 272350064u, 152u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_102963B8), 2u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103BBB9C), rd32((uint32_t)param_1) }, g->ecx, g->edx, g->eax, 20u);
        cow_bridge_10311f70(g, COW_IMG(COW_ADDR_LIFT_10296379), 1u, (const CowU32[]){ iVar2 }, g->ecx, g->edx, g->eax, 4u);
        return;
      case 0x50006:
        cow_bridge_102a5260(g, COW_IMG(COW_ADDR_LIFT_10296370), 2u, (const CowU32[]){ param_1, iVar2 }, g->ecx, g->edx, g->eax, 8u);
        cow_bridge_10311f70(g, COW_IMG(COW_ADDR_LIFT_10296390), 1u, (const CowU32[]){ iVar2 }, g->ecx, g->edx, g->eax, 4u);
        return;
      case 0x50009:
        cow_bridge_102a4860(g, COW_IMG(COW_ADDR_LIFT_10296387), 2u, (const CowU32[]){ param_1, iVar2 }, g->ecx, g->edx, g->eax, 8u);
        cow_bridge_10311f70(g, COW_IMG(COW_ADDR_LIFT_102963C1), 1u, (const CowU32[]){ iVar2 }, g->ecx, g->edx, g->eax, 4u);
        return;
      }
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10296290(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10296290: push ebx */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->ebx = (uint32_t)(rd32(A)); }   /* 0x10296291: register ebx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10296295: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10296296: push edi */
    cow_lift_10296290(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
