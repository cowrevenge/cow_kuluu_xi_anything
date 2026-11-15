/* f_0x1028f610 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1028f610 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1028f610(Guest* g, int32_t param_1, int32_t param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    int iVar3;
    CowU32 uVar4;
    CowU32 uVar5;
    iVar1 = (int32_t)rd32((uint32_t)(param_1 + 0x24));
      uVar4 = 0;
      iVar2 = (int32_t)rd32((uint32_t)(iVar1 + param_2 * 0xc));
      iVar3 = (int32_t)rd32((uint32_t)(iVar2 + 0x30));
      if (param_3 == 0) {
        if (iVar3 != 0) {
          uVar5 = 1;
          goto L_1028f64e;
        }
      }
      else if (iVar3 != 0) {
        uVar5 = 1;
        goto L_1028f64e;
      }
      uVar5 = 0;
      uVar4 = 1;
    L_1028f64e:
      cow_bridge_10283280(g, COW_IMG(COW_ADDR_LIFT_1028F660), 2u, (const CowU32[]){ 0, (CowU32)(iVar3 == 0) }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_1026e3f0(g, COW_IMG(COW_ADDR_LIFT_1028F666), 1u, (const CowU32[]){ iVar2 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10283dc0(g, COW_IMG(COW_ADDR_LIFT_1028F673), 1u, (const CowU32[]){ rd32((uint32_t)(iVar1 + param_2 * 0xc + 4)) }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10283e00(g, COW_IMG(COW_ADDR_LIFT_1028F67C), 1u, (const CowU32[]){ rd32((uint32_t)(iVar2 + 0x24)) }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10283320(g, COW_IMG(COW_ADDR_LIFT_1028F6A2), 1u, (const CowU32[]){ (CowU32)((int8_t)rd8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x28)) + param_2)) != '\0') }, g->ecx, g->edx, g->eax, 4u);
      if (uVar5 < 4) {
        do {
          cow_bridge_10283280(g, COW_IMG(COW_ADDR_LIFT_1028F6B2), 2u, (const CowU32[]){ uVar5, 0 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10283320(g, COW_IMG(COW_ADDR_LIFT_1028F6B9), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 12u);
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < 4);
      }
      if (uVar4 < 4) {
        do {
          cow_bridge_10283280(g, COW_IMG(COW_ADDR_LIFT_1028F6CF), 2u, (const CowU32[]){ uVar4, 1 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10283320(g, COW_IMG(COW_ADDR_LIFT_1028F6D6), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 12u);
          uVar4 = uVar4 + 1;
        } while ((int)uVar4 < 4);
      }
      cow_bridge_10283280(g, COW_IMG(COW_ADDR_LIFT_1028F6F4), 2u, (const CowU32[]){ 0, (CowU32)((int32_t)rd32((uint32_t)(iVar2 + 0x30)) == 0) }, g->ecx, g->edx, g->eax, 8u);
      return;
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
void cow_adapter_1028f610(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->ecx = param_1;   /* 0x1028f610: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1028f614: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1028f615: push ebp */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->ebp = (uint32_t)(rd32(A)); }   /* 0x1028f616: register ebp, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->ecx + 0x24u); g->edx = (uint32_t)(rd32(A)); }   /* 0x1028f61a: register edx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1028f61d: push esi */
    { g->eax = (uint32_t)((uint32_t)(g->ebp + g->ebp * 2)); }   /* 0x1028f61e: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1028f622: push edi */
    g->edi = 0u;   /* 0x1028f623: the value the entry loaded and the decompiler dropped */
    g->esi = 0u;   /* 0x1028f625: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->edx + g->eax * 4); g->ebx = (uint32_t)(rd32(A)); }   /* 0x1028f627: register ebx, replayed as the entry ran it */
    { g->eax = (uint32_t)((uint32_t)(g->edx + g->eax * 4)); }   /* 0x1028f62a: register eax, replayed as the entry ran it */
    cow_lift_1028f610(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
