/* f_0x10255b00 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10255b00 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10255b00(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    CowU32 uVar3;
    CowU32 uVar4;
    CowU32 pcVar5;
    CowU32 pcVar6;
    pcVar5 = rd8((uint32_t)(param_1 + 4));
      if (pcVar5 == (CowU32)0x0) {
        return;
      }
      cVar1 = rd8((uint32_t)(pcVar5 + 1u * (uint32_t)(-1)));
      if (cVar1 == '\0') {
        return;
      }
      if (cVar1 == -1) {
        return;
      }
      uVar3 = 0xffffffff;
      wr8((uint32_t)(pcVar5 + 1u * (uint32_t)(-1)), cVar1 + -1);
      wr32((uint32_t)(param_1 + 4), 0);
      wr32((uint32_t)(param_1 + 8), 0);
      wr32((uint32_t)(param_1 + 0xc), 0);
      pcVar6 = pcVar5;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = rd8((uint32_t)pcVar6);
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3 - 1;
      if (0xfffffffd < uVar3) {
        cow_bridge_10326e60(g, COW_IMG(COW_ADDR_LIFT_10255B54), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, 0u, 0u);
      }
      iVar2 = (int32_t)rd32((uint32_t)(param_1 + 4));
      if (((iVar2 == 0) || (cVar1 = (int8_t)rd8((uint32_t)(iVar2 + -1)), cVar1 == '\0')) || (cVar1 == -1)) {
        if (uVar3 == 0) {
          cow_bridge_10255380(g, COW_IMG(COW_ADDR_LIFT_10255B78), 1u, (const CowU32[]){ 1 }, g->ecx, g->edx, g->eax, 0u);
          return;
        }
        if ((rd32((uint32_t)(param_1 + 0xc)) < 0x20) && (uVar3 <= rd32((uint32_t)(param_1 + 0xc)))) goto L_10255bae;
        cow_bridge_10255380(g, COW_IMG(COW_ADDR_LIFT_10255B8B), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 0u);
      }
      else if (uVar3 == 0) {
        wr8((uint32_t)(iVar2 + -1), cVar1 + -1);
        cow_bridge_10255380(g, COW_IMG(COW_ADDR_LIFT_10255BA6), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 0u);
        return;
      }
      cow_bridge_102554b0(g, COW_IMG(COW_ADDR_LIFT_10255BAE), 1u, (const CowU32[]){ uVar3 }, g->ecx, g->edx, g->eax, 0u);
    L_10255bae:
      pcVar6 = rd8((uint32_t)(param_1 + 4));
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        wr32((uint32_t)pcVar6, rd32((uint32_t)pcVar5));
        pcVar5 = pcVar5 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        wr8((uint32_t)pcVar6, rd8((uint32_t)pcVar5));
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      }
      wr32((uint32_t)(param_1 + 8), uVar3);
      wr8((uint32_t)(uVar3 + (int32_t)rd32((uint32_t)(param_1 + 4))), 0);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 5 push(es) [ecx, ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx, ecx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10255b00(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x10255b00: push ecx */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10255b01: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10255b02: push ebp */
    g->ebp = g->ecx;   /* 0x10255b03: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10255b05: push esi */
    g->esi = 0u;   /* 0x10255b06: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10255b08: push edi */
    { uint32_t A = (uint32_t)(g->ebp + 0x4u); g->eax = (uint32_t)(rd32(A)); }   /* 0x10255b09: register eax, replayed as the entry ran it */
    cow_lift_10255b00(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
