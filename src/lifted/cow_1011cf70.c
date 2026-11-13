/* f_0x1011cf70 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1011cf70 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1011cf70(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 pcVar1;
    CowU32 pcVar2;
    char cVar3;
    int iVar4;
    CowU32 uVar5;
    pcVar2 = param_1;
      uVar5 = 0;
      if (param_1 == (CowU32)0x0) {
        g->eax = (CowU32)(-1); return;
      }
      cVar3 = rd8((uint32_t)param_1);
      param_1 = (CowU32)0x0;
      while ((cVar3 != '\0' && ((param_2 == 0 || (uVar5 < param_2))))) {
        pcVar1 = pcVar2 + uVar5;
        if (rd8((uint32_t)(pcVar2 + 1u * (uint32_t)(uVar5))) == '\x04') {
          uVar5 = uVar5 + 1;
        }
        else {
          cVar3 = cow_bridge_1011c900(g, COW_IMG(COW_ADDR_LIFT_1011CFAD), 1u, (const CowU32[]){ pcVar1 }, g->ecx, g->edx, g->eax, 4u);
          if (cVar3 == '\0') {
            iVar4 = cow_bridge_1011cec0(g, COW_IMG(COW_ADDR_LIFT_1011CFBE), 1u, (const CowU32[]){ (((uint32_t)(rd8((uint32_t)pcVar1)) & 0xffu) << 8 | ((uint32_t)(rd8((uint32_t)(pcVar2 + 1u * (uint32_t)(uVar5 + 1)))) & 0xffu)) }, g->ecx, g->edx, g->eax, 0u);
            uVar5 = uVar5 + 2;
          }
          else {
            iVar4 = cow_bridge_1011cec0(g, COW_IMG(COW_ADDR_LIFT_1011CFD8), 1u, (const CowU32[]){ rd8((uint32_t)pcVar1) }, g->ecx, g->edx, g->eax, 0u);
            uVar5 = uVar5 + 1;
          }
          param_1 = (CowU32)((int)param_1 + iVar4);
        }
        cVar3 = rd8((uint32_t)(pcVar2 + 1u * (uint32_t)(uVar5)));
      }
      g->eax = (CowU32)((int)param_1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1011cf70(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1011cf70: push ebx */
    { uint32_t A = (uint32_t)(g->esp + 0x8u); g->ebx = (uint32_t)(rd32(A)); }   /* 0x1011cf71: register ebx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1011cf75: push esi */
    g->esi = 0u;   /* 0x1011cf76: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* push edi (from the epilogue's pops) */
    cow_lift_1011cf70(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
