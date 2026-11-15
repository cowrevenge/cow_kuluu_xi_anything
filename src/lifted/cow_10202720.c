/* f_0x10202720 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10202720 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10202720(Guest* g, CowU32 param_1, int32_t param_2, int32_t param_3, int32_t param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU32 uVar2;
    CowU8 local_20[32];
    if (rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) != 0) {
        if (((CowU32)rd16((uint32_t)(param_4 + 0x32)) == rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x3c350))) &&
           ((int16_t)rd16((uint32_t)(param_4 + 0x34)) == 0)) {
          uVar2 = cow_bridge_102023b0(g, COW_IMG(COW_ADDR_LIFT_10202765), 1u, (const CowU32[]){ param_4 }, g->ebp, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 0u);
          cow_bridge_101cb090(g, COW_IMG(COW_ADDR_LIFT_10202786), 4u, (const CowU32[]){ param_2 + 0x1a, param_3 + 7, (((uint32_t)(((CowU32)uVar2 >> 8)) & 0xffffffu) << 8 | ((uint32_t)(rd8((uint32_t)(param_4 + 0x30))) & 0xffu)), param_4 + 0x78 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 16u);
          cow_bridge_10202380(g, COW_IMG(COW_ADDR_LIFT_1020279B), 4u, (const CowU32[]){ param_2, param_3, param_4 + 6, 0x80808080 }, g->ebp, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 0u);
          cow_bridge_10312031(g, COW_IMG(COW_ADDR_LIFT_102027AE), 3u, (const CowU32[]){ local_20, COW_IMG(COW_ADDR_LIFT_10352FF0), rd32((uint32_t)(param_4 + 0x28)) }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 0u);
          cow_bridge_101c9b50(g, COW_IMG(COW_ADDR_LIFT_102027D1), 7u, (const CowU32[]){ param_2 + 0x68, param_3 + 8, local_20, 0x80808080, 0, 0x3f800000, 0x3f800000 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 0u);
          cVar1 = cow_bridge_101938b0(g, COW_IMG(COW_ADDR_LIFT_102027DD), 2u, (const CowU32[]){ 174u, 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 48u);
          if ((cVar1 != '\0') && (cVar1 = cow_bridge_10201eb0(g, COW_IMG(COW_ADDR_LIFT_102027EA), 1u, (const CowU32[]){ param_4 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 4u), cVar1 == '\0')) {
            cow_bridge_10202900(g, COW_IMG(COW_ADDR_LIFT_10202804), 3u, (const CowU32[]){ param_2 + 0x30, param_3 + 10, rd32((uint32_t)(param_4 + 0x2c)) }, g->ebp, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 0u);
          }
          cow_bridge_10312031(g, COW_IMG(COW_ADDR_LIFT_1020281D), 3u, (const CowU32[]){ local_20, COW_IMG(COW_ADDR_LIFT_10352FF0), rd32((uint32_t)(param_4 + 0x24)) }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 0u);
          cow_bridge_101c9b50(g, COW_IMG(COW_ADDR_LIFT_10202840), 7u, (const CowU32[]){ param_2 + 0x58, param_3 + 1, local_20, uVar2, 0, 0x3f800000, 0x3f800000 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 40u);
        }
        else {
          cow_bridge_10202380(g, COW_IMG(COW_ADDR_LIFT_1020285F), 4u, (const CowU32[]){ param_2, param_3, param_4 + 6, 0x80606060 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 0u);
        }
        cow_bridge_10201ff0(g, COW_IMG(COW_ADDR_LIFT_1020286E), 4u, (const CowU32[]){ param_1, param_2, param_3, param_4 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 0u);
        cow_bridge_10202440(g, COW_IMG(COW_ADDR_LIFT_10202878), 3u, (const CowU32[]){ param_2, param_3, param_4 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 0u);
        if (rd32(COW_IMG(COW_ADDR_LIFT_106643E8)) != 0) {
          cow_bridge_102028a0(g, COW_IMG(COW_ADDR_LIFT_1020288E), 3u, (const CowU32[]){ param_2 + -0x62, param_3, param_4 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 0u);
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 4 parameter(s), cleanup 16 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 36 locals, pops [edi, esi, ebp, ebx], ret 16.
   Arguments: 1 register argument(s) [ecx], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10202720(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->esp -= 0x24u;                      /* 0x10202720: 36 bytes of locals */
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_104DFD98));   /* 0x10202723: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10202728: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10202729: push ebp */
    g->ebp = g->ecx;   /* 0x1020272a: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1020272c: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1020272d: push edi */
    cow_lift_10202720(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
