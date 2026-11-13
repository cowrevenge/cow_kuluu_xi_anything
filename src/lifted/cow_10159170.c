/* f_0x10159170 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10159170 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10159170(Guest* g, int32_t param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU32 puVar2;
    CowU32 uVar3;
    CowU32 uVar4;
    CowU32 uVar5;
    uVar4 = 0;
      uVar5 = 0;
      if (rd32(COW_IMG(COW_ADDR_LIFT_103720C0)) != 0) {
        puVar2 = COW_IMG(COW_ADDR_LIFT_103720C8);
        uVar3 = rd32(COW_IMG(COW_ADDR_LIFT_103720C0));
        do {
          if ((param_2 & uVar3) != 0) {
            uVar4 = uVar4 | rd32((uint32_t)(puVar2 + 4u * (uint32_t)(-1)));
            uVar5 = uVar5 | rd32((uint32_t)puVar2);
          }
          uVar3 = rd32((uint32_t)(puVar2 + 4u * (uint32_t)(1)));
          puVar2 = puVar2 + 4u * (uint32_t)(3);
        } while (uVar3 != 0);
      }
      cVar1 = cow_bridge_101cc350(g, COW_IMG(COW_ADDR_LIFT_101591AC), 2u, (const CowU32[]){ 0u, 0u }, g->ecx, g->edx, g->eax, 8u);
      wr32((uint32_t)(param_1 + 100), uVar5);
      if ((cVar1 != '\0') && ((param_2 & 4) != 0)) {
        uVar4 = uVar4 | 8;
      }
      wr32((uint32_t)(param_1 + 0x60), uVar4);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10159170(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->edx = param_2;   /* 0x10159170: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10159174: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10159175: push esi */
    g->ebp = g->ecx;   /* 0x10159176: the value the entry loaded and the decompiler dropped */
    g->ecx = rd32(COW_IMG(COW_ADDR_LIFT_103720C0));   /* 0x10159178: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1015917e: push edi */
    g->esi = 0u;   /* 0x1015917f: the value the entry loaded and the decompiler dropped */
    g->edi = 0u;   /* 0x10159181: the value the entry loaded and the decompiler dropped */
    cow_lift_10159170(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
