/* f_0x101d4a20 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101d4a20 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

int cow_lift_101d4a20(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    int iVar2;
    char cVar3;
    CowU8 uVar4;
    CowU16 uVar5;
    CowU32 uVar6;
    CowU32 uVar7;
    uint64_t uVar8;
    cow_bridge_101594d0(g, COW_IMG(COW_ADDR_LIFT_101D4A34), 1u, (const CowU32[]){ 270360640u }, rd32(COW_IMG(COW_ADDR_LIFT_1057876C)), g->edx, g->eax, 0u);
      uVar5 = cow_bridge_100a0080(g, COW_IMG(COW_ADDR_LIFT_101D4A39), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if ((uVar5 != 0) && ((int16_t)rd16((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(uVar5))) + 0xf2)) == 0)) {
        puVar1 = (CowU32)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(uVar5))) + 0x130);
        wr32((uint32_t)puVar1, rd32((uint32_t)puVar1) | 8);
      }
      cow_bridge_101d5580(g, COW_IMG(COW_ADDR_LIFT_101D4A64), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if (((rd32((uint32_t)rd32(COW_IMG(COW_ADDR_LIFT_10456A28))) != 0x60) || (rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) == 0)) || (rd32(COW_IMG(COW_ADDR_LIFT_106631D0)) != '\0')) {
        return 0;
      }
      if ((int8_t)rd8((uint32_t)((int)param_1 + 0x812)) != '\0') {
        if (uVar5 == 0) {
          uVar6 = (((uint32_t)(((CowU32)rd32(COW_IMG(COW_ADDR_LIFT_10456A28)) >> 8)) & 0xffffffu) << 8 | ((uint32_t)(rd8((uint32_t)((int)param_1 + 0x814))) & 0xffu));
          uVar7 = (((uint32_t)(((CowU32)g->edx >> 8)) & 0xffffffu) << 8 | ((uint32_t)(rd8((uint32_t)((int)param_1 + 0x813))) & 0xffu));
        }
        else {
          iVar2 = (int32_t)rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(uVar5))) + 0xa0));
          uVar8 = cow_bridge_10081550(g, COW_IMG(COW_ADDR_LIFT_101D4AB9), 0u, (const CowU32[]){ 0u }, 273143296u, g->edx, g->eax, 0u);
          if ((iVar2 == 0) || ((int)uVar8 == 0)) {
            uVar6 = (((uint32_t)(((uint64_t)uVar8 >> 0x28)) & 0xffffffu) << 8 | ((uint32_t)(rd8((uint32_t)((int)param_1 + 0x814))) & 0xffu));
            uVar7 = (((uint32_t)(((uint64_t)uVar8 >> 8)) & 0xffffffu) << 8 | ((uint32_t)(rd8((uint32_t)((int)param_1 + 0x813))) & 0xffu));
          }
          else {
            uVar6 = cow_bridge_10062ed0(g, COW_IMG(COW_ADDR_LIFT_101D4AD2), 4u, (const CowU32[]){ 0x13ae, 0x6e69616d, iVar2, (int)uVar8 }, g->ecx, g->edx, g->eax, 16u);
            if ((char)uVar6 != '\0') goto L_101d4b16;
            uVar6 = (((uint32_t)(((CowU32)uVar6 >> 8)) & 0xffffffu) << 8 | ((uint32_t)(rd8((uint32_t)((int)param_1 + 0x814))) & 0xffu));
            uVar7 = (((uint32_t)(((CowU32)g->ecx >> 8)) & 0xffffffu) << 8 | ((uint32_t)(rd8((uint32_t)((int)param_1 + 0x813))) & 0xffu));
          }
        }
        cow_bridge_100f0f30(g, COW_IMG(COW_ADDR_LIFT_101D4B0C), 2u, (const CowU32[]){ uVar7, uVar6 }, g->ecx, g->edx, g->eax, 8u);
        wr8((uint32_t)((int)param_1 + 0x812), 0);
      }
    L_101d4b16:
      if ((int32_t)rd32((uint32_t)((int)param_1 + 0x18)) != 0) {
        wr32((uint32_t)((int)param_1 + 0x18), (int32_t)rd32((uint32_t)((int)param_1 + 0x18)) + -1);
      }
      cow_bridge_101d3260(g, COW_IMG(COW_ADDR_LIFT_101D4B28), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      cow_bridge_10207360(g, COW_IMG(COW_ADDR_LIFT_101D4B33), 0u, (const CowU32[]){ 0u }, rd32(COW_IMG(COW_ADDR_LIFT_10664420)), g->edx, g->eax, 0u);
      cVar3 = cow_bridge_101d6000(g, COW_IMG(COW_ADDR_LIFT_101D4B3A), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if (cVar3 == '\0') {
        cow_bridge_101d2af0(g, COW_IMG(COW_ADDR_LIFT_101D4B45), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      }
      cVar3 = cow_bridge_10087070(g, COW_IMG(COW_ADDR_LIFT_101D4B4C), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if ((cVar3 != (int8_t)rd8((uint32_t)((int)param_1 + 0x23))) && ((int16_t)rd16((uint32_t)((int)param_1 + 0x1c)) != 0)) {
        cow_bridge_101d3380(g, COW_IMG(COW_ADDR_LIFT_101D4B6A), 3u, (const CowU32[]){ 0, 0xffffffff, 1 }, g->ecx, g->edx, g->eax, 0u);
      }
      uVar4 = cow_bridge_10087070(g, COW_IMG(COW_ADDR_LIFT_101D4B71), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 4u);
      wr8((uint32_t)((int)param_1 + 0x23), uVar4);
      cow_bridge_101d5410(g, COW_IMG(COW_ADDR_LIFT_101D4B7E), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      cow_bridge_101d4c80(g, COW_IMG(COW_ADDR_LIFT_101D4B85), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      cow_bridge_101d4d90(g, COW_IMG(COW_ADDR_LIFT_101D4B8C), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
      { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
      cow_bridge_tail_101d5120(g, rd32(COW_IMG(COW_ADDR_LIFT_1057876C)), g->edx, g->eax);
      return 1;
    return 0;   /* fell through: no tail call taken, run the epilogue */
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
void cow_adapter_101d4a20(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101d4a20: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101d4a21: push edi */
    g->esi = g->ecx;   /* 0x101d4a22: the value the entry loaded and the decompiler dropped */
    g->ecx = rd32(COW_IMG(COW_ADDR_LIFT_1057876C));   /* 0x101d4a24: the value the entry loaded and the decompiler dropped */
    if (cow_lift_101d4a20(g, param_1)) {
        /* INTRA-BODY TAIL CALL out of 1 site(s): 0x101d4b90 -> jmp 0x101d5120 (pops edi+esi). The target's own `ret` returned for this
           entry, so the pops, the esp restore and rt_return below describe a `ret` this path never
           executed. Returning here is what keeps the frame whole. */
        return;
    }

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 6 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
