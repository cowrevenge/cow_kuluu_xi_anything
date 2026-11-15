/* f_0x101c9550 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101c9550 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101c9550(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    CowU32 pbVar2;
    CowU32 piVar3;
    int iVar4;
    CowU8 bVar5;
    CowU32 pbVar6;
    int iVar7;
    pbVar2 = param_1;
      if (param_1 == (CowU32)0x0) {
        g->eax = (CowU32)(0); return;
      }
      piVar3 = (CowU32)cow_bridge_101c8c30(g, COW_IMG(COW_ADDR_LIFT_101C9564), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 4u);
      if (piVar3 == (CowU32)0x0) {
        g->eax = (CowU32)(0); return;
      }
      bVar1 = rd8((uint32_t)param_1);
      iVar7 = 0;
      pbVar6 = param_1;
      do {
        if (bVar1 == 0) {
          g->eax = (CowU32)(iVar7); return;
        }
        if (pbVar2 == pbVar6) {
          bVar5 = 0;
        }
        else {
          bVar5 = rd8((uint32_t)(pbVar6 + 1u * (uint32_t)(-1)));
        }
        param_1 = (CowU32)(CowU32)bVar1;
        if (bVar1 != 0x85) {
          if (bVar5 == 0x85) {
            if (bVar1 == 0xda) {
              iVar4 = (int32_t)rd32((uint32_t)(rd32((uint32_t)piVar3) + 0x17c));
            }
            else {
              if (bVar1 != 200) goto L_101c95b1;
              iVar4 = (int32_t)rd32((uint32_t)(rd32((uint32_t)piVar3) + 0x180));
            }
          }
          else {
    L_101c95b1:
            iVar4 = (int)param_1 - 0x20;
            if ((iVar4 < 0) || (0x8b < iVar4)) goto L_101c95e1;
            iVar4 = (int32_t)rd32((uint32_t)(rd32((uint32_t)piVar3) + iVar4 * 4));
          }
          if (iVar4 != 0) {
            iVar7 = iVar7 + -1 + ((int)(int16_t)rd16((uint32_t)(iVar4 + 0x22)) - (int)(int16_t)rd16((uint32_t)(iVar4 + 0x20)));
          }
        }
    L_101c95e1:
        bVar1 = rd8((uint32_t)(pbVar6 + 1u * (uint32_t)(1)));
        pbVar6 = pbVar6 + 1;
      } while( 1 );
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, ebx, esi], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101c9550(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101c9550: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x8u); g->esi = (uint32_t)(rd32(A)); }   /* 0x101c9551: register esi, replayed as the entry ran it */
    cow_lift_101c9550(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
