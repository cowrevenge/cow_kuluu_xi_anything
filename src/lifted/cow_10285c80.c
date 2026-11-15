/* f_0x10285c80 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10285c80 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10285c80(Guest* g, int32_t param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    CowU32 uVar3;
    int iVar4;
    int iVar5;
    iVar2 = cow_bridge_10313de9(g, COW_IMG(COW_ADDR_LIFT_10285C8E), 1u, (const CowU32[]){ g->esi }, g->ecx, g->edx, g->eax, 0u);
      if (rd32(COW_IMG(COW_ADDR_LIFT_109A2788)) != 0) {
        uVar3 = cow_bridge_10313de9(g, COW_IMG(COW_ADDR_LIFT_10285CA2), 1u, (const CowU32[]){ g->esi }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10314d95(g, COW_IMG(COW_ADDR_LIFT_10285CB3), 3u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), COW_IMG(COW_ADDR_LIFT_103B7F38), uVar3 }, g->ecx, g->edx, g->eax, 16u);
      }
      cow_bridge_10285f20(g, COW_IMG(COW_ADDR_LIFT_10285CBC), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_102860e0(g, COW_IMG(COW_ADDR_LIFT_10285CC7), 2u, (const CowU32[]){ param_1, param_2 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10286170(g, COW_IMG(COW_ADDR_LIFT_10285CCE), 2u, (const CowU32[]){ param_1, param_2 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10285fb0(g, COW_IMG(COW_ADDR_LIFT_10285CD9), 2u, (const CowU32[]){ 0xefbeddba, param_2 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10285fb0(g, COW_IMG(COW_ADDR_LIFT_10285CE4), 2u, (const CowU32[]){ 0xefbeddba, param_2 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10285fb0(g, COW_IMG(COW_ADDR_LIFT_10285CEE), 2u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x24)), param_2 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10285fb0(g, COW_IMG(COW_ADDR_LIFT_10285CF8), 2u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x28)), param_2 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10285fb0(g, COW_IMG(COW_ADDR_LIFT_10285D03), 2u, (const CowU32[]){ 0xefbeddba, param_2 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10285fb0(g, COW_IMG(COW_ADDR_LIFT_10285D0E), 2u, (const CowU32[]){ 0xefbeddba, param_2 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10285fb0(g, COW_IMG(COW_ADDR_LIFT_10285D1B), 2u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x34)), param_2 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10285fb0(g, COW_IMG(COW_ADDR_LIFT_10285D25), 2u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x38)), param_2 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10285fb0(g, COW_IMG(COW_ADDR_LIFT_10285D30), 2u, (const CowU32[]){ 0xefbeddba, param_2 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10285fb0(g, COW_IMG(COW_ADDR_LIFT_10285D3B), 2u, (const CowU32[]){ 0xefbeddba, param_2 }, g->ecx, g->edx, g->eax, 0u);
      iVar4 = (int32_t)rd32((uint32_t)(param_1 + 0x44));
      iVar5 = (int32_t)rd32((uint32_t)(param_1 + 0x48));
      if (((int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x48))) <= (int32_t)(iVar4))) {
        iVar5 = iVar4;
      }
      cow_bridge_10285fb0(g, COW_IMG(COW_ADDR_LIFT_10285D53), 2u, (const CowU32[]){ iVar4, param_2 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10285fb0(g, COW_IMG(COW_ADDR_LIFT_10285D5D), 2u, (const CowU32[]){ iVar5 + 0x10, param_2 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10285fb0(g, COW_IMG(COW_ADDR_LIFT_10285D68), 2u, (const CowU32[]){ 0xefbeddba, param_2 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10285fb0(g, COW_IMG(COW_ADDR_LIFT_10285D73), 2u, (const CowU32[]){ 0xefbeddba, param_2 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10285fb0(g, COW_IMG(COW_ADDR_LIFT_10285D7E), 2u, (const CowU32[]){ 0xefbeddba, param_2 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10285fb0(g, COW_IMG(COW_ADDR_LIFT_10285D88), 2u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x58)), param_2 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10285fb0(g, COW_IMG(COW_ADDR_LIFT_10285D92), 2u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x5c)), param_2 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10285fb0(g, COW_IMG(COW_ADDR_LIFT_10285D9D), 2u, (const CowU32[]){ 0xefbeddba, param_2 }, g->ecx, g->edx, g->eax, 64u);
      cow_bridge_10285fb0(g, COW_IMG(COW_ADDR_LIFT_10285DAB), 2u, (const CowU32[]){ 0xefbeddba, param_2 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10285fb0(g, COW_IMG(COW_ADDR_LIFT_10285DB5), 2u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x68)), param_2 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10285fb0(g, COW_IMG(COW_ADDR_LIFT_10285DBF), 2u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x6c)), param_2 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10285fb0(g, COW_IMG(COW_ADDR_LIFT_10285DCA), 2u, (const CowU32[]){ 0xefbeddba, param_2 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10285fb0(g, COW_IMG(COW_ADDR_LIFT_10285DD5), 2u, (const CowU32[]){ 0xefbeddba, param_2 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10285fb0(g, COW_IMG(COW_ADDR_LIFT_10285DE0), 2u, (const CowU32[]){ 0xefbeddba, param_2 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10285fb0(g, COW_IMG(COW_ADDR_LIFT_10285DEA), 2u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x7c)), param_2 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10285fb0(g, COW_IMG(COW_ADDR_LIFT_10285DF7), 2u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x80)), param_2 }, g->ecx, g->edx, g->eax, 64u);
      cow_bridge_10285fb0(g, COW_IMG(COW_ADDR_LIFT_10285E05), 2u, (const CowU32[]){ 0xefbeddba, param_2 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10285fb0(g, COW_IMG(COW_ADDR_LIFT_10285E10), 2u, (const CowU32[]){ 0xefbeddba, param_2 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10285fb0(g, COW_IMG(COW_ADDR_LIFT_10285E1B), 2u, (const CowU32[]){ 0xefbeddba, param_2 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10285fb0(g, COW_IMG(COW_ADDR_LIFT_10285E28), 2u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x90)), param_2 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10285fb0(g, COW_IMG(COW_ADDR_LIFT_10285E35), 2u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x94)), param_2 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10285fb0(g, COW_IMG(COW_ADDR_LIFT_10285E40), 2u, (const CowU32[]){ 0xefbeddba, param_2 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10285fb0(g, COW_IMG(COW_ADDR_LIFT_10285E4B), 2u, (const CowU32[]){ 0xefbeddba, param_2 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10285fb0(g, COW_IMG(COW_ADDR_LIFT_10285E56), 2u, (const CowU32[]){ 0xefbeddba, param_2 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10285fb0(g, COW_IMG(COW_ADDR_LIFT_10285E66), 2u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0xa4)), param_2 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10285fb0(g, COW_IMG(COW_ADDR_LIFT_10285E73), 2u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0xa8)), param_2 }, g->ecx, g->edx, g->eax, 0u);
      iVar4 = cow_bridge_10313de9(g, COW_IMG(COW_ADDR_LIFT_10285E79), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, g->eax, 0u);
      if (iVar4 - iVar2 != 0xac) {
        g->eax = (CowU32)(0); return;
      }
      cVar1 = cow_bridge_102861e0(g, COW_IMG(COW_ADDR_LIFT_10285E93), 2u, (const CowU32[]){ param_1, param_2 }, g->ecx, g->edx, g->eax, 8u);
      if (cVar1 == '\0') {
        g->eax = (CowU32)(0); return;
      }
      cVar1 = cow_bridge_10286b90(g, COW_IMG(COW_ADDR_LIFT_10285EA6), 2u, (const CowU32[]){ param_1, param_2 }, g->ecx, g->edx, g->eax, 8u);
      if (cVar1 == '\0') {
        g->eax = (CowU32)(0); return;
      }
      cVar1 = cow_bridge_10286f00(g, COW_IMG(COW_ADDR_LIFT_10285EB9), 2u, (const CowU32[]){ param_1, param_2 }, g->ecx, g->edx, g->eax, 8u);
      if (cVar1 == '\0') {
        g->eax = (CowU32)(0); return;
      }
      cVar1 = cow_bridge_10287640(g, COW_IMG(COW_ADDR_LIFT_10285ECC), 2u, (const CowU32[]){ param_1, param_2 }, g->ecx, g->edx, g->eax, 8u);
      if (cVar1 == '\0') {
        g->eax = (CowU32)(0); return;
      }
      cVar1 = cow_bridge_10287740(g, COW_IMG(COW_ADDR_LIFT_10285EDF), 2u, (const CowU32[]){ param_1, param_2 }, g->ecx, g->edx, g->eax, 8u);
      if (cVar1 == '\0') {
        g->eax = (CowU32)(0); return;
      }
      if (rd32(COW_IMG(COW_ADDR_LIFT_109A2788)) != 0) {
        uVar3 = cow_bridge_10313de9(g, COW_IMG(COW_ADDR_LIFT_10285EFA), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10314d95(g, COW_IMG(COW_ADDR_LIFT_10285F0B), 3u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_109A2788)), COW_IMG(COW_ADDR_LIFT_103B7F0C), uVar3 }, g->ecx, g->edx, g->eax, 16u);
      }
      g->eax = (CowU32)(0xff); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10285c80(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10285c80: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10285c81: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10285c82: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x14u); g->esi = (uint32_t)(rd32(A)); }   /* 0x10285c83: register esi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10285c87: push edi */
    cow_lift_10285c80(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
