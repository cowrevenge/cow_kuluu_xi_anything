/* f_0x1010d2b0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1010d2b0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1010d2b0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    int iVar2;
    CowU16 uVar3;
    CowU32 puVar4;
    iVar2 = rd32((uint32_t)(param_1 + 0x34));
      for (uVar3 = 0;
          ((rd32((uint32_t)(iVar2 + 4)) != 0 && (rd32((uint32_t)(iVar2 + 8)) != 0)) &&
          (uVar3 < rd16((uint32_t)(param_1 + 0x44)))); uVar3 = uVar3 + 1) {
        iVar2 = rd32((uint32_t)(iVar2 + 8));
      }
      wr16((uint32_t)(param_1 + 0x44), uVar3);
      if ((rd32((uint32_t)(iVar2 + 4)) != 0) && (rd32((uint32_t)(iVar2 + 8)) != (CowU32)0x0)) {
        puVar4 = rd32((uint32_t)(iVar2 + 8));
        while ((rd32((uint32_t)(puVar4 + 4u * (uint32_t)(1))) != 0 && (rd32((uint32_t)(puVar4 + 4u * (uint32_t)(2))) != 0))) {
          cow_bridge_1010d350(g, COW_IMG(COW_ADDR_LIFT_1010D2FC), 1u, (const CowU32[]){ rd32((uint32_t)puVar4) }, g->ecx, g->edx, g->eax, 0u);
          puVar1 = (CowU32)rd32((uint32_t)(puVar4 + 4u * (uint32_t)(2)));
          if (rd32((uint32_t)(puVar4 + 4u * (uint32_t)(1))) != 0) {
            wr32((uint32_t)(rd32((uint32_t)(puVar4 + 4u * (uint32_t)(1))) + 8), rd32((uint32_t)(puVar4 + 4u * (uint32_t)(2))));
          }
          if (rd32((uint32_t)(puVar4 + 4u * (uint32_t)(2))) != 0) {
            wr32((uint32_t)(rd32((uint32_t)(puVar4 + 4u * (uint32_t)(2))) + 4), rd32((uint32_t)(puVar4 + 4u * (uint32_t)(1))));
          }
          wr32((uint32_t)(puVar4 + 4u * (uint32_t)(2)), 0);
          wr32((uint32_t)(puVar4 + 4u * (uint32_t)(1)), 0);
          if (rd8((uint32_t)(param_1 + 0x28)) == '\0') {
            wr32((uint32_t)puVar4, 0);
          }
          cow_bridge_1010e7c0(g, COW_IMG(COW_ADDR_LIFT_1010D32F), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_101086b0(g, COW_IMG(COW_ADDR_LIFT_1010D335), 1u, (const CowU32[]){ puVar4 }, g->ecx, g->edx, g->eax, 4u);
          wr16((uint32_t)(param_1 + 0x2a), rd16((uint32_t)(param_1 + 0x2a)) + -1);
          puVar4 = puVar1;
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1010d2b0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1010d2b0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1010d2b1: push ebp */
    g->ebp = g->ecx;   /* 0x1010d2b2: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1010d2b4: push esi */
    g->ebx = 0u;   /* 0x1010d2b5: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1010d2b7: push edi */
    { uint32_t A = (uint32_t)(g->ebp + 0x34u); g->eax = (uint32_t)(rd32(A)); }   /* 0x1010d2b8: register eax, replayed as the entry ran it */
    g->edx = 0u;   /* 0x1010d2bb: the value the entry loaded and the decompiler dropped */
    cow_lift_1010d2b0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
