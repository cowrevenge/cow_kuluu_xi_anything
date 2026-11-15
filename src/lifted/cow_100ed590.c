/* f_0x100ed590 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100ed590 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100ed590(Guest* g, CowU32 param_1, CowU32 param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU32 uVar2;
    int iVar3;
    CowU32 uVar4;
    int iVar5;
    int iVar6;
    CowU32 puVar7;
    puVar7 = param_1;
      for (uVar2 = param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        wr32((uint32_t)puVar7, 0);
        puVar7 = puVar7 + 4u * (uint32_t)(1);
      }
      iVar5 = 0;
      uVar4 = 0;
      for (uVar2 = param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        wr8((uint32_t)puVar7, 0);
        puVar7 = (CowU32)((int)puVar7 + 1);
      }
      iVar3 = 0;
      uVar2 = 0;
      if ((int)param_2 < 1) {
    L_100ed62a:
        if (uVar2 == param_2) {
          wr8((uint32_t)((param_2 - 1) + (int)param_1), 0);
          g->eax = (CowU32)((CowU32)0x0); return;
        }
        g->eax = (CowU32)(param_1); return;
      }
      do {
        cVar1 = (int8_t)rd8((uint32_t)(iVar3 + param_3));
        if ((cVar1 < 'A') || ('Z' < cVar1)) {
          if ((cVar1 < 'a') || ('z' < cVar1)) {
            cVar1 = (cVar1 == '\0') + '>';
          }
          else {
            cVar1 = cVar1 + -0x60;
          }
        }
        else {
          cVar1 = cVar1 + -0x26;
        }
        iVar6 = iVar5 + 6;
        uVar4 = uVar4 | (int)((CowU32)(CowU16)(short)cVar1 << 10) >> ((CowU8)iVar5 & 0x1f);
        if ((7 < iVar6) || (cVar1 == '?')) {
          iVar6 = iVar5 + -2;
          wr8((uint32_t)(uVar2 + (int)param_1), (char)(uVar4 >> 8));
          uVar4 = (uVar4 & 0xff) << 8;
          if ((cVar1 == '?') || (uVar2 = uVar2 + 1, (int)param_2 <= (int)uVar2)) goto L_100ed62a;
        }
        iVar3 = iVar3 + 1;
        iVar5 = iVar6;
      } while( 1 );
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100ed590(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100ed590: push ebx */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->ebx = (uint32_t)(rd32(A)); }   /* 0x100ed591: register ebx, replayed as the entry ran it */
    g->ecx = g->ebx;   /* 0x100ed595: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x100ed597: push ebp */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->ebp = (uint32_t)(rd32(A)); }   /* 0x100ed598: register ebp, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100ed59c: push esi */
    g->edx = g->ecx;   /* 0x100ed59d: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100ed59f: push edi */
    g->eax = 0u;   /* 0x100ed5a0: the value the entry loaded and the decompiler dropped */
    g->edi = g->ebp;   /* 0x100ed5a2: the value the entry loaded and the decompiler dropped */
    { { unsigned c = (unsigned)(0x2u) & 31u; if (c) { uint32_t a = g->ecx; uint32_t r; r = (uint32_t)((uint32_t)a >> c); g->ecx = (uint32_t)(r); } }; }   /* 0x100ed5a4: register ecx, replayed as the entry ran it */
    cow_lift_100ed590(g, param_1, param_2, param_3);

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
