/* f_0x100231f0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100231f0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100231f0(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    int iVar3;
    iVar1 = 0;
      iVar3 = rd32(COW_IMG(COW_ADDR_LIFT_10456E40)) + (CowU32)rd16((uint32_t)rd32((uint32_t)((param_1 + 0x42)))) * 0x3c;
      if (rd16((uint32_t)rd32((uint32_t)((param_1 + 0x42)))) != 0) {
        iVar2 = rd32(COW_IMG(COW_ADDR_LIFT_10456E40)) + 0x18;
        do {
          cow_bridge_10026f20(g, COW_IMG(COW_ADDR_LIFT_1002322C), 2u, (const CowU32[]){ iVar2 + -0xc, param_2 + 0x34 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10026f20(g, COW_IMG(COW_ADDR_LIFT_10023233), 2u, (const CowU32[]){ iVar2, param_2 + 0x34 }, g->ecx, g->edx, g->eax, 0u);
          iVar2 = iVar2 + 0x3c;
          iVar1 = iVar1 + 1;
        } while (iVar1 < (int)(CowU32)rd16((uint32_t)rd32((uint32_t)((param_1 + 0x42)))));
      }
      iVar1 = 0;
      if (rd16((uint32_t)(rd32((uint32_t)(param_1 + 0x42)) + 2)) != 0) {
        iVar3 = iVar3 + 0x18;
        do {
          cow_bridge_10026f20(g, COW_IMG(COW_ADDR_LIFT_10023269), 2u, (const CowU32[]){ iVar3 + -0xc, param_2 + 0x34 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10026f20(g, COW_IMG(COW_ADDR_LIFT_10023270), 2u, (const CowU32[]){ iVar3, param_2 + 0x34 }, g->ecx, g->edx, g->eax, 0u);
          iVar3 = iVar3 + 0x3c;
          iVar1 = iVar1 + 1;
        } while (iVar1 < (int)(CowU32)rd16((uint32_t)(rd32((uint32_t)(param_1 + 0x42)) + 2)));
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 5 push(es) [ecx, ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx, ecx], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100231f0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x100231f0: push ecx */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100231f1: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x100231f2: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100231f3: push esi */
    g->esi = g->ecx;   /* 0x100231f4: the value the entry loaded and the decompiler dropped */
    g->eax = 0u;   /* 0x100231f6: the value the entry loaded and the decompiler dropped */
    g->ebx = 0u;   /* 0x100231f8: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esi + 0x42u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x100231fa: register ecx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100231fd: push edi */
    { uint32_t A = (uint32_t)(g->ecx); g->eax = (g->eax & 0xFFFF0000u) | (uint16_t)(rd16(A)); }   /* 0x100231fe: register eax, replayed as the entry ran it */
    cow_lift_100231f0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
