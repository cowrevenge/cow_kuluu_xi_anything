/* f_0x101587f0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101587f0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101587f0(Guest* g, int32_t param_1, int32_t param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 uVar1;
    CowU32 uVar2;
    int iVar3;
    int iVar4;
    iVar4 = 0;
      if (((((rd8((uint32_t)(param_1 + 0x5c)) & 3) != 0) && ((int8_t)rd8((uint32_t)(param_1 + 0x59)) == '\0')) &&
          ((int32_t)rd32((uint32_t)(param_1 + 0xc4)) == 0)) && ((param_2 != 1 && (param_2 != 5)))) {
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
      }
      switch(param_2 + -1) {
      case 0:
        iVar4 = cow_bridge_10083620(g, COW_IMG(COW_ADDR_LIFT_10158843), 2u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x60)), rd32((uint32_t)(param_1 + 100)) }, g->ecx, g->edx, g->eax, 8u);
        break;
      case 1:
        iVar4 = cow_bridge_10158b60(g, COW_IMG(COW_ADDR_LIFT_1015886D), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        break;
      case 2:
        iVar4 = cow_bridge_10158c40(g, COW_IMG(COW_ADDR_LIFT_1015887D), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        break;
      case 3:
        iVar4 = cow_bridge_10158c40(g, COW_IMG(COW_ADDR_LIFT_1015888D), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 0u);
        break;
      case 4:
      case 5:
      case 0xb:
        if ((rd32((uint32_t)(param_1 + 0x60)) & 0x200) != 0) {
          iVar4 = cow_bridge_10081550(g, COW_IMG(COW_ADDR_LIFT_101588CA), 0u, (const CowU32[]){ 0u }, 273143296u, g->edx, g->eax, 0u);
        }
        break;
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
        if ((rd8((uint32_t)(param_1 + 0x60)) & 4) != 0) {
          iVar4 = cow_bridge_102034a0(g, COW_IMG(COW_ADDR_LIFT_101588AD), 1u, (const CowU32[]){ param_2 + -6 }, g->ecx, g->edx, g->eax, 0u);
        }
        break;
      case 0xc:
        if ((rd8((uint32_t)(param_1 + 0x60)) & 8) != 0) {
          iVar4 = cow_bridge_102034a0(g, COW_IMG(COW_ADDR_LIFT_101588E8), 1u, (const CowU32[]){ 6u }, g->ecx, g->edx, g->eax, 0u);
        }
        break;
      case 0xd:
        if ((rd8((uint32_t)(param_1 + 0x60)) & 8) != 0) {
          iVar4 = cow_bridge_102034a0(g, COW_IMG(COW_ADDR_LIFT_10158906), 1u, (const CowU32[]){ 12u }, g->ecx, g->edx, g->eax, 0u);
        }
        break;
      case 0xe:
        iVar4 = cow_bridge_10158ca0(g, COW_IMG(COW_ADDR_LIFT_10158916), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 0u);
        break;
      case 0xf:
        iVar4 = cow_bridge_10158ca0(g, COW_IMG(COW_ADDR_LIFT_10158926), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        break;
      case 0x10:
      case 0x16:
        iVar4 = cow_bridge_101598a0(g, COW_IMG(COW_ADDR_LIFT_101589AE), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (iVar4 != 0) {
          cow_bridge_10158ff0(g, COW_IMG(COW_ADDR_LIFT_101589B9), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10123e80(g, COW_IMG(COW_ADDR_LIFT_101589BE), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        }
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
      case 0x11:
      case 0x13:
        iVar4 = cow_bridge_10083ee0(g, COW_IMG(COW_ADDR_LIFT_10158949), 2u, (const CowU32[]){ 18u, 0u }, g->ecx, g->edx, g->eax, 0u);
        if (iVar4 == 0) {
          iVar4 = cow_bridge_10083ee0(g, COW_IMG(COW_ADDR_LIFT_10158963), 2u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x60)), rd32((uint32_t)(param_1 + 100)) }, g->ecx, g->edx, g->eax, 8u);
        }
        break;
      case 0x12:
        iVar4 = cow_bridge_10083f00(g, COW_IMG(COW_ADDR_LIFT_10158936), 2u, (const CowU32[]){ 16u, 0u }, g->ecx, g->edx, g->eax, 8u);
        break;
      case 0x14:
        iVar4 = cow_bridge_10083ec0(g, COW_IMG(COW_ADDR_LIFT_101589A0), 2u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x60)), rd32((uint32_t)(param_1 + 100)) }, g->ecx, g->edx, g->eax, 8u);
        break;
      case 0x15:
        if ((int8_t)rd8((uint32_t)(param_1 + 0x22)) == '\0') {
          iVar4 = cow_bridge_10158d90(g, COW_IMG(COW_ADDR_LIFT_1015885F), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        }
        break;
      case 0x17:
        uVar2 = 0;
        goto L_101589dc;
      case 0x18:
        uVar2 = 1;
        goto L_101589dc;
      case 0x19:
        uVar2 = 3;
        goto L_101589dc;
      case 0x1a:
        uVar2 = 2;
    L_101589dc:
        if ((((int8_t)rd8((uint32_t)(param_1 + 0x59)) != '\0') || ((int32_t)rd32((uint32_t)(param_1 + 0xc4)) != 0)) &&
           ((int8_t)rd8((uint32_t)(param_1 + 0x58)) != '\0')) {
          cow_bridge_10158ae0(g, COW_IMG(COW_ADDR_LIFT_101589FC), 1u, (const CowU32[]){ uVar2 }, g->ecx, g->edx, g->eax, 0u);
        }
        break;
      case 0x1b:
        iVar4 = cow_bridge_10083ee0(g, COW_IMG(COW_ADDR_LIFT_10158976), 2u, (const CowU32[]){ 16u, 0u }, g->ecx, g->edx, g->eax, 0u);
        if (iVar4 == 0) {
          iVar4 = cow_bridge_10083ee0(g, COW_IMG(COW_ADDR_LIFT_1015898C), 2u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x60)), rd32((uint32_t)(param_1 + 100)) }, g->ecx, g->edx, g->eax, 8u);
        }
      }
      uVar1 = 0;
      if (iVar4 != 0) {
        uVar1 = cow_bridge_10157b40(g, COW_IMG(COW_ADDR_LIFT_10158A0F), 3u, (const CowU32[]){ iVar4, 0, 0 }, g->ecx, g->edx, g->eax, 0u);
        iVar3 = cow_bridge_101598a0(g, COW_IMG(COW_ADDR_LIFT_10158A18), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (iVar3 == iVar4) {
          cow_bridge_10037dd0(g, COW_IMG(COW_ADDR_LIFT_10158A21), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        }
      }
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(uVar1) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [ebx, edi, esi], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101587f0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101587f0: push esi */
    g->esi = g->ecx;   /* 0x101587f1: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esp + 0x8u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x101587f3: register ecx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101587f7: push edi */
    { uint32_t A = (uint32_t)(g->esi + 0x5Cu); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x101587f8: register eax, replayed as the entry ran it */
    g->edi = 0u;   /* 0x101587fb: the value the entry loaded and the decompiler dropped */
    cow_lift_101587f0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
