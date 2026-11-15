/* f_0x1000bd50 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1000bd50 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1000bd50(Guest* g, int32_t param_1, int32_t param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 puVar2;
    CowU32 puVar3;
    if (param_2 == 2) {
        puVar3 = (CowU32)(param_1 + 0x97c);
      }
      else if (param_2 == 3) {
        puVar3 = (CowU32)(param_1 + 0x9bc);
      }
      else {
        if (param_2 != 0x100) goto L_1000bd8e;
        puVar3 = (CowU32)(param_1 + 0x93c);
      }
      puVar2 = param_3;
      for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
        wr32((uint32_t)puVar3, rd32((uint32_t)puVar2));
        puVar2 = puVar2 + 4u * (uint32_t)(1);
        puVar3 = puVar3 + 4u * (uint32_t)(1);
      }
    L_1000bd8e:
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((param_1 + 0xcu))))) + 0x94u))), COW_IMG(COW_ADDR_LIFT_1000BD9C), 3u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0xc)), param_2, param_3 }, g->ecx, g->edx, g->ecx, 0u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1000bd50(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->edx = param_3;   /* 0x1000bd50: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1000bd54: push ebx */
    { uint32_t A = (uint32_t)(g->esp + 0x8u); g->ebx = (uint32_t)(rd32(A)); }   /* 0x1000bd55: register ebx, replayed as the entry ran it */
    g->eax = g->ecx;   /* 0x1000bd59: the value the entry loaded and the decompiler dropped */
    g->ecx = g->ebx;   /* 0x1000bd5b: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1000bd5d: push esi */
    { uint32_t a = g->ecx; uint32_t b = (uint32_t)0x2u; uint32_t r = (uint32_t)(a - b); g->ecx = (uint32_t)(r); }   /* 0x1000bd5e: register ecx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1000bd61: push edi */
    cow_lift_1000bd50(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
