/* f_0x100efdf0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100efdf0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100efdf0(Guest* g, int32_t param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    CowU8 local_68[2];
    short sStack_66;
    CowU32 uStack_64;
    int iStack_60;
    int iStack_5c;
    iVar2 = 0;
      wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x136ac), 0);
      do {
        iVar1 = cow_bridge_1030ffe1(g, COW_IMG(COW_ADDR_LIFT_100EFE1E), 2u, (const CowU32[]){ iVar2, local_68 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DF770)), 8u);
        if ((((-1 < iVar1) && ((local_68[0] & 1) != 0)) && (sStack_66 == 1)) &&
           (((iStack_60 == param_1 && (iStack_5c == 0)) &&
            (uStack_64 == (((param_2 & 0xffff) << 8 | param_3 & 0xffff0000) << 8 | param_3 & 0xffff)))))
        break;
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x40);
      if (iVar2 == 0x40) {
        wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DF770)) + 0x136ac), 0xffffffff);
        g->eax = (CowU32)(-1); return;
      }
      g->eax = (CowU32)(iVar2); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 104 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100efdf0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_104DF770));   /* 0x100efdf0: the value the entry loaded and the decompiler dropped */
    g->esp -= 0x68u;                      /* 0x100efdf5: 104 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100efdf8: push ebx */
    { uint32_t A = (uint32_t)(g->esp + 0x70u); g->ebx = (uint32_t)(rd32(A)); }   /* 0x100efdf9: register ebx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x100efdfd: push ebp */
    { uint32_t A = (uint32_t)(g->esp + 0x78u); g->ebp = (uint32_t)(rd32(A)); }   /* 0x100efdfe: register ebp, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100efe02: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x80u); g->esi = (uint32_t)(rd32(A)); }   /* 0x100efe03: register esi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100efe0a: push edi */
    g->edi = 0u;   /* 0x100efe0b: the value the entry loaded and the decompiler dropped */
    cow_lift_100efdf0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
