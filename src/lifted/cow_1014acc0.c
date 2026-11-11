/* f_0x1014acc0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1014acc0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1014acc0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU16 uVar2;
    int iVar3;
    CowU8 uVar5;
    _Bool bVar4;
      
      switch(param_2) {
      case 1:
      case 2:
      case 0x18:
      case 0x19:
        if (rd32((uint32_t)(param_1 + 0x58)) == 0) {
          uVar2 = cow_bridge_101f7100(g, COW_IMG(COW_ADDR_LIFT_1014AD8E), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          wr16((uint32_t)(param_1 + 0x60), uVar2);
          g->eax = (CowU32)(0); return;
        }
        uVar2 = cow_bridge_101f7100(g, COW_IMG(COW_ADDR_LIFT_1014ADB8), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        wr16((uint32_t)(param_1 + 0x62), uVar2);
        break;
      case 3:
        bVar4 = rd32((uint32_t)(param_1 + 0x58)) != 0;
        if (bVar4) {
          uVar2 = cow_bridge_101f7100(g, COW_IMG(COW_ADDR_LIFT_1014ADEB), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          uVar5 = rd8((uint32_t)(param_1 + 0x54));
          wr16((uint32_t)(param_1 + 0x62), uVar2);
          wr32((uint32_t)(param_1 + 0x58), 0);
        }
        else {
          uVar2 = cow_bridge_101f7100(g, COW_IMG(COW_ADDR_LIFT_1014AE15), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          uVar5 = rd8((uint32_t)(param_1 + 0x54));
          wr16((uint32_t)(param_1 + 0x60), uVar2);
          wr32((uint32_t)(param_1 + 0x58), 1);
        }
        cow_bridge_1014afa0(g, COW_IMG(COW_ADDR_LIFT_1014ADA6), 2u, (const CowU32[]){ uVar5, !bVar4 }, g->ecx, g->edx, g->eax, 0u);
        if (rd32((uint32_t)(param_1 + 8)) != 0) {
          wr8((uint32_t)(rd32((uint32_t)(param_1 + 8)) + 0x62), 1);
          wr8((uint32_t)(rd32((uint32_t)(param_1 + 8)) + 0x61), 1);
        }
        cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_1014ADAB), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        g->eax = (CowU32)(0); return;
      case 4:
        bVar4 = rd32((uint32_t)(param_1 + 0x58)) != 0;
        if (bVar4) {
          uVar2 = cow_bridge_101f7100(g, COW_IMG(COW_ADDR_LIFT_1014AE65), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          uVar5 = rd8((uint32_t)(param_1 + 0x54));
          wr16((uint32_t)(param_1 + 0x62), uVar2);
          wr32((uint32_t)(param_1 + 0x58), 0);
        }
        else {
          uVar2 = cow_bridge_101f7100(g, COW_IMG(COW_ADDR_LIFT_1014AE78), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          uVar5 = rd8((uint32_t)(param_1 + 0x54));
          wr16((uint32_t)(param_1 + 0x60), uVar2);
          wr32((uint32_t)(param_1 + 0x58), 1);
        }
        cow_bridge_1014afa0(g, COW_IMG(COW_ADDR_LIFT_1014ADD0), 2u, (const CowU32[]){ uVar5, !bVar4 }, g->ecx, g->edx, g->eax, 0u);
        if (rd32((uint32_t)(param_1 + 8)) != 0) {
          wr8((uint32_t)(rd32((uint32_t)(param_1 + 8)) + 0x62), 1);
          wr8((uint32_t)(rd32((uint32_t)(param_1 + 8)) + 0x61), 1);
        }
        cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_1014ADD5), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        g->eax = (CowU32)(0); return;
      case 5:
        if (param_3 == 0xb) {
          if (rd32((uint32_t)(param_1 + 0x58)) == 0) {
            uVar2 = cow_bridge_101f7100(g, COW_IMG(COW_ADDR_LIFT_1014AEC0), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            wr16((uint32_t)(param_1 + 0x60), uVar2);
            wr32((uint32_t)(param_1 + 0x58), 1);
            cow_bridge_1014afa0(g, COW_IMG(COW_ADDR_LIFT_1014AE03), 2u, (const CowU32[]){ rd8((uint32_t)(param_1 + 0x54)), 1 }, g->ecx, g->edx, g->eax, 0u);
            cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_1014AE08), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            g->eax = (CowU32)(0); return;
          }
          uVar2 = cow_bridge_101f7100(g, COW_IMG(COW_ADDR_LIFT_1014AED3), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          wr16((uint32_t)(param_1 + 0x62), uVar2);
          wr32((uint32_t)(param_1 + 0x58), 0);
          cow_bridge_1014afa0(g, COW_IMG(COW_ADDR_LIFT_1014AE2D), 2u, (const CowU32[]){ rd8((uint32_t)(param_1 + 0x54)), 0 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_1014AE32), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          g->eax = (CowU32)(0); return;
        }
        if (param_3 == 0xc) {
          if (rd32((uint32_t)(param_1 + 0x58)) == 0) {
            uVar2 = cow_bridge_101f7100(g, COW_IMG(COW_ADDR_LIFT_1014AF16), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            wr16((uint32_t)(param_1 + 0x60), uVar2);
            wr32((uint32_t)(param_1 + 0x58), 1);
            cow_bridge_1014afa0(g, COW_IMG(COW_ADDR_LIFT_1014AE90), 2u, (const CowU32[]){ rd8((uint32_t)(param_1 + 0x54)), 1 }, g->ecx, g->edx, g->eax, 0u);
            cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_1014AEA5), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            g->eax = (CowU32)(0); return;
          }
          uVar2 = cow_bridge_101f7100(g, COW_IMG(COW_ADDR_LIFT_1014AF27), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          wr16((uint32_t)(param_1 + 0x62), uVar2);
          wr32((uint32_t)(param_1 + 0x58), 0);
          cow_bridge_1014afa0(g, COW_IMG(COW_ADDR_LIFT_1014AEEB), 2u, (const CowU32[]){ rd8((uint32_t)(param_1 + 0x54)), 0 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_1014AF00), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          g->eax = (CowU32)(0); return;
        }
        if ((rd32((uint32_t)(param_1 + 8)) == 0) || (rd8((uint32_t)(rd32((uint32_t)(param_1 + 8)) + 0x62)) != '\0')) {
          if (rd8((uint32_t)(param_1 + 0x5e)) == '\0') {
            cow_bridge_10129e30(g, COW_IMG(COW_ADDR_LIFT_1014AD73), 1u, (const CowU32[]){ 178u }, g->ecx, g->edx, g->eax, 0u);
          }
          else {
            iVar3 = cow_bridge_1014b530(g, COW_IMG(COW_ADDR_LIFT_1014AD18), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            if (((rd32((uint32_t)(param_1 + 0x58)) == 0) && (cVar1 = cow_bridge_1014b440(g, COW_IMG(COW_ADDR_LIFT_1014AD29), 1u, (const CowU32[]){ iVar3 }, g->ecx, g->edx, g->eax, 0u), cVar1 == '\0')) &&
               (cVar1 = cow_bridge_1014b490(g, COW_IMG(COW_ADDR_LIFT_1014AD35), 1u, (const CowU32[]){ iVar3 }, g->ecx, g->edx, g->eax, 0u), cVar1 != '\0')) {
              if (rd32(COW_IMG(COW_ADDR_LIFT_10578438)) == 0) {
                g->eax = (CowU32)(0); return;
              }
              if (iVar3 < 1) {
                g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
              }
              cow_bridge_10037b90(g, COW_IMG(COW_ADDR_LIFT_1014AD53), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
              cow_bridge_1014b580(g, COW_IMG(COW_ADDR_LIFT_1014AD5B), 1u, (const CowU32[]){ iVar3 }, g->ecx, g->edx, g->eax, 0u);
              g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
            }
          }
          cow_bridge_10037c50(g, COW_IMG(COW_ADDR_LIFT_1014AD78), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          g->eax = (CowU32)(0); return;
        }
        break;
      case 6:
        cow_bridge_1015e790(g, COW_IMG(COW_ADDR_LIFT_1014AE4A), 2u, (const CowU32[]){ rd32((uint32_t)(param_1 + 8)), 1 }, 274864184u, g->edx, g->eax, 0u);
        g->eax = (CowU32)(0); return;
      }
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [ebx], ret 8.
   Arguments: 2 register argument(s) [ecx, edx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1014acc0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    { uint32_t A = (uint32_t)(g->esp + 0x4u); g->eax = (uint32_t)((uint32_t)(int32_t)((int16_t)rd16(A))); }   /* 0x1014acc0: register eax, replayed as the entry ran it */
    { { uint32_t a = g->eax; uint32_t r = (uint32_t)(a - 1u); g->eax = (uint32_t)(r); }; }   /* 0x1014acc5: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1014acc6: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1014acc7: push esi */
    cow_lift_1014acc0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 7 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
