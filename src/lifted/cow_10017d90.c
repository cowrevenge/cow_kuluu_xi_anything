/* f_0x10017d90 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10017d90 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10017d90(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    CowU32 puVar3;
    int iVar4;
    CowU32 puVar5;
    CowU32 pcVar6;
    iVar4 = -1;
      pcVar6 = COW_IMG(COW_ADDR_LIFT_10456C18);
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        cVar1 = rd8((uint32_t)pcVar6);
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      if (iVar4 == -2) {
        cow_bridge_103118b7(g, COW_IMG(COW_ADDR_LIFT_10017DB9), 4u, (const CowU32[]){ 4u, 272985112u, 255u, 271912508u }, g->ecx, g->edx, 0u, 16u);
      }
      if (((param_1 == 0xcf1) || (param_1 == 0xcfa)) || (param_1 == 0xd07)) {
        g->eax = (CowU32)(COW_IMG(COW_ADDR_LIFT_10456C18)); return;
      }
      iVar4 = 0;
      if (rd32(COW_IMG(COW_ADDR_LIFT_10350988)) != 9999) {
        puVar5 = COW_IMG(COW_ADDR_LIFT_10350988);
        iVar2 = rd32(COW_IMG(COW_ADDR_LIFT_10350988));
        do {
          if (iVar2 == param_1) {
            puVar3 = (CowU32)
                     cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_10017E18), 2u, (const CowU32[]){ rd32((uint32_t)(iVar4 * 0x10 + 0x10350990)), rd32((uint32_t)(iVar4 * 0x10 + 0x10350994)) }, g->ecx, g->edx, 0u, 8u);
            g->eax = (CowU32)(puVar3); return;
          }
          iVar2 = rd32((uint32_t)(puVar5 + 4u * (uint32_t)(4)));
          puVar5 = puVar5 + 4u * (uint32_t)(4);
          iVar4 = iVar4 + 1;
        } while (iVar2 != 9999);
      }
      g->eax = (CowU32)((CowU32)0x0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10017d90(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10017d90: push edi */
    g->edi = COW_IMG(COW_ADDR_LIFT_10456C18);   /* 0x10017d91: the value the entry loaded and the decompiler dropped */
    { uint32_t a = g->ecx; uint32_t b = (uint32_t)0xFFFFFFFFu; uint32_t r = (uint32_t)(a | b); g->ecx = (uint32_t)(r); }   /* 0x10017d96: register ecx, replayed as the entry ran it */
    g->eax = 0u;   /* 0x10017d99: the value the entry loaded and the decompiler dropped */
    cow_lift_10017d90(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 2 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
