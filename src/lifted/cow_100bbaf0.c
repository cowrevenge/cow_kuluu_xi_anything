/* f_0x100bbaf0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100bbaf0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100bbaf0(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    short sVar2;
    CowU32 uVar3;
    CowU32 uVar4;
    switch(rd8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x20)) + 1 + (CowU32)rd16((uint32_t)(param_1 + 0x256))))) {
      case 0:
        uVar4 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100BBB27), 1u, (const CowU32[]){ 2u }, g->esi, g->edx, g->eax, 0u);
        uVar3 = 1;
        break;
      case 1:
        cVar1 = cow_bridge_100a34d0(g, COW_IMG(COW_ADDR_LIFT_100BBB34), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (cVar1 != '\0') {
          cVar1 = cow_bridge_100a34b0(g, COW_IMG(COW_ADDR_LIFT_100BBB41), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_100af310(g, COW_IMG(COW_ADDR_LIFT_100BBB4E), 2u, (const CowU32[]){ 2, (int)cVar1 }, g->esi, g->edx, g->eax, 0u);
          sVar2 = cow_bridge_100a33f0(g, COW_IMG(COW_ADDR_LIFT_100BBB53), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_100af310(g, COW_IMG(COW_ADDR_LIFT_100BBB60), 2u, (const CowU32[]){ 4, (int)sVar2 }, g->esi, g->edx, g->eax, 0u);
          sVar2 = cow_bridge_100a3400(g, COW_IMG(COW_ADDR_LIFT_100BBB65), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_100af310(g, COW_IMG(COW_ADDR_LIFT_100BBB72), 2u, (const CowU32[]){ 6, (int)sVar2 }, g->esi, g->edx, g->eax, 0u);
          sVar2 = cow_bridge_100a3410(g, COW_IMG(COW_ADDR_LIFT_100BBB77), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_100af310(g, COW_IMG(COW_ADDR_LIFT_100BBB84), 2u, (const CowU32[]){ 8, (int)sVar2 }, g->esi, g->edx, g->eax, 0u);
          sVar2 = cow_bridge_100a3450(g, COW_IMG(COW_ADDR_LIFT_100BBB89), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_100af310(g, COW_IMG(COW_ADDR_LIFT_100BBB96), 2u, (const CowU32[]){ 10, (int)sVar2 }, g->esi, g->edx, g->eax, 0u);
          sVar2 = cow_bridge_100a3460(g, COW_IMG(COW_ADDR_LIFT_100BBB9B), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_100af310(g, COW_IMG(COW_ADDR_LIFT_100BBBA8), 2u, (const CowU32[]){ 0xc, (int)sVar2 }, g->esi, g->edx, g->eax, 0u);
          wr16((uint32_t)(param_1 + 0x256), (int16_t)rd16((uint32_t)(param_1 + 0x256)) + 0xe);
          wr8((uint32_t)(param_1 + 0x25a), 1);
          return;
        }
        goto L_100bbd41;
      case 2:
        if (rd32(COW_IMG(COW_ADDR_LIFT_10664444)) != 0) {
          uVar4 = cow_bridge_100a3490(g, COW_IMG(COW_ADDR_LIFT_100BBBC8), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_1020a2a0(g, COW_IMG(COW_ADDR_LIFT_100BBBD4), 1u, (const CowU32[]){ uVar4 }, g->ecx, g->edx, g->eax, 0u);
        }
        wr16((uint32_t)(param_1 + 0x256), (int16_t)rd16((uint32_t)(param_1 + 0x256)) + 2);
        wr8((uint32_t)(param_1 + 0x25a), 1);
        return;
      case 3:
        uVar4 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100BBBEF), 1u, (const CowU32[]){ 2u }, g->ecx, g->edx, g->eax, 0u);
        uVar3 = 10;
        break;
      case 4:
        uVar4 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100BBC00), 1u, (const CowU32[]){ 2u }, g->ecx, g->edx, g->eax, 0u);
        uVar3 = 0xb;
        break;
      case 5:
        cVar1 = cow_bridge_100a34e0(g, COW_IMG(COW_ADDR_LIFT_100BBC0D), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (cVar1 != '\0') {
          cVar1 = cow_bridge_100a34b0(g, COW_IMG(COW_ADDR_LIFT_100BBC1A), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_100af310(g, COW_IMG(COW_ADDR_LIFT_100BBC27), 2u, (const CowU32[]){ 2, (int)cVar1 }, g->ecx, g->edx, g->eax, 0u);
          sVar2 = cow_bridge_100a33f0(g, COW_IMG(COW_ADDR_LIFT_100BBC2C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_100af310(g, COW_IMG(COW_ADDR_LIFT_100BBC39), 2u, (const CowU32[]){ 4, (int)sVar2 }, g->ecx, g->edx, g->eax, 0u);
          sVar2 = cow_bridge_100a3400(g, COW_IMG(COW_ADDR_LIFT_100BBC3E), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_100af310(g, COW_IMG(COW_ADDR_LIFT_100BBC4B), 2u, (const CowU32[]){ 6, (int)sVar2 }, g->ecx, g->edx, g->eax, 0u);
          sVar2 = cow_bridge_100a3410(g, COW_IMG(COW_ADDR_LIFT_100BBC50), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_100af310(g, COW_IMG(COW_ADDR_LIFT_100BBC5D), 2u, (const CowU32[]){ 8, (int)sVar2 }, g->ecx, g->edx, g->eax, 0u);
          sVar2 = cow_bridge_100a3450(g, COW_IMG(COW_ADDR_LIFT_100BBC62), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_100af310(g, COW_IMG(COW_ADDR_LIFT_100BBC6F), 2u, (const CowU32[]){ 10, (int)sVar2 }, g->ecx, g->edx, g->eax, 0u);
          sVar2 = cow_bridge_100a3460(g, COW_IMG(COW_ADDR_LIFT_100BBC74), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_100af310(g, COW_IMG(COW_ADDR_LIFT_100BBC81), 2u, (const CowU32[]){ 0xc, (int)sVar2 }, g->ecx, g->edx, g->eax, 0u);
          uVar4 = cow_bridge_100a3470(g, COW_IMG(COW_ADDR_LIFT_100BBC86), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_100af310(g, COW_IMG(COW_ADDR_LIFT_100BBC90), 2u, (const CowU32[]){ 0xe, uVar4 }, g->ecx, g->edx, g->eax, 0u);
          uVar4 = cow_bridge_100a3480(g, COW_IMG(COW_ADDR_LIFT_100BBC95), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_100af310(g, COW_IMG(COW_ADDR_LIFT_100BBC9F), 2u, (const CowU32[]){ 0x10, uVar4 }, g->ecx, g->edx, g->eax, 0u);
          wr16((uint32_t)(param_1 + 0x256), (int16_t)rd16((uint32_t)(param_1 + 0x256)) + 0x12);
          wr8((uint32_t)(param_1 + 0x25a), 1);
          return;
        }
        goto L_100bbd41;
      case 6:
        uVar4 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100BBCBA), 1u, (const CowU32[]){ 2u }, g->ecx, g->edx, g->eax, 0u);
        uVar3 = 0xc;
        break;
      case 7:
        uVar4 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100BBCC8), 1u, (const CowU32[]){ 2u }, g->ecx, g->edx, g->eax, 0u);
        uVar3 = 0xd;
        break;
      case 8:
        if (rd32(COW_IMG(COW_ADDR_LIFT_10664444)) != 0) {
          cow_bridge_1020a330(g, COW_IMG(COW_ADDR_LIFT_100BBCF4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        }
        wr16((uint32_t)(param_1 + 0x256), (int16_t)rd16((uint32_t)(param_1 + 0x256)) + 2);
        wr8((uint32_t)(param_1 + 0x25a), 1);
        return;
      case 9:
        if ((rd32(COW_IMG(COW_ADDR_LIFT_10664444)) == 0) || ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10664444)) + 8)) == 0)) {
          uVar4 = 0;
        }
        else {
          uVar4 = 1;
        }
        cow_bridge_100af310(g, COW_IMG(COW_ADDR_LIFT_100BBD25), 2u, (const CowU32[]){ 2, uVar4 }, g->ecx, g->edx, g->eax, 0u);
        wr16((uint32_t)(param_1 + 0x256), (int16_t)rd16((uint32_t)(param_1 + 0x256)) + 4);
        wr8((uint32_t)(param_1 + 0x25a), 1);
        return;
      default:
        wr16((uint32_t)(param_1 + 0x256), rd16((uint32_t)(param_1 + 0x256)) + 2);
    L_100bbd41:
        wr8((uint32_t)(param_1 + 0x25a), 1);
        return;
      }
      cow_bridge_100a3310(g, COW_IMG(COW_ADDR_LIFT_100BBCD0), 2u, (const CowU32[]){ uVar3, uVar4 }, g->ecx, g->edx, g->eax, 8u);
      wr16((uint32_t)(param_1 + 0x256), (int16_t)rd16((uint32_t)(param_1 + 0x256)) + 4);
      wr8((uint32_t)(param_1 + 0x25a), 1);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [esi, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100bbaf0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100bbaf0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100bbaf1: push esi */
    g->esi = g->ecx;   /* 0x100bbaf2: the value the entry loaded and the decompiler dropped */
    g->ebx = 0u;   /* 0x100bbaf4: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esi + 0x256u); g->eax = (g->eax & 0xFFFF0000u) | (uint16_t)(rd16(A)); }   /* 0x100bbaf6: register eax, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esi + 0x20u); g->edx = (uint32_t)(rd32(A)); }   /* 0x100bbafd: register edx, replayed as the entry ran it */
    g->ecx = g->eax;   /* 0x100bbb00: the value the entry loaded and the decompiler dropped */
    { uint32_t a = g->ecx; uint32_t b = (uint32_t)0xFFFFu; uint32_t r = (uint32_t)(a & b); g->ecx = (uint32_t)(r); }   /* 0x100bbb02: register ecx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->edx + g->ecx + 0x1u); g->ebx = (g->ebx & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x100bbb08: register ebx, replayed as the entry ran it */
    g->ecx = g->ebx;   /* 0x100bbb0c: the value the entry loaded and the decompiler dropped */
    cow_lift_100bbaf0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 6 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
