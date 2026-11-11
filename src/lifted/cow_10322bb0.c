/* f_0x10322bb0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10322bb0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10322bb0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    int iVar2;
    CowU8 abStack_28[32];
    abStack_28[0x1c] = 0;
      abStack_28[0x1d] = 0;
      abStack_28[0x1e] = 0;
      abStack_28[0x1f] = 0;
      abStack_28[0x18] = 0;
      abStack_28[0x19] = 0;
      abStack_28[0x1a] = 0;
      abStack_28[0x1b] = 0;
      abStack_28[0x14] = 0;
      abStack_28[0x15] = 0;
      abStack_28[0x16] = 0;
      abStack_28[0x17] = 0;
      abStack_28[0x10] = 0;
      abStack_28[0x11] = 0;
      abStack_28[0x12] = 0;
      abStack_28[0x13] = 0;
      abStack_28[0xc] = 0;
      abStack_28[0xd] = 0;
      abStack_28[0xe] = 0;
      abStack_28[0xf] = 0;
      abStack_28[8] = 0;
      abStack_28[9] = 0;
      abStack_28[10] = 0;
      abStack_28[0xb] = 0;
      abStack_28[4] = 0;
      abStack_28[5] = 0;
      abStack_28[6] = 0;
      abStack_28[7] = 0;
      abStack_28[0] = 0;
      abStack_28[1] = 0;
      abStack_28[2] = 0;
      abStack_28[3] = 0;
      while( 1 ) {
        bVar1 = rd8((uint32_t)param_2);
        if (bVar1 == 0) break;
        param_2 = param_2 + 1;
        abStack_28[(int)(CowU32)bVar1 >> 3] = abStack_28[(int)(CowU32)bVar1 >> 3] | '\x01' << (bVar1 & 7);
      }
      iVar2 = -1;
      do {
        iVar2 = iVar2 + 1;
        bVar1 = rd8((uint32_t)param_1);
        if (bVar1 == 0) {
          g->eax = (CowU32)(iVar2); return;
        }
        param_1 = param_1 + 1;
      } while ((abStack_28[(int)(CowU32)bVar1 >> 3] >> (bVar1 & 7) & 1) == 0);
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(iVar2) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10322bb0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10322bb0: push ebp */
    g->ebp = g->esp;                       /* 0x10322bb1: mov ebp, esp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10322bb3: push esi */
    g->eax = 0u;   /* 0x10322bb4: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->eax); /* 0x10322bb6: push eax */
    g->esp -= 4u; wr32(g->esp, g->eax); /* 0x10322bb7: push eax */
    g->esp -= 4u; wr32(g->esp, g->eax); /* 0x10322bb8: push eax */
    g->esp -= 4u; wr32(g->esp, g->eax); /* 0x10322bb9: push eax */
    g->esp -= 4u; wr32(g->esp, g->eax); /* 0x10322bba: push eax */
    g->esp -= 4u; wr32(g->esp, g->eax); /* 0x10322bbb: push eax */
    g->esp -= 4u; wr32(g->esp, g->eax); /* 0x10322bbc: push eax */
    g->esp -= 4u; wr32(g->esp, g->eax); /* 0x10322bbd: push eax */
    g->edx = param_3;   /* 0x10322bbe: the value the entry loaded and the decompiler dropped */
    cow_lift_10322bb0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 10 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
