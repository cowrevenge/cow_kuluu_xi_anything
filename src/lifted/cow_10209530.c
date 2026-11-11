/* f_0x10209530 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10209530 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10209530(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 puVar2;
    CowU32 puVar3;
    CowU32 puVar4;
    puVar3 = (CowU32)(param_1 + 100);
      puVar4 = (CowU32)(param_1 + 0x2c);
      puVar2 = (CowU32)(param_2 + 0xc);
      do {
        iVar1 = 0;
        wr16((uint32_t)puVar4, rd16((uint32_t)puVar2));
        wr8((uint32_t)puVar3, 3);
        do {
          if ((int)(CowU32)rd16((uint32_t)puVar4) < (int)(short)rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1033B2D4) + 4u * (uint32_t)(iVar1)))) {
            wr8((uint32_t)puVar3, (char)iVar1);
            break;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < 4);
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
        if (0x1b < (int)(puVar3 + (-100 - param_1))) {
          wr32((uint32_t)(param_1 + 0x20), rd32((uint32_t)(param_2 + 4)) & 0x3ffff);
          wr32((uint32_t)(param_1 + 0x28), rd32((uint32_t)(param_2 + 4)) >> 0x12);
          return;
        }
      } while( 1 );
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ecx], frame pointer no, 0 locals, pops [ecx], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10209530(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x10209530: push ecx */
    { uint32_t A = (uint32_t)(g->esp + 0x8u); g->eax = (uint32_t)(rd32(A)); }   /* 0x10209531: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10209535: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10209536: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10209537: push esi */
    g->ebp = 4294967196u;   /* 0x10209538: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1020953d: push edi */
    cow_lift_10209530(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
