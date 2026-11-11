/* f_0x102bcb9d - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102bcb9d (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102bcb9d(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    CowU32 pcVar3;
    char local_14[16];
    if (rd8((uint32_t)param_2) == '#') {
        iVar2 = 0;
        pcVar3 = param_2;
        do {
          cVar1 = rd8((uint32_t)pcVar3);
          wr8((uint32_t)(pcVar3 + 1u * (uint32_t)((int)(local_14 + -(int)param_2))), rd8((uint32_t)(pcVar3 + 1u * (uint32_t)(1))));
          if (cVar1 == ' ') break;
          iVar2 = iVar2 + 1;
          pcVar3 = pcVar3 + 1;
        } while (iVar2 < 0xf);
        if ((1 < iVar2) && (iVar2 < 0xf)) {
          local_14[iVar2 + -1] = '\0';
          cow_bridge_10314d95(g, COW_IMG(COW_ADDR_LIFT_102BCBEE), 4u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103D03E0), COW_IMG(COW_ADDR_LIFT_103C7BF4), local_14, param_2 + iVar2 }, g->ecx, g->edx, g->eax, 16u);
          return;
        }
      }
      cow_bridge_10314d95(g, COW_IMG(COW_ADDR_LIFT_102BCC03), 3u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_103D03E0), COW_IMG(COW_ADDR_LIFT_103C7BE0), param_2 }, g->ecx, g->edx, g->eax, 12u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(edx), cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi], ret 0.
   Arguments: 1 register argument(s) [edx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102bcb9d(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->edx;   /* edx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102bcb9d: push ebp */
    g->ebp = g->esp;                       /* 0x102bcb9e: mov ebp, esp */
    g->esp -= 0x10u;                      /* 0x102bcba0: 16 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102bcba3: push edi */
    g->edi = param_3;   /* 0x102bcba4: the value the entry loaded and the decompiler dropped */
    cow_lift_102bcb9d(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
