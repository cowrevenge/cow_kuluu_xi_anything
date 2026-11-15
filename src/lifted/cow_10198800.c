/* f_0x10198800 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10198800 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10198800(Guest* g, int32_t param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    int iVar3;
    iVar2 = (int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x88));
      switch(param_2) {
      case 1:
        if (((short)param_3 == 1) || ((int32_t)rd32((uint32_t)(param_1 + 0x2c)) < (int)(short)param_3)) {
          if ((int32_t)rd32((uint32_t)(param_1 + 0x28)) + ((int32_t)(0xb) < (int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x2c))))) {
            iVar1 = (int32_t)rd32((uint32_t)(param_1 + 0x28)) + 1;
            wr32((uint32_t)(param_1 + 0x28), iVar1);
            wr32((uint32_t)(iVar2 + 0x14), iVar1);
            cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_101988E1), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          }
          cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_101988F2), 2u, (const CowU32[]){ rd16((uint32_t)(param_1 + 0x2c)), 0 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_101186a0(g, COW_IMG(COW_ADDR_LIFT_101988F9), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          break;
        }
        goto L_10198b5e;
      case 2:
        if ((short)param_3 == 0xb) {
          if (((int32_t)(0) < (int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x28))))) {
            iVar1 = (int32_t)rd32((uint32_t)(param_1 + 0x28)) + -1;
            wr32((uint32_t)(param_1 + 0x28), iVar1);
            wr32((uint32_t)(iVar2 + 0x14), iVar1);
            cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_1019891D), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          }
          cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_1019892B), 2u, (const CowU32[]){ 1u, 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_101186a0(g, COW_IMG(COW_ADDR_LIFT_10198932), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          break;
        }
        goto L_10198b5e;
      case 3:
      case 0x19:
        iVar3 = (int32_t)rd32((uint32_t)(param_1 + 0x2c));
        iVar1 = (int32_t)rd32((uint32_t)(param_1 + 0x28)) + 0xb;
        if (iVar1 < iVar3 + -0xc) {
          wr32((uint32_t)(param_1 + 0x28), iVar1);
          cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_10198964), 2u, (const CowU32[]){ param_3, 0 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_101186a0(g, COW_IMG(COW_ADDR_LIFT_1019896B), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_10198951), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          wr32((uint32_t)(iVar2 + 0x14), rd32((uint32_t)(param_1 + 0x28)));
          break;
        }
        if (((int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x28))) < (int32_t)(iVar3)) + -0xb) {
          wr32((uint32_t)(param_1 + 0x28), iVar3 + -0xb);
          cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_1019899D), 2u, (const CowU32[]){ param_3, 0 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_101186a0(g, COW_IMG(COW_ADDR_LIFT_101989A4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_1019898A), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          wr32((uint32_t)(iVar2 + 0x14), rd32((uint32_t)(param_1 + 0x28)));
          break;
        }
        iVar2 = iVar3;
        if (10 < iVar3) {
          iVar2 = 0xb;
        }
        if ((short)param_3 == iVar2) {
          if (10 < iVar3) {
            iVar3 = 0xb;
          }
          cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_101989D4), 1u, (const CowU32[]){ 0 }, iVar3, g->edx, g->eax, 0u);
          cow_bridge_101186a0(g, COW_IMG(COW_ADDR_LIFT_101989DB), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          break;
        }
        if (10 < iVar3) {
          iVar3 = 0xb;
        }
        cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_10198A02), 1u, (const CowU32[]){ 0 }, iVar3, g->edx, g->eax, 0u);
        cow_bridge_101186a0(g, COW_IMG(COW_ADDR_LIFT_10198A09), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        goto L_10198b5e;
      case 4:
      case 0x18:
        iVar1 = (int32_t)rd32((uint32_t)(param_1 + 0x28)) + -0xb;
        if (-1 < iVar1) {
          wr32((uint32_t)(param_1 + 0x28), iVar1);
          if ((short)param_3 == 0xb) {
            param_3 = 1;
          }
          cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_10198A22), 1u, (const CowU32[]){ 1u }, param_3, g->edx, g->eax, 0u);
          cow_bridge_101186a0(g, COW_IMG(COW_ADDR_LIFT_10198A29), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_101989E0), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          wr32((uint32_t)(iVar2 + 0x14), rd32((uint32_t)(param_1 + 0x28)));
          break;
        }
        if (((int32_t)(0) < (int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x28))))) {
          wr32((uint32_t)(param_1 + 0x28), 0);
          cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_10198A5D), 2u, (const CowU32[]){ param_3, 0 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_101186a0(g, COW_IMG(COW_ADDR_LIFT_10198A64), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_10198A0E), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          wr32((uint32_t)(iVar2 + 0x14), rd32((uint32_t)(param_1 + 0x28)));
          break;
        }
        cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_10198A8C), 2u, (const CowU32[]){ 1, 0 }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_101186a0(g, COW_IMG(COW_ADDR_LIFT_10198A93), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if ((short)param_3 == 1) break;
        goto L_10198b5e;
      case 5:
        iVar2 = (int)(short)param_3 + (int32_t)rd32((uint32_t)(param_1 + 0x28));
        if ((iVar2 + ((int32_t)(-1) < (int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x2c))))) &&
           (iVar2 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_10198857), 2u, (const CowU32[]){ 0xb, rd32((uint32_t)(iVar2 * 0x10 + -0x10 + (int32_t)rd32((uint32_t)(param_1 + 0x18)))) }, g->ecx, g->edx, g->eax, 8u),
           iVar2 != 0)) {
          iVar2 = (short)param_3 + -1 + (int32_t)rd32((uint32_t)(param_1 + 0x28));
          wr32((uint32_t)(param_1 + 0x1c), iVar2);
          wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10662738)) + 0x20), iVar2);
          cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_10198888), 3u, (const CowU32[]){ 272082816u, 1u, 0u }, 274864184u, g->edx, g->eax, 0u);
        }
        break;
      case 6:
        cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_1019889C), 1u, (const CowU32[]){ 272082796u }, 274864184u, g->edx, g->eax, 0u);
        cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101988AB), 1u, (const CowU32[]){ 272082776u }, 274864184u, g->edx, g->eax, 0u);
        break;
      case 9:
        if (((int32_t)rd32((uint32_t)(param_1 + 0x2c)) < (int32_t)rd32((uint32_t)(param_1 + 0x28)) + 0xb) ||
           (((int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x28))) < (int32_t)(0)))) break;
    L_10198b5e:
        cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_10198A69), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        break;
      case 0x16:
        if (((int32_t)(0) < (int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x28))))) {
          wr32((uint32_t)(param_1 + 0x28), (int32_t)rd32((uint32_t)(param_1 + 0x28)) + -1);
          cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_10198A98), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_10198ACC), 2u, (const CowU32[]){ (int16_t)rd16((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x4c)) + 1, 0 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_101186a0(g, COW_IMG(COW_ADDR_LIFT_10198AD3), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          wr32((uint32_t)(iVar2 + 0x14), rd32((uint32_t)(param_1 + 0x28)));
        }
        break;
      case 0x17:
        if ((int32_t)rd32((uint32_t)(param_1 + 0x28)) + ((int32_t)(0xb) < (int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x2c))))) {
          wr32((uint32_t)(param_1 + 0x28), (int32_t)rd32((uint32_t)(param_1 + 0x28)) + 1);
          cow_bridge_10037b30(g, COW_IMG(COW_ADDR_LIFT_10198B63), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_10198AEC), 2u, (const CowU32[]){ (int16_t)rd16((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x4c)) + -1, 0 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_101186a0(g, COW_IMG(COW_ADDR_LIFT_10198AF3), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          wr32((uint32_t)(iVar2 + 0x14), rd32((uint32_t)(param_1 + 0x28)));
        }
        break;
      case 0x1b:
        iVar2 = (int32_t)rd32((uint32_t)(iVar2 + 0x14));
        iVar1 = (int32_t)rd32((uint32_t)(param_1 + 0x28));
        iVar3 = (int)(int16_t)rd16((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x4c));
        if (iVar1 < iVar2) {
          iVar3 = iVar3 + (iVar1 - iVar2);
          if (iVar3 < 1) {
            iVar3 = 1;
          }
          cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_10198B1B), 2u, (const CowU32[]){ iVar3, 0 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_101186a0(g, COW_IMG(COW_ADDR_LIFT_10198B22), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          wr32((uint32_t)(param_1 + 0x28), iVar2);
        }
        else if (iVar2 < iVar1) {
          iVar3 = iVar3 + (iVar1 - iVar2);
          if (0xb < iVar3) {
            iVar3 = 0xb;
          }
          cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_10198B41), 2u, (const CowU32[]){ iVar3, 0 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_101186a0(g, COW_IMG(COW_ADDR_LIFT_10198B48), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          wr32((uint32_t)(param_1 + 0x28), iVar2);
        }
      }
      iVar2 = (int16_t)rd16((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x4c)) + -1 + (int32_t)rd32((uint32_t)(param_1 + 0x28));
      if (((((int32_t)rd32((uint32_t)(param_1 + 0x1c)) != iVar2) && (-1 < iVar2)) && (((int32_t)(iVar2) < (int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x2c))))))
         && (iVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_10198B94), 2u, (const CowU32[]){ 0xb, rd32((uint32_t)(iVar2 * 0x10 + (int32_t)rd32((uint32_t)(param_1 + 0x18)))) }, g->ecx, g->edx, g->eax, 8u),
            iVar1 != 0)) {
        wr32((uint32_t)(param_1 + 0x1c), iVar2);
        wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10662734)) + 0x24), iVar2);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10198800(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    { uint32_t A = (uint32_t)(g->esp + 0x4u); g->eax = (uint32_t)((uint32_t)(int32_t)((int16_t)rd16(A))); }   /* 0x10198800: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10198805: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10198806: push esi */
    g->esi = g->ecx;   /* 0x10198807: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10198809: push edi */
    { { uint32_t a = g->eax; uint32_t r = (uint32_t)(a - 1u); g->eax = (uint32_t)(r); }; }   /* 0x1019880a: register eax, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esi + 0x8u); g->edi = (uint32_t)(rd32(A)); }   /* 0x1019880b: register edi, replayed as the entry ran it */
    cow_lift_10198800(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 5 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
