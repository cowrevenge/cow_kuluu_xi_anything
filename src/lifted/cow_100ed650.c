/* f_0x100ed650 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100ed650 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100ed650(Guest* g, int32_t param_1, int32_t param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    int iVar2;
    CowU32 uVar3;
    CowU32 uVar4;
    int iVar5;
    iVar5 = 0;
      if (0 < param_2) {
        uVar4 = 0;
        do {
          if (rd8((uint32_t)param_3) != '\0') {
            iVar2 = (int)(uVar4 + ((int)uVar4 >> 0x1f & 7U)) >> 3;
            uVar3 = uVar4 & 0x80000007;
            if ((int)uVar3 < 0) {
              uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
            }
            if ((int)uVar3 < 3) {
              bVar1 = (CowU8)rd8((uint32_t)(param_3 + 1u * (uint32_t)(iVar2))) >> (2U - (char)uVar3 & 0x1f);
            }
            else {
              bVar1 = (CowU8)((((uint32_t)(rd8((uint32_t)(param_3 + 1u * (uint32_t)(iVar2)))) & 0xffu) << 8 | ((uint32_t)(rd8((uint32_t)(param_3 + 1u * (uint32_t)(iVar2 + 1)))) & 0xffu)) >> (10U - (char)uVar3 & 0x1f));
            }
            bVar1 = bVar1 & 0x3f;
            wr8((uint32_t)(iVar5 + param_1), bVar1);
            if (bVar1 == 0x3f) {
    L_100ed6d8:
              wr8((uint32_t)(iVar5 + param_1), 0);
            }
            else if (bVar1 == 0x3e) {
              wr8((uint32_t)(iVar5 + param_1), 0x20);
            }
            else if (bVar1 < 0x1b) {
              wr8((uint32_t)(iVar5 + param_1), bVar1 + 0x60);
            }
            else {
              if (0x34 < bVar1) goto L_100ed6d8;
              wr8((uint32_t)(iVar5 + param_1), bVar1 + 0x26);
            }
            if ((int8_t)rd8((uint32_t)(iVar5 + param_1)) == '\0') break;
          }
          iVar5 = iVar5 + 1;
          uVar4 = uVar4 + 6;
        } while (iVar5 < param_2);
      }
      if (iVar5 == param_2) {
        wr8((uint32_t)(param_1 + -1 + param_2), 0);
        g->eax = (CowU32)(0); return;
      }
      g->eax = (CowU32)(param_1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100ed650(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->eax = param_3;   /* 0x100ed650: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100ed654: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x100ed655: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100ed656: push esi */
    g->esi = 0u;   /* 0x100ed657: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100ed659: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0x14u); g->edi = (uint32_t)(rd32(A)); }   /* 0x100ed65a: register edi, replayed as the entry ran it */
    cow_lift_100ed650(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
