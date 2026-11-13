/* f_0x10100fa0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10100fa0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10100fa0(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    int iVar2;
    CowU32 puVar3;
    puVar3 = param_2;
      for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
        wr32((uint32_t)puVar3, 0);
        puVar3 = puVar3 + 4u * (uint32_t)(1);
      }
      if (((char)rd16((uint32_t)param_1) == '\x02') && ((int8_t)rd8((uint32_t)((int)param_1 + 1)) < '\0')) {
        iVar2 = 3;
        puVar3 = param_2;
        puVar1 = param_1;
        do {
          puVar1 = puVar1 + 2u * (uint32_t)(1);
          wr32((uint32_t)puVar3, rd16((uint32_t)puVar1) & 0x7ff);
          wr32((uint32_t)(puVar3 + 4u * (uint32_t)(1)), rd16((uint32_t)puVar1) >> 0xb & 0xf);
          puVar3 = puVar3 + 4u * (uint32_t)(5);
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        wr32((uint32_t)(param_2 + 4u * (uint32_t)(2)), (CowU8)rd16((uint32_t)(param_1 + 2u * (uint32_t)(4))) & 0xf);
        wr32((uint32_t)(param_2 + 4u * (uint32_t)(7)), (CowU32)(CowU8)((CowU8)rd16((uint32_t)(param_1 + 2u * (uint32_t)(4))) >> 4));
        wr32((uint32_t)(param_2 + 4u * (uint32_t)(0xc)), rd8((uint32_t)((int)param_1 + 9)) & 0xf);
        wr32((uint32_t)(param_2 + 4u * (uint32_t)(4)), (CowU32)(rd16((uint32_t)(param_1 + 2u * (uint32_t)(4))) >> 0xc));
        wr32((uint32_t)(param_2 + 4u * (uint32_t)(9)), (CowU8)rd16((uint32_t)(param_1 + 2u * (uint32_t)(5))) & 0xf);
        wr32((uint32_t)(param_2 + 4u * (uint32_t)(0xe)), (CowU32)(CowU8)((CowU8)rd16((uint32_t)(param_1 + 2u * (uint32_t)(5))) >> 4));
        wr32((uint32_t)(param_2 + 4u * (uint32_t)(3)), rd8((uint32_t)((int)param_1 + 0xb)) & 7);
        wr32((uint32_t)(param_2 + 4u * (uint32_t)(8)), rd16((uint32_t)(param_1 + 2u * (uint32_t)(5))) >> 0xb & 7);
        wr32((uint32_t)(param_2 + 4u * (uint32_t)(0xd)), (CowU32)(rd16((uint32_t)(param_1 + 2u * (uint32_t)(5))) >> 0xe) + (CowU32)(rd16((uint32_t)(param_1 + 2u * (uint32_t)(3))) >> 0xf) * 4);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi], ret 0.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10100fa0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->edx = param_1;   /* 0x10100fa0: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10100fa4: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->esi = (uint32_t)(rd32(A)); }   /* 0x10100fa5: register esi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10100fa9: push edi */
    g->ecx = 15u;   /* 0x10100faa: the value the entry loaded and the decompiler dropped */
    g->eax = 0u;   /* 0x10100faf: the value the entry loaded and the decompiler dropped */
    g->edi = g->esi;   /* 0x10100fb1: the value the entry loaded and the decompiler dropped */
    cow_lift_10100fa0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
