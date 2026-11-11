/* f_0x1006b1d0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1006b1d0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1006b1d0(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 puVar2;
    int iVar3;
    CowU32 piVar4;
    CowU32 local_4;
    iVar3 = -1;
      local_4 = 0xffffffff;
      iVar1 = 0;
      puVar2 = (CowU32)(param_1 + 0x428);
      piVar4 = (CowU32)(param_1 + 0x40);
      do {
        if ((((rd8((uint32_t)(param_1 + 8 + iVar1)) != '\0') && (rd32((uint32_t)(piVar4 + 4u * (uint32_t)(-1))) == rd32((uint32_t)(param_2 + 0x14)))) &&
            (rd32((uint32_t)piVar4) == rd32((uint32_t)(param_2 + 0x18)))) && (rd32((uint32_t)puVar2) <= local_4)) {
          iVar3 = iVar1;
          local_4 = rd32((uint32_t)puVar2);
        }
        iVar1 = iVar1 + 1;
        puVar2 = puVar2 + 1;
        piVar4 = piVar4 + 8;
      } while (iVar1 < 0x20);
      if (iVar3 == -1) {
        g->eax = (CowU32)(0); return;
      }
      wr8((uint32_t)(iVar3 + 8 + param_1), 0);
      param_1 = iVar3 * 0x20 + param_1;
      wr32((uint32_t)(param_1 + 0x2c), 0);
      g->eax = (CowU32)(param_1 + 0x28); return;
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
void cow_adapter_1006b1d0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x1006b1d0: push ecx */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1006b1d1: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1006b1d2: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1006b1d3: push esi */
    { uint32_t a = g->esi; uint32_t b = (uint32_t)0xFFFFFFFFu; uint32_t r = (uint32_t)(a | b); g->esi = (uint32_t)(r); }   /* 0x1006b1d4: register esi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1006b1d7: push edi */
    cow_lift_1006b1d0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
