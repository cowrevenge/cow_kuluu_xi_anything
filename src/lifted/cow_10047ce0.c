/* f_0x10047ce0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10047ce0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10047ce0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 this_00;
    int iVar1;
    CowU8 bVar2;
    int iVar3;
    CowU32 pvVar4;
    CowU32 pvVar5;
    CowU32 uVar6;
    CowU32 pvVar7;
    CowU8 bVar8;
    _Bool bVar9;
      
      wr32((uint32_t)((int)param_1 + 0xe0), (int)param_1 + (int32_t)rd32((uint32_t)((int)param_1 + 0xe0)) + 0x60);
      wr32((uint32_t)((int)param_1 + 0xe4), (int)param_1 + (int32_t)rd32((uint32_t)((int)param_1 + 0xe4)) + 0x60);
      wr32((uint32_t)((int)param_1 + 0xe8), (int)param_1 + (int32_t)rd32((uint32_t)((int)param_1 + 0xe8)) + 0x60);
      this_00 = (CowU32)((int)param_1 + 0x30);
      wr16((uint32_t)((int)param_1 + 0xdc), 0);
      wr32((uint32_t)((int)param_1 + 0xb0), 0);
      wr32((uint32_t)((int)param_1 + 0xec), (int)param_1 + (int32_t)rd32((uint32_t)((int)param_1 + 0xec)) + 0x60);
      cow_bridge_1003b750(g, COW_IMG(COW_ADDR_LIFT_10047D48), 1u, (const CowU32[]){ 0u }, this_00, (g->esi + 96u), (g->esi + 96u), 0u);
      cow_bridge_1003b780(g, COW_IMG(COW_ADDR_LIFT_10047D51), 1u, (const CowU32[]){ 0u }, this_00, g->edx, g->eax, 0u);
      wr32((uint32_t)((int)param_1 + 0x78), 0x3f800000);
      wr32((uint32_t)((int)param_1 + 0x7c), 0x3f800000);
      wr32((uint32_t)((int)param_1 + 0x80), 0x3f800000);
      wr32((uint32_t)((int)param_1 + 0x84), 0x3f800000);
      wr32((uint32_t)((int)param_1 + 0x88), 0x3f800000);
      wr32((uint32_t)((int)param_1 + 0x8c), 0x3f800000);
      if (((int8_t)rd8((uint32_t)((int)param_1 + 0x20)) == '~') &&
         ((iVar3 = cow_bridge_10049570(g, COW_IMG(COW_ADDR_LIFT_10047D81), 0u, (const CowU32[]){ 0u }, g->esi, g->edx, 1065353216u, 0u), iVar3 == 0 ||
          (iVar3 = cow_bridge_10049570(g, COW_IMG(COW_ADDR_LIFT_10047D8C), 0u, (const CowU32[]){ 0u }, g->esi, g->edx, g->eax, 0u), ((CowU8)rd32((uint32_t)(iVar3 + 0x24)) & 0x7f) != 0x3d)))) {
        wr8((uint32_t)((int)param_1 + 0xde), (int8_t)rd8((uint32_t)((int)param_1 + 0x21)) - 0x30U & 0xfb | 0x80);
      }
      else {
        wr8((uint32_t)((int)param_1 + 0xde), 0);
        wr8((uint32_t)((int)param_1 + 0xdf), 0);
      }
      bVar8 = (CowU8)(rd32((uint32_t)((int)param_1 + 0xd8)) >> 0xc) & 1;
      pvVar4 = param_1;
      do {
        if (rd32((uint32_t)((int)pvVar4 + 0x28)) == (CowU32)0x0) {
          pvVar5 = (CowU32)0x0;
        }
        else {
          pvVar5 = (CowU32)rd32((uint32_t)rd32((uint32_t)(((int)pvVar4 + 0x28))));
        }
        if (((int32_t)rd32((uint32_t)((int)pvVar5 + 0x20)) == 0x74616577) || ((int32_t)rd32((uint32_t)((int)pvVar5 + 0x24)) < 0)) {
          bVar2 = rd8((uint32_t)((int)param_1 + 0xde));
          bVar8 = 0;
          wr8((uint32_t)((int)param_1 + 0xde), bVar2 | 0x83);
          if ((int32_t)rd32((uint32_t)((int)pvVar4 + 0x20)) == 0x77797264) {
            wr8((uint32_t)((int)param_1 + 0xde), bVar2 | 0xc3);
          }
          if ((int32_t)rd32((uint32_t)((int)pvVar4 + 0x20)) == 0x74737564) {
            wr8((uint32_t)((int)param_1 + 0xde), rd8((uint32_t)((int)param_1 + 0xde)) | 0x20);
          }
          break;
        }
        if (rd32((uint32_t)((int)pvVar5 + 0x28)) == (CowU32)0x0) {
          pvVar7 = (CowU32)0x0;
        }
        else {
          pvVar7 = (CowU32)rd32((uint32_t)rd32((uint32_t)(((int)pvVar5 + 0x28))));
        }
        pvVar4 = pvVar5;
      } while (pvVar7 != pvVar5);
      iVar3 = cow_bridge_10074290(g, COW_IMG(COW_ADDR_LIFT_10047E47), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if (iVar3 == 0xde35) {
        bVar2 = rd8((uint32_t)((int)param_1 + 0xdf)) | 1;
      }
      else {
        if (((((iVar3 == 0x147b7) || (iVar3 == 0x147b8)) || (iVar3 == 0x147bf)) || (iVar3 == 0x147c0))
           && ((((iVar1 = (int32_t)rd32((uint32_t)((int)param_1 + 0x20)), iVar1 == 0x31316230 || (iVar1 == 0x32316230)) ||
                ((iVar1 == 0x31326230 || ((iVar1 == 0x32326230 || (iVar1 == 0x31336230)))))) ||
               (iVar1 == 0x32336230)))) {
          wr8((uint32_t)((int)param_1 + 0xdf), rd8((uint32_t)((int)param_1 + 0xdf)) | 2);
        }
        if (iVar3 == 0x147b9) {
          bVar9 = (int32_t)rd32((uint32_t)((int)param_1 + 0x20)) == 0x31346270;
    L_10047f09:
          if (!bVar9) goto L_10047f19;
        }
        else {
          if ((((iVar3 != 0x147c1) && (iVar3 != 0x147c2)) && (iVar3 != 0x147c3)) && (iVar3 != 0x147c4))
          goto L_10047f19;
          iVar3 = (int32_t)rd32((uint32_t)((int)param_1 + 0x20));
          if (((iVar3 != 0x30316230) && (iVar3 != 0x31316230)) &&
             ((iVar3 != 0x32316230 && ((iVar3 != 0x30326230 && (iVar3 != 0x31326230)))))) {
            bVar9 = iVar3 == 0x32326230;
            goto L_10047f09;
          }
        }
        bVar2 = rd8((uint32_t)((int)param_1 + 0xdf)) | 2;
      }
      wr8((uint32_t)((int)param_1 + 0xdf), bVar2);
    L_10047f19:
      uVar6 = (rd8((uint32_t)((int)param_1 + 0x36)) & 1) * 0x10 + (rd32((uint32_t)((int)param_1 + 0x34)) & 0xf);
      if (((uVar6 == 0x14) || (((uVar6 == 0 || (0xd < uVar6)) && (uVar6 < 0x10)))) && (bVar8 != 0)) {
        cow_bridge_1003b7b0(g, COW_IMG(COW_ADDR_LIFT_10047F4B), 1u, (const CowU32[]){ 0u }, this_00, g->edx, g->eax, 0u);
        cow_bridge_1003b830(g, COW_IMG(COW_ADDR_LIFT_10047F54), 1u, (const CowU32[]){ 0u }, this_00, g->edx, g->eax, 0u);
        cow_bridge_100531d0(g, COW_IMG(COW_ADDR_LIFT_10047F5B), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      }
      iVar3 = cow_bridge_100492f0(g, COW_IMG(COW_ADDR_LIFT_10047F64), 1u, (const CowU32[]){ 123u }, param_1, g->edx, g->eax, 0u);
      if (iVar3 == 0) {
        wr32((uint32_t)((int)param_1 + 0x98), 0);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, ebp, esi], frame pointer no, 0 locals, pops [esi, ebp, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10047ce0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10047ce0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10047ce1: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10047ce2: push esi */
    g->esi = g->ecx;   /* 0x10047ce3: the value the entry loaded and the decompiler dropped */
    cow_lift_10047ce0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
