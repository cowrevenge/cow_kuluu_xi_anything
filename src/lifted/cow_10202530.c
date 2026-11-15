/* f_0x10202530 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10202530 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10202530(Guest* g, int32_t param_1, int32_t param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU32 uVar2;
    int iVar3;
    CowU8 local_20[32];
    if (rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) != 0) {
        if (((CowU32)rd16((uint32_t)(param_3 + 0x32)) == rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x3c350))) &&
           ((int16_t)rd16((uint32_t)(param_3 + 0x34)) == 0)) {
          uVar2 = cow_bridge_102023b0(g, COW_IMG(COW_ADDR_LIFT_10202576), 1u, (const CowU32[]){ param_3 }, g->ebp, g->edx, g->eax, 0u);
          cow_bridge_101cb090(g, COW_IMG(COW_ADDR_LIFT_10202597), 4u, (const CowU32[]){ param_1 + 0x1a, param_2 + 7, (((uint32_t)(((CowU32)g->ecx >> 8)) & 0xffffffu) << 8 | ((uint32_t)(rd8((uint32_t)(param_3 + 0x30))) & 0xffu)), param_3 + 0x78 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_101cb1b0(g, COW_IMG(COW_ADDR_LIFT_102025AC), 4u, (const CowU32[]){ param_1 + 0x31, param_2 + 0x11, (((uint32_t)(((CowU32)g->edx >> 8)) & 0xffffffu) << 8 | ((uint32_t)(rd8((uint32_t)(param_3 + 0x31))) & 0xffu)), param_3 + 0x79 }, g->ecx, g->edx, g->eax, 32u);
          if (((int16_t)rd16((uint32_t)(param_3 + 0x50)) == 0) ||
             (iVar3 = param_3 + 0x54, (int8_t)rd8((uint32_t)(param_3 + 0x54)) == '\0')) {
            iVar3 = param_3 + 6;
          }
          cow_bridge_10202380(g, COW_IMG(COW_ADDR_LIFT_102025DA), 4u, (const CowU32[]){ param_1, param_2, iVar3, 0x80808080 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10312031(g, COW_IMG(COW_ADDR_LIFT_102025ED), 3u, (const CowU32[]){ local_20, COW_IMG(COW_ADDR_LIFT_10352FF0), rd32((uint32_t)(param_3 + 0x28)) }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_101c9b50(g, COW_IMG(COW_ADDR_LIFT_10202610), 7u, (const CowU32[]){ param_1 + 0x62, param_2 + 10, local_20, 0x80808080, 0, 0x3f800000, 0x3f800000 }, g->ecx, g->edx, g->eax, 0u);
          cVar1 = cow_bridge_101938b0(g, COW_IMG(COW_ADDR_LIFT_1020261C), 2u, (const CowU32[]){ 174u, 0u }, g->ecx, g->edx, g->eax, 48u);
          if ((cVar1 != '\0') && (cVar1 = cow_bridge_10201eb0(g, COW_IMG(COW_ADDR_LIFT_10202629), 1u, (const CowU32[]){ param_3 }, g->ecx, g->edx, g->eax, 4u), cVar1 == '\0')) {
            cow_bridge_10202900(g, COW_IMG(COW_ADDR_LIFT_10202647), 3u, (const CowU32[]){ param_1 + 0x30, param_2 + 10, rd32((uint32_t)(param_3 + 0x2c)) }, g->ecx, g->edx, g->eax, 0u);
          }
          cow_bridge_10312031(g, COW_IMG(COW_ADDR_LIFT_10202660), 3u, (const CowU32[]){ local_20, COW_IMG(COW_ADDR_LIFT_10352FF0), rd32((uint32_t)(param_3 + 0x24)) }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_101c9b50(g, COW_IMG(COW_ADDR_LIFT_10202683), 7u, (const CowU32[]){ param_1 + 0x58, param_2 + 1, local_20, uVar2, 0, 0x3f800000, 0x3f800000 }, g->ecx, g->edx, g->eax, 40u);
        }
        else {
          uVar2 = cow_bridge_101cbc10(g, COW_IMG(COW_ADDR_LIFT_10202690), 2u, (const CowU32[]){ (CowU32)rd16((uint32_t)(param_3 + 0x32)), 0 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10312031(g, COW_IMG(COW_ADDR_LIFT_102026A0), 3u, (const CowU32[]){ local_20, COW_IMG(COW_ADDR_LIFT_10382120), uVar2 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_101c9b50(g, COW_IMG(COW_ADDR_LIFT_102026CB), 7u, (const CowU32[]){ param_1 + 0x69, param_2 + 0xb, local_20, 0x80606060, 0, 0x3f800000, 0x3f800000 }, g->ecx, g->edx, g->eax, 48u);
          cow_bridge_10202380(g, COW_IMG(COW_ADDR_LIFT_102026E0), 4u, (const CowU32[]){ param_1, param_2, param_3 + 6, 0x80606060 }, g->ecx, g->edx, g->eax, 0u);
        }
        cow_bridge_10201ff0(g, COW_IMG(COW_ADDR_LIFT_102026EC), 4u, (const CowU32[]){ 0, param_1, param_2, param_3 }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10202440(g, COW_IMG(COW_ADDR_LIFT_102026F6), 3u, (const CowU32[]){ param_1, param_2, param_3 }, g->ecx, g->edx, g->eax, 0u);
        if (rd32(COW_IMG(COW_ADDR_LIFT_106643E8)) != 0) {
          cow_bridge_102028a0(g, COW_IMG(COW_ADDR_LIFT_1020270C), 3u, (const CowU32[]){ param_1 + -0x62, param_2, param_3 }, g->ecx, g->edx, g->eax, 0u);
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 12 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 36 locals, pops [edi, esi, ebp, ebx], ret 12.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10202530(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 0x24u;                      /* 0x10202530: 36 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10202533: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10202534: push ebp */
    g->ebp = g->ecx;   /* 0x10202535: the value the entry loaded and the decompiler dropped */
    g->ecx = rd32(COW_IMG(COW_ADDR_LIFT_104DFD98));   /* 0x10202537: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1020253d: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1020253e: push edi */
    cow_lift_10202530(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 5 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
