/* f_0x10190830 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10190830 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10190830(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 pcVar1;
    char cVar2;
    int iVar3;
    int iVar4;
    int local_4;
    iVar4 = 0;
      cVar2 = rd8((uint32_t)param_1);
      local_4 = 0;
      do {
        if (cVar2 == '\0') {
          g->eax = (CowU32)(local_4); return;
        }
        pcVar1 = param_1 + iVar4;
        if (rd8((uint32_t)(param_1 + 1u * (uint32_t)(iVar4))) == '\x7f') {
    L_10190890:
          iVar4 = iVar4 + 2;
        }
        else {
          cVar2 = cow_bridge_1011c900(g, COW_IMG(COW_ADDR_LIFT_10190854), 1u, (const CowU32[]){ pcVar1 }, g->ecx, g->edx, g->eax, 4u);
          if (cVar2 == '\0') {
            iVar3 = cow_bridge_1011cec0(g, COW_IMG(COW_ADDR_LIFT_10190865), 1u, (const CowU32[]){ (((uint32_t)(rd8((uint32_t)pcVar1)) & 0xffu) << 8 | ((uint32_t)(rd8((uint32_t)(param_1 + 1u * (uint32_t)(iVar4 + 1)))) & 0xffu)) }, g->ecx, g->edx, g->eax, 0u);
            local_4 = local_4 + iVar3;
            goto L_10190890;
          }
          iVar3 = cow_bridge_1011cec0(g, COW_IMG(COW_ADDR_LIFT_10190883), 1u, (const CowU32[]){ (short)rd8((uint32_t)pcVar1) }, g->ecx, g->edx, g->eax, 0u);
          local_4 = local_4 + iVar3;
          iVar4 = iVar4 + 1;
        }
        cVar2 = rd8((uint32_t)(param_1 + 1u * (uint32_t)(iVar4)));
      } while( 1 );
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [esi, ebx, ecx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10190830(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x10190830: push ecx */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10190831: push ebx */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->ebx = (uint32_t)(rd32(A)); }   /* 0x10190832: register ebx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10190836: push esi */
    g->esi = 0u;   /* 0x10190837: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->ebx); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x10190839: register eax, replayed as the entry ran it */
    cow_lift_10190830(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
