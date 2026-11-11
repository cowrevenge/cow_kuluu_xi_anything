/* f_0x10155bd0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10155bd0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10155bd0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5, CowU32 param_6, CowU32 param_7, CowU32 param_8)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    char cVar2;
    CowU32 uVar3;
    CowU32 uVar4;
    CowU32 pcVar5;
    int iVar6;
    int iVar7;
    uVar3 = 0xffffffff;
      pcVar5 = param_5;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar2 = rd8((uint32_t)pcVar5);
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      uVar4 = 0xffffffff;
      pcVar5 = param_8;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar2 = rd8((uint32_t)pcVar5);
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      if (param_2 <= ~uVar4 + 0x1c + ~uVar3) {
        g->eax = (CowU32)(0); return;
      }
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(1)), param_3);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(2)), param_4);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(4)), param_6);
      puVar1 = param_1 + 7;
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(5)), param_7);
      wr32((uint32_t)param_1, 0);
      iVar6 = (int)puVar1 - (int)param_5;
      do {
        cVar2 = rd8((uint32_t)param_5);
        wr8((uint32_t)(param_5 + 1u * (uint32_t)(iVar6)), cVar2);
        param_5 = param_5 + 1;
      } while (cVar2 != '\0');
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(3)), puVar1);
      iVar6 = (int)puVar1 + ~uVar3;
      iVar7 = iVar6 - (int)param_8;
      do {
        cVar2 = rd8((uint32_t)param_8);
        wr8((uint32_t)(param_8 + 1u * (uint32_t)(iVar7)), cVar2);
        param_8 = param_8 + 1;
      } while (cVar2 != '\0');
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(6)), iVar6);
      g->eax = (CowU32)(1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 8 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 7 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10155bd0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_6 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    CowU32 param_7 = rd32((uint32_t)(sp0 + 4u + 0x14u));
    CowU32 param_8 = rd32((uint32_t)(sp0 + 4u + 0x18u));
    g->edx = param_6;   /* 0x10155bd0: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10155bd4: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10155bd5: push ebp */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10155bd6: push edi */
    g->edi = g->edx;   /* 0x10155bd7: the value the entry loaded and the decompiler dropped */
    { uint32_t a = g->ecx; uint32_t b = (uint32_t)0xFFFFFFFFu; uint32_t r = (uint32_t)(a | b); g->ecx = (uint32_t)(r); }   /* 0x10155bd9: register ecx, replayed as the entry ran it */
    g->eax = 0u;   /* 0x10155bdc: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esp + 0x2Cu); g->ebp = (uint32_t)(rd32(A)); }   /* 0x10155bde: register ebp, replayed as the entry ran it */
    cow_lift_10155bd0(g, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
