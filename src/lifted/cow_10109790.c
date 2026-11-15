/* f_0x10109790 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10109790 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10109790(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    int iVar2;
    int iVar3;
    CowU8 bVar4;
    CowU32 pbVar5;
    if ((int32_t)rd32((uint32_t)((int)param_1 + 4)) == 0) {
        pbVar5 = (CowU32)0x0;
      }
      else {
        pbVar5 = rd8((uint32_t)((int32_t)rd32((uint32_t)((int)param_1 + 4)) + 4));
      }
      if ((((pbVar5 != (CowU32)0x0) && (param_2 != (CowU32)0x0)) && (bVar4 = rd8((uint32_t)pbVar5), bVar4 != 0)) &&
         (rd8((uint32_t)param_2) != 0)) {
        while (bVar1 = rd8((uint32_t)param_2), bVar1 != 0) {
          if (bVar4 == 0) {
            g->eax = (CowU32)(1); return;
          }
          if (((char)bVar4 < '\0') || ((char)bVar1 < '\0')) {
            if (bVar4 == bVar1) {
              if (rd8((uint32_t)(pbVar5 + 1u * (uint32_t)(1))) == 0) {
                g->eax = (CowU32)(0); return;
              }
              if (rd8((uint32_t)(param_2 + 1u * (uint32_t)(2))) == 0) {
                g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
              }
              if (rd8((uint32_t)(pbVar5 + 1u * (uint32_t)(1))) != rd8((uint32_t)(param_2 + 1u * (uint32_t)(2)))) {
                g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
              }
              pbVar5 = pbVar5 + 1;
              param_2 = param_2 + 1;
              goto L_10109810;
            }
            break;
          }
          iVar2 = cow_bridge_103145e4(g, COW_IMG(COW_ADDR_LIFT_101097D3), 1u, (const CowU32[]){ (CowU32)bVar1 }, g->ecx, g->edx, g->eax, 0u);
          iVar3 = cow_bridge_103145e4(g, COW_IMG(COW_ADDR_LIFT_101097DF), 1u, (const CowU32[]){ (CowU32)rd8((uint32_t)pbVar5) }, g->ecx, g->edx, g->eax, 8u);
          if (iVar3 != iVar2) break;
    L_10109810:
          bVar4 = rd8((uint32_t)(pbVar5 + 1u * (uint32_t)(1)));
          pbVar5 = pbVar5 + 1;
          param_2 = param_2 + 1;
          if (bVar4 == 0) {
            g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
          }
        }
        if ((rd8((uint32_t)pbVar5) == 0) || (rd8((uint32_t)param_2) == 0)) {
          g->eax = (CowU32)(1); return;
        }
      }
      g->eax = (CowU32)(0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10109790(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    { uint32_t A = (uint32_t)(g->ecx + 0x4u); g->eax = (uint32_t)(rd32(A)); }   /* 0x10109790: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10109793: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10109794: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10109795: push edi */
    cow_lift_10109790(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 2 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
