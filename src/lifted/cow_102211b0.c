/* f_0x102211b0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102211b0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102211b0(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 pcVar1;
    char cVar2;
    CowU32 uVar3;
    CowU32 pcVar4;
    pcVar1 = (CowU32)(param_2 * 0xcb + param_1 + 0x74);
      uVar3 = 0xffffffff;
      pcVar4 = pcVar1;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar2 = rd8((uint32_t)pcVar4);
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      if (0 < (int)(~uVar3 - 1)) {
        wr8((uint32_t)pcVar1, '\0');
        cow_bridge_10221680(g, COW_IMG(COW_ADDR_LIFT_102211E0), 0u, (const CowU32[]){ 0u }, g->edx, g->edx, 0u, 0u);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102211b0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->eax = param_2;   /* 0x102211b0: the value the entry loaded and the decompiler dropped */
    g->edx = g->ecx;   /* 0x102211b4: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102211b6: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102211b7: push edi */
    { g->ecx = (uint32_t)((uint32_t)(g->eax + g->eax * 4)); }   /* 0x102211b8: register ecx, replayed as the entry ran it */
    { g->ecx = (uint32_t)((uint32_t)(g->ecx + g->ecx * 4)); }   /* 0x102211bb: register ecx, replayed as the entry ran it */
    { g->ecx = (uint32_t)((uint32_t)(g->eax + g->ecx * 4)); }   /* 0x102211be: register ecx, replayed as the entry ran it */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)g->edx; uint32_t r = (uint32_t)(a + b); g->eax = (uint32_t)(r); }   /* 0x102211c1: register eax, replayed as the entry ran it */
    { g->esi = (uint32_t)((uint32_t)(g->eax + g->ecx * 2 + 0x74u)); }   /* 0x102211c3: register esi, replayed as the entry ran it */
    { uint32_t a = g->ecx; uint32_t b = (uint32_t)0xFFFFFFFFu; uint32_t r = (uint32_t)(a | b); g->ecx = (uint32_t)(r); }   /* 0x102211c7: register ecx, replayed as the entry ran it */
    g->edi = g->esi;   /* 0x102211ca: the value the entry loaded and the decompiler dropped */
    g->eax = 0u;   /* 0x102211cc: the value the entry loaded and the decompiler dropped */
    cow_lift_102211b0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
