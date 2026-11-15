/* f_0x1019aa10 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1019aa10 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1019aa10(Guest* g, int32_t param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU16 uVar2;
    if ((int8_t)rd8((uint32_t)(param_1 + 0x20)) == '\0') {
        if ((int8_t)rd8((uint32_t)(param_1 + 0x21)) == '\0') {
          if (param_2 == 5) {
            switch(param_3) {
            case 1:
              cow_bridge_10193830(g, COW_IMG(COW_ADDR_LIFT_1019AA58), 2u, (const CowU32[]){ 19u, g->ebx }, param_1, g->edx, g->eax, 8u);
              return;
            case 2:
              cow_bridge_10193830(g, COW_IMG(COW_ADDR_LIFT_1019AA6A), 2u, (const CowU32[]){ 19u, 1u }, g->ecx, g->edx, g->eax, 8u);
              return;
            case 3:
              wr32((uint32_t)(param_1 + 0x38), 0);
              wr8((uint32_t)(param_1 + 0x3c), 1);
              return;
            case 4:
              wr32((uint32_t)(param_1 + 0x38), 1);
              wr8((uint32_t)(param_1 + 0x3c), 1);
              return;
            case 5:
              cow_bridge_10193830(g, COW_IMG(COW_ADDR_LIFT_1019AA7C), 2u, (const CowU32[]){ 19u, 2u }, g->ecx, g->edx, g->eax, 8u);
              return;
            case 6:
              cow_bridge_10193830(g, COW_IMG(COW_ADDR_LIFT_1019AAAC), 2u, (const CowU32[]){ 58u, 2u }, g->ecx, g->edx, g->eax, 8u);
              return;
            case 7:
              cow_bridge_10193830(g, COW_IMG(COW_ADDR_LIFT_1019AABD), 2u, (const CowU32[]){ 0x3a, 0 }, g->ecx, g->edx, g->eax, 8u);
              return;
            case 8:
              cow_bridge_10193830(g, COW_IMG(COW_ADDR_LIFT_1019AACF), 2u, (const CowU32[]){ 58u, 1u }, g->ecx, g->edx, g->eax, 8u);
              return;
            case 9:
              cow_bridge_10193830(g, COW_IMG(COW_ADDR_LIFT_1019AAE1), 2u, (const CowU32[]){ 59u, 1u }, g->ecx, g->edx, g->eax, 8u);
              return;
            case 10:
              cow_bridge_10193830(g, COW_IMG(COW_ADDR_LIFT_1019AAF2), 2u, (const CowU32[]){ 0x3b, 0 }, g->ecx, g->edx, g->eax, 8u);
              return;
            case 0xb:
              wr8((uint32_t)(param_1 + 0x20), 1);
              wr32((uint32_t)(param_1 + 0x24), rd32((uint32_t)(param_1 + 0x48)));
              wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x62), 0);
              wr32((uint32_t)(param_1 + 0x2c), (int)(int16_t)rd16((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x4c)));
              wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x85), 0);
              return;
            case 0xc:
              cow_bridge_101938f0(g, COW_IMG(COW_ADDR_LIFT_1019AB2A), 2u, (const CowU32[]){ 2u, 1u }, g->ecx, g->edx, g->eax, 8u);
              return;
            case 0xd:
              cow_bridge_101938f0(g, COW_IMG(COW_ADDR_LIFT_1019AB3B), 2u, (const CowU32[]){ 2, 0 }, g->ecx, g->edx, g->eax, 8u);
              return;
            case 0xe:
              cow_bridge_10193830(g, COW_IMG(COW_ADDR_LIFT_1019AB4F), 2u, (const CowU32[]){ 0xa5, 0 }, g->ecx, g->edx, g->eax, 8u);
              return;
            case 0xf:
              cow_bridge_10193830(g, COW_IMG(COW_ADDR_LIFT_1019AB64), 2u, (const CowU32[]){ 165u, 1u }, g->ecx, g->edx, g->eax, 8u);
              return;
            }
          }
          else if (param_2 == 6) {
            cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_1019AB86), 1u, (const CowU32[]){ 272082536u }, 274864184u, g->edx, g->eax, 0u);
            return;
          }
        }
      }
      else {
        switch(param_2) {
        case 1:
        case 2:
          uVar2 = rd16((uint32_t)(param_1 + 0x2c));
          break;
        case 3:
          if (((int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x24))) < (int32_t)(0x32))) {
            iVar1 = (int32_t)rd32((uint32_t)(param_1 + 0x24)) + 1;
            wr32((uint32_t)(param_1 + 0x24), iVar1);
            cow_bridge_10193830(g, COW_IMG(COW_ADDR_LIFT_1019ABB5), 2u, (const CowU32[]){ 0x3c, iVar1 }, g->ecx, g->edx, g->eax, 0u);
          }
          uVar2 = rd16((uint32_t)(param_1 + 0x2c));
          break;
        case 4:
          if (((int32_t)(0x19) < (int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x24))))) {
            iVar1 = (int32_t)rd32((uint32_t)(param_1 + 0x24)) + -1;
            wr32((uint32_t)(param_1 + 0x24), iVar1);
            cow_bridge_10193830(g, COW_IMG(COW_ADDR_LIFT_1019ABE9), 2u, (const CowU32[]){ 0x3c, iVar1 }, g->ecx, g->edx, g->eax, 8u);
          }
          uVar2 = rd16((uint32_t)(param_1 + 0x2c));
          break;
        case 5:
        case 6:
          cow_bridge_10193830(g, COW_IMG(COW_ADDR_LIFT_1019AC08), 2u, (const CowU32[]){ 0x3c, rd32((uint32_t)(param_1 + 0x24)) }, g->ecx, g->edx, g->eax, 8u);
          wr8((uint32_t)(param_1 + 0x20), 0);
          wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x62), 1);
          wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x85), 1);
          return;
        default:
          goto switchD_1019aa49_default;
        }
        cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_1019AC23), 2u, (const CowU32[]){ uVar2, 0 }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_101186a0(g, COW_IMG(COW_ADDR_LIFT_1019AC2A), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      }
    switchD_1019aa49_default:
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
void cow_adapter_1019aa10(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1019aa10: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1019aa11: push esi */
    g->esi = g->ecx;   /* 0x1019aa12: the value the entry loaded and the decompiler dropped */
    g->ebx = 0u;   /* 0x1019aa14: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1019aa16: push edi */
    { uint32_t A = (uint32_t)(g->esi + 0x20u); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x1019aa17: register eax, replayed as the entry ran it */
    cow_lift_1019aa10(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 7 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
