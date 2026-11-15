/* f_0x1022b5d0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1022b5d0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1022b5d0(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU8 bVar2;
    char cVar3;
    CowU32 pbVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    CowU32 pbVar8;
    _Bool bVar9;
      
      if (((param_1 != (CowU32)0x0) && (rd8((uint32_t)param_1) != 0)) && (rd32(COW_IMG(COW_ADDR_LIFT_10667A74)) != 0)) {
        iVar6 = 0;
        iVar7 = 0;
        do {
          iVar1 = rd32(COW_IMG(COW_ADDR_LIFT_10667A74)) + iVar7;
          if (((int16_t)rd16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10667A74)) + iVar7)) != 0) &&
             ((param_2 == '\0' || ((int16_t)rd16((uint32_t)(iVar1 + 2)) != 6)))) {
            iVar5 = iVar6;
            cow_bridge_1022bda0(g, COW_IMG(COW_ADDR_LIFT_1022B61A), 1u, (const CowU32[]){ iVar6 }, g->ecx, g->edx, g->eax, 0u);
            pbVar4 = (CowU32)cow_bridge_1022bf00(g, COW_IMG(COW_ADDR_LIFT_1022B621), 0u, (const CowU32[]){ 0u }, iVar5, g->edx, g->eax, 0u);
            pbVar8 = param_1;
            do {
              bVar2 = rd8((uint32_t)pbVar4);
              bVar9 = bVar2 < rd8((uint32_t)pbVar8);
              if (bVar2 != rd8((uint32_t)pbVar8)) {
    L_1022b645:
                iVar5 = (1 - (CowU32)bVar9) - (CowU32)(bVar9 != 0);
                goto L_1022b64a;
              }
              if (bVar2 == 0) break;
              bVar2 = rd8((uint32_t)(pbVar4 + 1u * (uint32_t)(1)));
              bVar9 = bVar2 < rd8((uint32_t)(pbVar8 + 1u * (uint32_t)(1)));
              if (bVar2 != rd8((uint32_t)(pbVar8 + 1u * (uint32_t)(1)))) goto L_1022b645;
              pbVar4 = pbVar4 + 2;
              pbVar8 = pbVar8 + 2;
            } while (bVar2 != 0);
            iVar5 = 0;
    L_1022b64a:
            if ((iVar5 == 0) && (cVar3 = cow_bridge_1022b7d0(g, COW_IMG(COW_ADDR_LIFT_1022B654), 1u, (const CowU32[]){ iVar1 }, g->ecx, g->edx, g->eax, 4u), cVar3 != '\0')) {
              g->eax = (CowU32)(1); return;
            }
          }
          iVar7 = iVar7 + 100;
          iVar6 = iVar6 + 1;
        } while (iVar7 < 0x19000);
      }
      g->eax = (CowU32)(0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(edx), cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 1 register argument(s) [edx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1022b5d0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->edx;   /* edx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1022b5d0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1022b5d1: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1022b5d2: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->esi = (uint32_t)(rd32(A)); }   /* 0x1022b5d3: register esi, replayed as the entry ran it */
    cow_lift_1022b5d0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
