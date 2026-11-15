/* f_0x100ddbb0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100ddbb0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100ddbb0(Guest* g, CowU32 param_1, CowU32 param_2, int32_t param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 puVar2;
    int iVar3;
    CowU16 uVar4;
    int iVar5;
    CowU32 puVar6;
    puVar6 = (CowU32)0x0;
      if ((param_1 != (CowU32)0x0) && (rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) != 0)) {
        if ((param_3 != 0) && (iVar5 = rd32((uint32_t)(param_1 + 4u * (uint32_t)(3))), iVar5 % rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) != rd32((uint32_t)(param_1 + 4u * (uint32_t)(2))))) {
          do {
            puVar2 = (CowU32)(iVar5 * 0x110 + rd32((uint32_t)param_1));
            uVar4 = rd16((uint32_t)puVar2) & 0x1ff;
            if ((uVar4 == 0) && (puVar6 == (CowU32)0x0)) {
              puVar6 = puVar2;
            }
            if (((((uVar4 == 0xc) || (uVar4 == 0xd)) || (uVar4 == 0xe)) || (uVar4 == 0x11)) &&
               ((int32_t)rd32((uint32_t)(puVar2 + 2u * (uint32_t)(0x82))) == param_3)) {
              wr16((uint32_t)(param_1 + 4u * (uint32_t)(0xb)), 1);
              puVar6 = puVar2;
              break;
            }
            iVar5 = (iVar5 + 1) % rd32((uint32_t)(param_1 + 4u * (uint32_t)(1)));
          } while (iVar5 % rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) != rd32((uint32_t)(param_1 + 4u * (uint32_t)(2))));
          if (puVar6 != (CowU32)0x0) goto L_100ddceb;
        }
        iVar5 = rd32((uint32_t)(param_1 + 4u * (uint32_t)(3)));
        iVar1 = rd32((uint32_t)(param_1 + 4u * (uint32_t)(2)));
        iVar3 = iVar5 - iVar1;
        if (iVar5 <= iVar1) {
          iVar3 = iVar3 + rd32((uint32_t)(param_1 + 4u * (uint32_t)(1)));
        }
        if ((((((rd32((uint32_t)(param_1 + 4u * (uint32_t)(5))) <= iVar3) || (rd16((uint32_t)(param_1 + 4u * (uint32_t)(6))) == param_2)) ||
              ((rd16((uint32_t)((int)param_1 + 0x1a)) == param_2 ||
               ((rd16((uint32_t)(param_1 + 4u * (uint32_t)(7))) == param_2 || (rd16((uint32_t)((int)param_1 + 0x1e)) == param_2))))
              )) || (rd16((uint32_t)(param_1 + 4u * (uint32_t)(8))) == param_2)) ||
            ((((rd16((uint32_t)((int)param_1 + 0x22)) == param_2 || (rd16((uint32_t)(param_1 + 4u * (uint32_t)(9))) == param_2)) ||
              (rd16((uint32_t)((int)param_1 + 0x26)) == param_2)) ||
             ((rd16((uint32_t)(param_1 + 4u * (uint32_t)(10))) == param_2 || (rd16((uint32_t)((int)param_1 + 0x2a)) == param_2)))))
            ) && (iVar3 = (iVar1 + 1) % rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))), iVar5 != iVar3)) {
          wr32((uint32_t)(param_1 + 4u * (uint32_t)(2)), iVar3);
          puVar6 = (CowU32)(iVar1 * 0x110 + rd32((uint32_t)param_1));
          if (puVar6 != (CowU32)0x0) {
    L_100ddceb:
            wr32((uint32_t)(puVar6 + 2u * (uint32_t)(0x86)), param_1);
            wr32((uint32_t)(puVar6 + 2u * (uint32_t)(0x82)), param_4);
            g->eax = (CowU32)(puVar6); return;
          }
        }
      }
      g->eax = (CowU32)((CowU32)0x0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 4 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 0 register argument(s) [-], 4 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100ddbb0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100ddbb0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x100ddbb1: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100ddbb2: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100ddbb3: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0x14u); g->edi = (uint32_t)(rd32(A)); }   /* 0x100ddbb4: register edi, replayed as the entry ran it */
    g->ebx = 0u;   /* 0x100ddbb8: the value the entry loaded and the decompiler dropped */
    cow_lift_100ddbb0(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
