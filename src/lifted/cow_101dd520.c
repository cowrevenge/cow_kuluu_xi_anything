/* f_0x101dd520 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101dd520 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101dd520(Guest* g, int32_t param_1, int32_t param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    CowU32 pbVar2;
    int iVar3;
    int iVar4;
    CowU32 pbVar5;
    CowU32 pbVar6;
    CowU32 pbVar7;
    _Bool bVar8;
      
      iVar4 = 0;
      pbVar5 = (CowU32)(param_2 * 0x7b + 0x1a + param_1);
      pbVar7 = (CowU32)(param_3 * 0x7b + 0x1a + param_1);
      do {
        pbVar2 = pbVar5;
        pbVar6 = pbVar7;
        do {
          bVar1 = rd8((uint32_t)pbVar2);
          bVar8 = bVar1 < rd8((uint32_t)pbVar6);
          if (bVar1 != rd8((uint32_t)pbVar6)) {
    L_101dd570:
            iVar3 = (1 - (CowU32)bVar8) - (CowU32)(bVar8 != 0);
            goto L_101dd575;
          }
          if (bVar1 == 0) break;
          bVar1 = rd8((uint32_t)(pbVar2 + 1u * (uint32_t)(1)));
          bVar8 = bVar1 < rd8((uint32_t)(pbVar6 + 1u * (uint32_t)(1)));
          if (bVar1 != rd8((uint32_t)(pbVar6 + 1u * (uint32_t)(1)))) goto L_101dd570;
          pbVar2 = pbVar2 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
    L_101dd575:
        if (iVar3 != 0) {
          g->eax = (CowU32)((((uint32_t)(((CowU32)iVar3 >> 8)) & 0xffffffu) << 8 | ((uint32_t)(1) & 0xffu))); return;
        }
        iVar4 = iVar4 + 1;
        pbVar7 = pbVar7 + 0x29;
        pbVar5 = pbVar5 + 0x29;
        if (2 < iVar4) {
          g->eax = (CowU32)(0); return;
        }
      } while( 1 );
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101dd520(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->eax = param_2;   /* 0x101dd520: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101dd524: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x101dd525: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101dd526: push esi */
    { g->esi = (uint32_t)((uint32_t)(g->eax + g->eax * 4)); }   /* 0x101dd527: register esi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101dd52a: push edi */
    g->edx = 0u;   /* 0x101dd52b: the value the entry loaded and the decompiler dropped */
    { g->eax = (uint32_t)((uint32_t)(g->eax + g->esi * 8)); }   /* 0x101dd52d: register eax, replayed as the entry ran it */
    { g->esi = (uint32_t)((uint32_t)(g->ecx + g->eax * 2)); }   /* 0x101dd530: register esi, replayed as the entry ran it */
    { g->ebp = (uint32_t)((uint32_t)(g->eax + g->esi + 0x1Au)); }   /* 0x101dd533: register ebp, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esp + 0x18u); g->eax = (uint32_t)(rd32(A)); }   /* 0x101dd537: register eax, replayed as the entry ran it */
    { g->esi = (uint32_t)((uint32_t)(g->eax + g->eax * 4)); }   /* 0x101dd53b: register esi, replayed as the entry ran it */
    { g->eax = (uint32_t)((uint32_t)(g->eax + g->esi * 8)); }   /* 0x101dd53e: register eax, replayed as the entry ran it */
    { g->ecx = (uint32_t)((uint32_t)(g->ecx + g->eax * 2)); }   /* 0x101dd541: register ecx, replayed as the entry ran it */
    cow_lift_101dd520(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
