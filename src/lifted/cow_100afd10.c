/* f_0x100afd10 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100afd10 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100afd10(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU16 uVar1;
    int iVar2;
    int iVar3;
    CowU32 uVar4;
    CowU32 uVar5;
    CowU32 uVar7;
    _Bool bVar6;
      
      cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100AFD1B), 1u, (const CowU32[]){ 1u }, param_1, g->edx, g->eax, 0u);
      cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100AFD24), 1u, (const CowU32[]){ 3u }, param_1, g->edx, g->eax, 0u);
      switch(rd8((uint32_t)((int32_t)rd32((uint32_t)((int)param_1 + 0x20)) + 5 + (CowU32)rd16((uint32_t)((int)param_1 + 0x256)))) &
             0xf) {
      case 0:
        iVar2 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100AFD4C), 1u, (const CowU32[]){ 3u }, param_1, g->edx, g->eax, 0u);
        iVar3 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100AFD57), 1u, (const CowU32[]){ 1u }, param_1, g->edx, g->eax, 0u);
        if (iVar3 != iVar2) break;
        goto L_100afe7e;
      case 1:
        iVar2 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100AFD7B), 1u, (const CowU32[]){ 3u }, g->ecx, g->edx, g->eax, 0u);
        iVar3 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100AFD86), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 0u);
        bVar6 = iVar3 == iVar2;
        goto L_100afe78;
      case 2:
        iVar2 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100AFD96), 1u, (const CowU32[]){ 3u }, g->ecx, g->edx, g->eax, 0u);
        iVar3 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100AFDA1), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 0u);
        if (iVar2 < iVar3) {
          wr16((uint32_t)((int)param_1 + 0x256), (int16_t)rd16((uint32_t)((int)param_1 + 0x256)) + 8);
          return;
        }
        break;
      case 3:
        iVar2 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100AFDB9), 1u, (const CowU32[]){ 3u }, g->ecx, g->edx, g->eax, 0u);
        iVar3 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100AFDC4), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 0u);
        if (iVar3 < iVar2) {
          wr16((uint32_t)((int)param_1 + 0x256), (int16_t)rd16((uint32_t)((int)param_1 + 0x256)) + 8);
          return;
        }
        break;
      case 4:
        iVar2 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100AFDDC), 1u, (const CowU32[]){ 3u }, g->ecx, g->edx, g->eax, 0u);
        iVar3 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100AFDE7), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 0u);
        if (iVar2 <= iVar3) {
          wr16((uint32_t)((int)param_1 + 0x256), (int16_t)rd16((uint32_t)((int)param_1 + 0x256)) + 8);
          return;
        }
        break;
      case 5:
        iVar2 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100AFE03), 1u, (const CowU32[]){ 3u }, g->ecx, g->edx, g->eax, 0u);
        iVar3 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100AFE0E), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 0u);
        if (iVar3 <= iVar2) {
          wr16((uint32_t)((int)param_1 + 0x256), (int16_t)rd16((uint32_t)((int)param_1 + 0x256)) + 8);
          return;
        }
        break;
      case 6:
      case 9:
        uVar4 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100AFE2A), 1u, (const CowU32[]){ 3u }, g->ecx, g->edx, g->eax, 0u);
        uVar7 = 1;
        goto L_100afe6f;
      case 7:
        iVar2 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100AFE35), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 0u);
        iVar3 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100AFE42), 1u, (const CowU32[]){ 3u }, g->ecx, g->edx, g->eax, 0u);
        bVar6 = iVar2 == iVar3;
        goto L_100afe78;
      case 8:
        iVar2 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100AFE4D), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 0u);
        iVar3 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100AFE5A), 1u, (const CowU32[]){ 3u }, g->ecx, g->edx, g->eax, 0u);
        bVar6 = iVar2 == 0 && iVar3 == 0;
        goto L_100afe78;
      case 10:
        uVar4 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100AFE69), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 0u);
        uVar7 = 3;
        uVar4 = ~uVar4;
    L_100afe6f:
        uVar5 = cow_bridge_100af4b0(g, COW_IMG(COW_ADDR_LIFT_100AFE76), 1u, (const CowU32[]){ uVar7 }, g->ecx, g->edx, g->eax, 0u);
        bVar6 = (uVar5 & uVar4) == 0;
    L_100afe78:
        if (!bVar6) {
    L_100afe7e:
          wr16((uint32_t)((int)param_1 + 0x256), (int16_t)rd16((uint32_t)((int)param_1 + 0x256)) + 8);
          return;
        }
      }
      uVar1 = cow_bridge_100afa90(g, COW_IMG(COW_ADDR_LIFT_100AFD68), 1u, (const CowU32[]){ 6u }, param_1, g->edx, g->eax, 0u);
      wr16((uint32_t)((int)param_1 + 0x256), uVar1);
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
void cow_adapter_100afd10(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100afd10: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100afd11: push edi */
    cow_lift_100afd10(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
