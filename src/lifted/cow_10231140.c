/* f_0x10231140 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10231140 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10231140(Guest* g, CowU32 param_1, int32_t param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    CowU32 uVar3;
    int iVar4;
    if ((rd32(COW_IMG(COW_ADDR_LIFT_10668ED0)) != 0) && ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10668ED0)) + 0x68)) == 4)) {
        cVar1 = cow_bridge_102309d0(g, COW_IMG(COW_ADDR_LIFT_10231167), 2u, (const CowU32[]){ g->edi, g->ebx }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10668ED0)), 8u);
        if (cVar1 != '\0') {
          if (rd32((uint32_t)(param_2 + 0x1564)) == (CowU32)0x0) {
            iVar4 = 0;
          }
          else {
            iVar4 = rd32((uint32_t)rd32((uint32_t)((param_2 + 0x1564))));
          }
          iVar2 = cow_bridge_10230a80(g, COW_IMG(COW_ADDR_LIFT_10231184), 1u, (const CowU32[]){ param_1 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10668ED0)), 0u);
          g->eax = (CowU32)((-(CowU32)(iVar4 != iVar2) & 0x400000) + 0x80404040); return;
        }
      }
      cVar1 = cow_bridge_10230930(g, COW_IMG(COW_ADDR_LIFT_102311A6), 1u, (const CowU32[]){ param_1 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10668ED0)), 4u);
      if (cVar1 != '\0') {
        g->eax = (CowU32)(-0x7f6f6fc0); return;
      }
      uVar3 = cow_bridge_100990c0(g, COW_IMG(COW_ADDR_LIFT_102311C4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10668ED0)), 0u);
      if ((uVar3 & 0xffff) + 0xe000 == (param_1 & 0xffff)) {
        g->eax = (CowU32)(-0x7fafaf60); return;
      }
      uVar3 = cow_bridge_100990d0(g, COW_IMG(COW_ADDR_LIFT_102311E1), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10668ED0)), 0u);
      if ((uVar3 & 0xffff) + 0xe000 == (param_1 & 0xffff)) {
        g->eax = (CowU32)(-0x7fafaf60); return;
      }
      cVar1 = cow_bridge_102308a0(g, COW_IMG(COW_ADDR_LIFT_102311FF), 1u, (const CowU32[]){ param_1 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10668ED0)), 4u);
      if (cVar1 != '\0') {
        g->eax = (CowU32)(-0x7faf6fb0); return;
      }
      cVar1 = cow_bridge_102309b0(g, COW_IMG(COW_ADDR_LIFT_10231215), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10668ED0)), 0u);
      if ((cVar1 != '\0') && (param_3 == '\x01')) {
        g->eax = (CowU32)(-0x7fbfbfc0); return;
      }
      cVar1 = cow_bridge_102309d0(g, COW_IMG(COW_ADDR_LIFT_10231231), 2u, (const CowU32[]){ param_1, param_2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10668ED0)), 8u);
      iVar4 = -0x7fbfbfc0;
      if (cVar1 == '\0') {
        iVar4 = -0x7f7f7f80;
      }
      g->eax = (CowU32)(iVar4); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10231140(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_10668ED0));   /* 0x10231140: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10231145: push ebx */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->ebx = (uint32_t)(rd32(A)); }   /* 0x10231146: register ebx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1023114a: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1023114b: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1023114c: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0x14u); g->edi = (uint32_t)(rd32(A)); }   /* 0x1023114d: register edi, replayed as the entry ran it */
    g->ebp = 2155905152u;   /* 0x10231151: the value the entry loaded and the decompiler dropped */
    cow_lift_10231140(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
