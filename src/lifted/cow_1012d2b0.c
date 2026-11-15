/* f_0x1012d2b0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1012d2b0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1012d2b0(Guest* g, int32_t param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    short sVar2;
    CowU32 uVar3;
    int iVar4;
    switch(param_2) {
      case 3:
        if ((int16_t)rd16((uint32_t)(param_1 + 0x16)) == 2) {
    switchD_1012d2de_caseD_8:
          cow_bridge_1012d210(g, COW_IMG(COW_ADDR_LIFT_1012D403), 2u, (const CowU32[]){ 1u, 1u }, g->ecx, g->edx, g->eax, 0u);
          wr16((uint32_t)(param_1 + 0x16), param_3);
          return;
        }
        goto switchD_1012d2ca_default;
      case 4:
      case 6:
        goto switchD_1012d2ca_caseD_4;
      case 5:
        break;
      default:
        goto switchD_1012d2ca_default;
      }
      switch(param_3) {
      case 1:
        iVar4 = 0;
        uVar3 = 2;
        break;
      case 2:
        iVar4 = (int)(int16_t)rd16((uint32_t)(param_1 + 0x14));
        if (iVar4 == -3) {
          cow_bridge_10037c50(g, COW_IMG(COW_ADDR_LIFT_1012D358), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        }
        else if (iVar4 != -2) {
          if (iVar4 == -1) {
            iVar4 = cow_bridge_101598b0(g, COW_IMG(COW_ADDR_LIFT_1012D324), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            if (iVar4 == 0) goto switchD_1012d2de_default;
            iVar4 = cow_bridge_101598b0(g, COW_IMG(COW_ADDR_LIFT_1012D337), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            if ((int16_t)rd16((uint32_t)(iVar4 + 0x210)) == 0) {
              iVar4 = iVar4 + 0x7c;
              uVar3 = 4;
            }
            else {
              iVar4 = iVar4 + 0x214;
              uVar3 = 4;
            }
          }
          else {
            iVar4 = cow_bridge_1018d950(g, COW_IMG(COW_ADDR_LIFT_1012D311), 1u, (const CowU32[]){ iVar4 }, g->ecx, g->edx, g->eax, 0u);
            uVar3 = 4;
          }
          break;
        }
        goto switchD_1012d2de_default;
      case 3:
        iVar4 = 0;
        uVar3 = 5;
        break;
      case 4:
        sVar2 = cow_bridge_100e3730(g, COW_IMG(COW_ADDR_LIFT_1012D365), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (sVar2 == 0) {
          cVar1 = cow_bridge_100e9730(g, COW_IMG(COW_ADDR_LIFT_1012D37D), 4u, (const CowU32[]){ 0u, 0u, 0u, 1u }, g->ecx, g->edx, g->eax, 16u);
          if (cVar1 == '\0') goto switchD_1012d2de_default;
          iVar4 = 0;
          uVar3 = 6;
        }
        else {
          iVar4 = 0;
          uVar3 = 6;
        }
        break;
      case 5:
        sVar2 = cow_bridge_100e3730(g, COW_IMG(COW_ADDR_LIFT_1012D38F), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (sVar2 == 0) {
          cVar1 = cow_bridge_100e9730(g, COW_IMG(COW_ADDR_LIFT_1012D3A7), 4u, (const CowU32[]){ 0u, 0u, 0u, 2u }, g->ecx, g->edx, g->eax, 16u);
          if (cVar1 == '\0') goto switchD_1012d2de_default;
          iVar4 = 0;
          uVar3 = 0xc;
        }
        else {
          iVar4 = 0;
          uVar3 = 0xc;
        }
        break;
      case 6:
        iVar4 = 0;
        uVar3 = 0xb;
        break;
      case 7:
        iVar4 = 0;
        uVar3 = 3;
        break;
      case 8:
        goto switchD_1012d2de_caseD_8;
      default:
        goto switchD_1012d2de_default;
      }
      cow_bridge_101ad670(g, COW_IMG(COW_ADDR_LIFT_1012D3C9), 2u, (const CowU32[]){ uVar3, iVar4 }, g->ecx, g->edx, g->eax, 0u);
    switchD_1012d2de_default:
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10662D40))))) + 0x24u))), COW_IMG(COW_ADDR_LIFT_1012D3D9), 1u, (const CowU32[]){ 272448644u }, g->ecx, g->edx, g->eax, 0u);
    switchD_1012d2ca_caseD_4:
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_1012D3E8), 1u, (const CowU32[]){ 272037176u }, 274864184u, g->edx, g->eax, 0u);
    switchD_1012d2ca_default:
      wr16((uint32_t)(param_1 + 0x16), param_3);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1012d2b0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    { uint32_t A = (uint32_t)(g->esp + 0x4u); g->eax = (uint32_t)((uint32_t)(int32_t)((int16_t)rd16(A))); }   /* 0x1012d2b0: register eax, replayed as the entry ran it */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0xFFFFFFFDu; uint32_t r = (uint32_t)(a + b); g->eax = (uint32_t)(r); }   /* 0x1012d2b5: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1012d2b8: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1012d2b9: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->edi = (g->edi & 0xFFFF0000u) | (uint16_t)(rd16(A)); }   /* 0x1012d2ba: register edi, replayed as the entry ran it */
    cow_lift_1012d2b0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 5 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
