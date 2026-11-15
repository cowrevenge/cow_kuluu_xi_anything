/* f_0x1007b1c0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1007b1c0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1007b1c0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 uVar1;
    CowU32 puVar2;
    int iVar3;
    CowU32 uVar4;
    int iVar5;
    int iVar6;
    CowU8 auStack_c[12];
    if (((((rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) != 0) && (-1 < param_1)) && (param_1 < '\x10')) &&
          (iVar3 = rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x19a54 + param_1 * 8,
          (int8_t)rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x19a58 + param_1 * 8)) != '\0')) &&
         ((param_3 < '\0' || ((int)param_3 == (CowU32)rd8((uint32_t)(iVar3 + 5)))))) {
        switch(rd8((uint32_t)(iVar3 + 5))) {
        case 0:
          iVar5 = rd32(COW_IMG(COW_ADDR_LIFT_10666E2C));
          break;
        default:
          goto L_1007b2b1;
        case 8:
          iVar5 = rd32(COW_IMG(COW_ADDR_LIFT_10666E4C));
          break;
        case 10:
          iVar5 = rd32(COW_IMG(COW_ADDR_LIFT_10666E50));
          break;
        case 0xb:
          iVar5 = rd32(COW_IMG(COW_ADDR_LIFT_10666E54));
          break;
        case 0xc:
          iVar5 = rd32(COW_IMG(COW_ADDR_LIFT_10666E58));
          break;
        case 0xd:
          iVar5 = rd32(COW_IMG(COW_ADDR_LIFT_10666E5C));
          break;
        case 0xe:
          iVar5 = rd32(COW_IMG(COW_ADDR_LIFT_10666E60));
          break;
        case 0xf:
          iVar5 = rd32(COW_IMG(COW_ADDR_LIFT_10666E64));
          break;
        case 0x10:
          iVar5 = rd32(COW_IMG(COW_ADDR_LIFT_10666E68));
        }
        if ((iVar5 != 0) && (iVar6 = 0, (int8_t)rd8((uint32_t)(iVar5 + 0x18 + (int32_t)rd32((uint32_t)(iVar5 + 0xc)))) != '\0')) {
          do {
            puVar2 = (CowU32)cow_bridge_1021cb80(g, COW_IMG(COW_ADDR_LIFT_1007B295), 1u, (const CowU32[]){ iVar6 }, g->ecx, g->edx, g->eax, 0u);
            if ((puVar2 != (CowU32)0x0) && ((int8_t)rd8((uint32_t)(iVar3 + 4)) == (int8_t)rd8((uint32_t)(puVar2 + 2u * (uint32_t)(1))))) {
              iVar3 = cow_bridge_1015bc40(g, COW_IMG(COW_ADDR_LIFT_1007B2CB), 1u, (const CowU32[]){ rd16((uint32_t)puVar2) }, g->ecx, g->edx, g->eax, 0u);
              if (iVar3 == 0) {
                g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
              }
              wr8((uint32_t)(iVar3 + 0x1b3), (int8_t)rd8((uint32_t)(iVar3 + 0x1b3)) + '\x01');
              cow_bridge_1018d2b0(g, COW_IMG(COW_ADDR_LIFT_1007B2E8), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
              cow_bridge_1015a680(g, COW_IMG(COW_ADDR_LIFT_1007B2EE), 1u, (const CowU32[]){ iVar3 }, g->ecx, g->edx, g->eax, 4u);
              uVar4 = cow_bridge_1015b270(g, COW_IMG(COW_ADDR_LIFT_1007B2F8), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
              cow_bridge_10159f20(g, COW_IMG(COW_ADDR_LIFT_1007B303), 2u, (const CowU32[]){ auStack_c, uVar4 }, g->ecx, g->edx, g->eax, 8u);
              uVar4 = cow_bridge_1018d470(g, COW_IMG(COW_ADDR_LIFT_1007B30F), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
              uVar1 = cow_bridge_indirect(g, COW_IMG(COW_ADDR_LIFT_10662F60), COW_IMG(COW_ADDR_LIFT_1007B322), 3u, (const CowU32[]){ param_2, iVar3 + 0x1b4, uVar4 }, g->ecx, g->edx, g->eax, 0u);
              wr8((uint32_t)(iVar3 + 0x1b3), (int8_t)rd8((uint32_t)(iVar3 + 0x1b3)) + -1);
              cow_bridge_1018d250(g, COW_IMG(COW_ADDR_LIFT_1007B33E), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
              g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(uVar1) & 0xffu)); return;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)(CowU32)rd8((uint32_t)(iVar5 + 0x18 + (int32_t)rd32((uint32_t)(iVar5 + 0xc)))));
        }
      }
    L_1007b2b1:
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 12 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1007b1c0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->ecx = rd32(COW_IMG(COW_ADDR_LIFT_104DFD98));   /* 0x1007b1c0: the value the entry loaded and the decompiler dropped */
    g->esp -= 0xcu;                      /* 0x1007b1c6: 12 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* push ebx (from the epilogue's pops) */
    g->esp -= 4u; wr32(g->esp, g->esi); /* push esi (from the epilogue's pops) */
    g->esp -= 4u; wr32(g->esp, g->edi); /* push edi (from the epilogue's pops) */
    cow_lift_1007b1c0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
