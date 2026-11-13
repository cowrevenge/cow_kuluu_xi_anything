/* f_0x10130a80 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10130a80 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10130a80(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU8 bVar2;
    char cVar3;
    CowU32 uVar4;
    int iVar5;
    int iVar6;
    if ((rd32(COW_IMG(COW_ADDR_LIFT_10578208)) != 0) && ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10578208)) + 8)) != 0)) {
        wr8((uint32_t)(param_1 + 5), 0);
        wr8((uint32_t)(param_1 + 6), 0);
        return;
      }
      cVar3 = cow_bridge_10160700(g, COW_IMG(COW_ADDR_LIFT_10130AAD), 0u, (const CowU32[]){ 0u }, 274864184u, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10578208)), 0u);
      if ((cVar3 == '\0') &&
         ((cVar3 = cow_bridge_10123a70(g, COW_IMG(COW_ADDR_LIFT_10130ABE), 4u, (const CowU32[]){ 0x3e, 0x76, 4, 0xffffffff }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10578208)), 16u), cVar3 != '\0' ||
          (cVar3 = cow_bridge_10123a70(g, COW_IMG(COW_ADDR_LIFT_10130AD5), 4u, (const CowU32[]){ 0x3e, 0x89, 4, 0xffffffff }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10578208)), 16u), cVar3 != '\0')))) {
        cVar3 = '\x01';
      }
      else {
        cVar3 = '\0';
      }
      if ((int8_t)rd8((uint32_t)(param_1 + 6)) == '\0') {
        wr8((uint32_t)(param_1 + 6), 1);
        wr8((uint32_t)(param_1 + 5), cVar3);
      }
      cVar1 = (int8_t)rd8((uint32_t)(param_1 + 5));
      wr8((uint32_t)(param_1 + 5), cVar3);
      if ((cVar1 != cVar3) && (cVar3 != '\0')) {
        if (rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_105781A8)) + 4u * (uint32_t)(7))) == 1) {
          uVar4 = cow_bridge_101f1120(g, COW_IMG(COW_ADDR_LIFT_10130B22), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10578208)), 0u);
          cVar3 = cow_bridge_1013e730(g, COW_IMG(COW_ADDR_LIFT_10130B2A), 1u, (const CowU32[]){ uVar4 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10578208)), 4u);
          if (cVar3 != '\0') {
            return;
          }
          iVar6 = 0;
          while( 1 ) {
            iVar5 = cow_bridge_101317b0(g, COW_IMG(COW_ADDR_LIFT_10130B4A), 2u, (const CowU32[]){ uVar4, rd8((uint32_t)(param_1 + 7)) & 1 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10578208)), 0u);
            bVar2 = rd8((uint32_t)(param_1 + 7));
            wr8((uint32_t)(param_1 + 7), (bVar2 + 1 ^ bVar2) & 3 ^ bVar2);
            if (-1 < iVar5) break;
            iVar6 = iVar6 + 1;
            if (1 < iVar6) {
              cow_bridge_10130be0(g, COW_IMG(COW_ADDR_LIFT_10130B6C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10578208)), 0u);
              return;
            }
          }
          cow_bridge_10131810(g, COW_IMG(COW_ADDR_LIFT_10130B80), 2u, (const CowU32[]){ iVar5, 0 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10578208)), 0u);
          cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_105781A8))))) + 0x4cu))), COW_IMG(COW_ADDR_LIFT_10130B8D), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10578208)), 0u);
          uVar4 = cow_bridge_10131770(g, COW_IMG(COW_ADDR_LIFT_10130B98), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10578208)), 0u);
        }
        else {
          uVar4 = 0;
          if ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10663740)) + 0x8c)) == 0) {
            if ((short)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_105781A8)) + 4u * (uint32_t)(6))) != 0) {
              uVar4 = cow_bridge_100eb490(g, COW_IMG(COW_ADDR_LIFT_10130BB9), 2u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_105781A8)) + 4u * (uint32_t)(5))), (((uint32_t)((short)((CowU32)rd32(COW_IMG(COW_ADDR_LIFT_10663740)) >> 0x10)) & 0xffffu) << 16 | ((uint32_t)((short)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_105781A8)) + 4u * (uint32_t)(6)))) & 0xffffu)) }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10578208)), 8u)
              ;
            }
          }
        }
        iVar6 = rd32(COW_IMG(COW_ADDR_LIFT_10663740));
        wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10663740)) + 0x8c), uVar4);
        wr8((uint32_t)(iVar6 + 0x89), 1);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 1 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp], ret 4.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10130a80(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_10578208));   /* 0x10130a80: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10130a85: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10130a86: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10130a87: push edi */
    cow_lift_10130a80(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
