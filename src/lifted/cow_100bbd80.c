/* f_0x100bbd80 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100bbd80 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100bbd80(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 puVar2;
    int iVar3;
    CowU32 uVar4;
    CowU32 pcVar5;
    cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100BBD8C), 1u, (const CowU32[]){ 2u }, param_1, g->edx, g->eax, 0u);
      switch(rd8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x20)) + 1 + (CowU32)rd16((uint32_t)(param_1 + 0x256))))) {
      case 0:
        uVar4 = 0;
        puVar2 = (CowU32)cow_bridge_100f97c0(g, COW_IMG(COW_ADDR_LIFT_100BBDC0), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (puVar2 != (CowU32)0x0) {
          iVar3 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100BBDD6), 1u, (const CowU32[]){ 4u }, param_1, g->edx, g->eax, 0u);
          if (iVar3 == 0) {
    L_100bbeee:
            uVar4 = rd32((uint32_t)puVar2);
          }
          else if (iVar3 == 1) {
            uVar4 = rd32((uint32_t)(puVar2 + 4u * (uint32_t)(1)));
          }
          else {
            cow_bridge_10017d20(g, COW_IMG(COW_ADDR_LIFT_100BBDEE), 2u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_1035D4D8), iVar3 }, g->ecx, g->edx, g->eax, 8u);
          }
        }
        break;
      default:
        goto switchD_100bbdb1_caseD_1;
      case 0x20:
        uVar4 = 0;
        iVar3 = cow_bridge_100f97f0(g, COW_IMG(COW_ADDR_LIFT_100BBE06), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (iVar3 == 0) goto L_100bbeaa;
        iVar1 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100BBE1C), 1u, (const CowU32[]){ 4u }, g->ecx, g->edx, g->eax, 0u);
        if (iVar1 < 8) {
          puVar2 = (CowU32)(iVar3 + iVar1 * 0xc);
          iVar1 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100BBE30), 1u, (const CowU32[]){ 6u }, g->ecx, g->edx, g->eax, 0u);
          if (iVar1 == 0) {
    L_100bbe4e:
            uVar4 = rd32((uint32_t)puVar2);
            goto L_100bbeaa;
          }
          if (iVar1 == 1) {
    L_100bbe49:
            uVar4 = rd32((uint32_t)(puVar2 + 4u * (uint32_t)(1)));
            goto L_100bbeaa;
          }
          if (iVar1 == 2) {
    L_100bbe44:
            uVar4 = rd32((uint32_t)(puVar2 + 4u * (uint32_t)(2)));
            goto L_100bbeaa;
          }
          pcVar5 = COW_IMG(COW_ADDR_LIFT_1035D49C);
        }
        else {
          pcVar5 = COW_IMG(COW_ADDR_LIFT_1035D45C);
        }
        goto L_100bbea2;
      case 0x40:
        uVar4 = 0;
        iVar3 = cow_bridge_100f9820(g, COW_IMG(COW_ADDR_LIFT_100BBE62), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (iVar3 == 0) goto L_100bbeaa;
        iVar1 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100BBE74), 1u, (const CowU32[]){ 4u }, g->ecx, g->edx, g->eax, 0u);
        if (iVar1 < 0x20) {
          puVar2 = (CowU32)(iVar3 + iVar1 * 0xc);
          iVar1 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100BBE88), 1u, (const CowU32[]){ 6u }, g->ecx, g->edx, g->eax, 0u);
          if (iVar1 == 0) goto L_100bbe4e;
          if (iVar1 == 1) goto L_100bbe49;
          if (iVar1 == 2) goto L_100bbe44;
          pcVar5 = COW_IMG(COW_ADDR_LIFT_1035D420);
        }
        else {
          pcVar5 = COW_IMG(COW_ADDR_LIFT_1035D3E8);
        }
    L_100bbea2:
        uVar4 = 0;
        cow_bridge_10017d20(g, COW_IMG(COW_ADDR_LIFT_100BBEA7), 2u, (const CowU32[]){ pcVar5, iVar1 }, g->ecx, g->edx, g->eax, 8u);
    L_100bbeaa:
        cow_bridge_100af310(g, COW_IMG(COW_ADDR_LIFT_100BBEB4), 2u, (const CowU32[]){ 8, uVar4 }, g->ecx, g->edx, g->eax, 0u);
        wr16((uint32_t)(param_1 + 0x256), (int16_t)rd16((uint32_t)(param_1 + 0x256)) + 10);
        return;
      case 0x60:
        uVar4 = 0;
        puVar2 = (CowU32)cow_bridge_100f9850(g, COW_IMG(COW_ADDR_LIFT_100BBEC8), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (puVar2 != (CowU32)0x0) {
          iVar3 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100BBEDA), 1u, (const CowU32[]){ 4u }, g->ecx, g->edx, g->eax, 0u);
          if (iVar3 == 0) goto L_100bbeee;
          cow_bridge_10017d20(g, COW_IMG(COW_ADDR_LIFT_100BBEE9), 2u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_1035D3AC), iVar3 }, g->ecx, g->edx, g->eax, 8u);
        }
      }
      cow_bridge_100af310(g, COW_IMG(COW_ADDR_LIFT_100BBEFA), 2u, (const CowU32[]){ 6, uVar4 }, g->ecx, g->edx, g->eax, 0u);
      wr16((uint32_t)(param_1 + 0x256), (int16_t)rd16((uint32_t)(param_1 + 0x256)) + 8);
    switchD_100bbdb1_caseD_1:
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100bbd80(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100bbd80: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100bbd81: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100bbd82: push edi */
    cow_lift_100bbd80(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 6 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
