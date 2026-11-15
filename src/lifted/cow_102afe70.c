/* f_0x102afe70 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102afe70 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102afe70(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    CowU32 uVar3;
    int iVar4;
    CowU32 pcVar5;
    uVar3 = 0xffffffff;
      pcVar5 = param_1;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = rd8((uint32_t)pcVar5);
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      iVar2 = (int)rd8((uint32_t)param_1);
      iVar4 = ~uVar3 - 1;
      if (iVar2 != 0x2d) {
        if (iVar2 == 0x2e) {
          uVar3 = 1;
          if (iVar4 < 2) {
            g->eax = (CowU32)(0xff); return;
          }
          while (rd8((uint32_t)(param_1 + 1u * (uint32_t)(uVar3))) == '0') {
            uVar3 = uVar3 + 1;
            if (iVar4 <= (int)uVar3) {
              g->eax = (CowU32)((((uint32_t)((uVar3 >> 8)) & 0xffffffu) << 8 | ((uint32_t)(0xff) & 0xffu))); return;
            }
          }
        }
        else {
          uVar3 = iVar2 - 0x30;
          if (uVar3 == 0) goto L_102afeb0;
        }
    L_102afe92:
        g->eax = (CowU32)(uVar3 & 0xffffff00); return;
      }
    L_102afeb0:
      iVar2 = 1;
      if (1 < iVar4) {
        do {
          uVar3 = 0;
          if ((rd8((uint32_t)(param_1 + 1u * (uint32_t)(iVar2))) != '0') && (rd8((uint32_t)(param_1 + 1u * (uint32_t)(iVar2))) != '.')) goto L_102afe92;
          iVar2 = iVar2 + 1;
        } while (iVar2 < iVar4);
      }
      g->eax = (CowU32)(0xff); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102afe70(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102afe70: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x8u); g->esi = (uint32_t)(rd32(A)); }   /* 0x102afe71: register esi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102afe75: push edi */
    g->edi = g->esi;   /* 0x102afe76: the value the entry loaded and the decompiler dropped */
    { uint32_t a = g->ecx; uint32_t b = (uint32_t)0xFFFFFFFFu; uint32_t r = (uint32_t)(a | b); g->ecx = (uint32_t)(r); }   /* 0x102afe78: register ecx, replayed as the entry ran it */
    g->eax = 0u;   /* 0x102afe7b: the value the entry loaded and the decompiler dropped */
    cow_lift_102afe70(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 1 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
