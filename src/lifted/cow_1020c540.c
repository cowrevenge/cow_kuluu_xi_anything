/* f_0x1020c540 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1020c540 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1020c540(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    CowU32 uVar3;
    CowU32 piVar4;
    CowU16 extraout_var;
    CowU16 extraout_var_00;
    CowU32 uVar5;
    iVar2 = cow_bridge_1020a420(g, COW_IMG(COW_ADDR_LIFT_1020C54F), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if (iVar2 == 0) {
        return;
      }
      if ((rd32((uint32_t)(iVar2 + 0x34)) & 0x400) == 0) {
        wr32((uint32_t)((int)param_1 + 0x14), 0);
      }
      else {
        wr32((uint32_t)((int)param_1 + 0x14), 1);
      }
      cow_bridge_101192b0(g, COW_IMG(COW_ADDR_LIFT_1020C57D), 2u, (const CowU32[]){ 1u, 1u }, g->ecx, g->edx, g->eax, 0u);
      if ((int32_t)rd32((uint32_t)((int)param_1 + 0x14)) == 1) {
        uVar5 = 0x11;
      }
      else {
        uVar5 = 0x12;
      }
      uVar5 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_1020C590), 2u, (const CowU32[]){ 0xe, uVar5 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_1011adb0(g, COW_IMG(COW_ADDR_LIFT_1020C59E), 2u, (const CowU32[]){ 1, uVar5 }, rd32((uint32_t)((int)param_1 + 8)), g->edx, g->eax, 0u);
      if ((rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) != 0) && ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x3c390)) == (int32_t)rd32((uint32_t)(iVar2 + 0x1c)))) {
        cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_1020C5C0), 2u, (const CowU32[]){ 5u, 2u }, g->ecx, g->edx, g->eax, 0u);
      }
      wr32((uint32_t)((int)param_1 + 0x20), 0);
      cow_bridge_101192b0(g, COW_IMG(COW_ADDR_LIFT_1020C5D3), 2u, (const CowU32[]){ 4u, 1u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_101192b0(g, COW_IMG(COW_ADDR_LIFT_1020C5DF), 2u, (const CowU32[]){ 5u, 1u }, g->ecx, g->edx, g->eax, 0u);
      if (((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10664494)) + 0x58)) != 3) && ((rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10664494)) + 0x5c)) & 0x1000000) != 0)) {
        wr32((uint32_t)((int)param_1 + 0x20), 1);
      }
      if ((int32_t)rd32((uint32_t)((int)param_1 + 0x20)) == 0) {
        uVar5 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_1020C611), 2u, (const CowU32[]){ 14u, 956u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_1011adb0(g, COW_IMG(COW_ADDR_LIFT_1020C61F), 2u, (const CowU32[]){ 4, uVar5 }, rd32((uint32_t)((int)param_1 + 8)), g->edx, g->eax, 0u);
        uVar5 = 0x3bb;
      }
      else {
        if ((int32_t)rd32((uint32_t)((int)param_1 + 0x20)) != 1) goto L_1020c65a;
        uVar5 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_1020C632), 2u, (const CowU32[]){ 14u, 954u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_1011adb0(g, COW_IMG(COW_ADDR_LIFT_1020C640), 2u, (const CowU32[]){ 4, uVar5 }, rd32((uint32_t)((int)param_1 + 8)), g->edx, g->eax, 0u);
        uVar5 = 0x3bd;
      }
      uVar5 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_1020C64C), 2u, (const CowU32[]){ 0xe, uVar5 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_1011adb0(g, COW_IMG(COW_ADDR_LIFT_1020C65A), 2u, (const CowU32[]){ 5, uVar5 }, rd32((uint32_t)((int)param_1 + 8)), g->edx, g->eax, 0u);
    L_1020c65a:
      cVar1 = cow_bridge_102031f0(g, COW_IMG(COW_ADDR_LIFT_1020C66D), 3u, (const CowU32[]){ rd32((uint32_t)(iVar2 + 0x1c)), 1, 1 }, g->ecx, g->edx, g->eax, 0u);
      if (((((cVar1 != '\0') || (uVar3 = rd32((uint32_t)(iVar2 + 0x34)), (uVar3 & 0x400) != 0)) ||
           (((uVar3 & 0x2000) != 0 && ((uVar3 & 8) == 0)))) || ((uVar3 & 0x10000000) != 0)) ||
         ((((rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) != 0 && (rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x3c350)) != (CowU32)rd16((uint32_t)(iVar2 + 0x2c)))
            ) && (cVar1 = cow_bridge_100fd370(g, COW_IMG(COW_ADDR_LIFT_1020C6A8), 1u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) }, g->ecx, g->edx, g->eax, 4u), cVar1 == '\0')) &&
          ((uVar3 = cow_bridge_101070f0(g, COW_IMG(COW_ADDR_LIFT_1020C6C1), 1u, (const CowU32[]){ (((uint32_t)(extraout_var) & 0xffffu) << 16 | ((uint32_t)(rd16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x3c350))) & 0xffffu)) }, g->ecx, g->edx, g->eax, 4u),
           (uVar3 & 4) == 0 ||
           (uVar3 = cow_bridge_101070f0(g, COW_IMG(COW_ADDR_LIFT_1020C6D2), 1u, (const CowU32[]){ (((uint32_t)(extraout_var_00) & 0xffffu) << 16 | ((uint32_t)(rd16((uint32_t)(iVar2 + 0x2c))) & 0xffffu)) }, g->ecx, g->edx, g->eax, 4u),
           (uVar3 & 4) == 0)))))) {
        cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_1020C6E5), 2u, (const CowU32[]){ 5u, 3u }, g->ecx, g->edx, g->eax, 0u);
      }
      if ((rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10485F7A))))) != 0) &&
         ((int16_t)rd16((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10485F7A))))) + 0x210)) != 0)) {
        cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_1020C70D), 2u, (const CowU32[]){ 5u, 3u }, g->ecx, g->edx, g->eax, 0u);
      }
      if ((int8_t)rd8((uint32_t)(iVar2 + 0x24)) == '\x17') {
        cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_1020C71F), 2u, (const CowU32[]){ 5u, 3u }, g->ecx, g->edx, g->eax, 0u);
      }
      cVar1 = cow_bridge_10201f00(g, COW_IMG(COW_ADDR_LIFT_1020C724), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if (cVar1 != '\0') {
        cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_1020C734), 2u, (const CowU32[]){ 5u, 3u }, g->ecx, g->edx, g->eax, 0u);
      }
      if (((rd8((uint32_t)(iVar2 + 0x34)) & 8) != 0) && (iVar2 = cow_bridge_10118bc0(g, COW_IMG(COW_ADDR_LIFT_1020C744), 1u, (const CowU32[]){ 3u }, g->ecx, g->edx, g->eax, 0u), iVar2 != 5)) {
        cVar1 = cow_bridge_10203310(g, COW_IMG(COW_ADDR_LIFT_1020C756), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 0u);
        if (cVar1 != '\0') {
          piVar4 = (CowU32)cow_bridge_101c8c30(g, COW_IMG(COW_ADDR_LIFT_1020C761), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_1011ae50(g, COW_IMG(COW_ADDR_LIFT_1020C777), 2u, (const CowU32[]){ 3, rd32((uint32_t)(rd32((uint32_t)piVar4) + 0x160)) }, rd32((uint32_t)((int)param_1 + 8)), g->edx, g->eax, 0u);
          uVar5 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_1020C780), 2u, (const CowU32[]){ 14u, 97u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_1011adb0(g, COW_IMG(COW_ADDR_LIFT_1020C78E), 2u, (const CowU32[]){ 3, uVar5 }, rd32((uint32_t)((int)param_1 + 8)), g->edx, g->eax, 0u);
          return;
        }
        cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_1020C79D), 2u, (const CowU32[]){ 5u, 3u }, g->ecx, g->edx, g->eax, 0u);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1020c540(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1020c540: push esi */
    g->esi = g->ecx;   /* 0x1020c541: the value the entry loaded and the decompiler dropped */
    g->ecx = rd32(COW_IMG(COW_ADDR_LIFT_10664494));   /* 0x1020c543: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1020c549: push edi */
    cow_lift_1020c540(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
