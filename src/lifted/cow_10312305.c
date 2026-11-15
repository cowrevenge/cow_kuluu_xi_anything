/* f_0x10312305 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10312305 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10312305(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 piVar1;
    int iVar2;
    CowU32 uVar3;
    CowU32 uVar4;
    CowU32 uVar5;
    CowU32 uVar6;
    piVar1 = param_4;
      uVar5 = param_2 * param_3;
      if (uVar5 == 0) {
        param_3 = 0;
      }
      else {
        uVar4 = uVar5;
        if ((rd16((uint32_t)(param_4 + 4u * (uint32_t)(3))) & 0x10c) == 0) {
          param_4 = (CowU32)0x1000;
        }
        else {
          param_4 = (CowU32)rd32((uint32_t)(param_4 + 4u * (uint32_t)(6)));
        }
        do {
          if (((rd32((uint32_t)(piVar1 + 4u * (uint32_t)(3))) & 0x108U) == 0) || (uVar6 = rd32((uint32_t)(piVar1 + 4u * (uint32_t)(1))), uVar6 == 0)) {
            if (param_4 <= uVar4) {
              if (((rd32((uint32_t)(piVar1 + 4u * (uint32_t)(3))) & 0x108U) != 0) && (iVar2 = cow_bridge_10318845(g, COW_IMG(COW_ADDR_LIFT_10312386), 1u, (const CowU32[]){ piVar1 }, g->ecx, g->edx, g->eax, 0u), iVar2 != 0)) {
    L_10312406:
                g->eax = (CowU32)((uVar5 - uVar4) / param_2); return;
              }
              if (param_4 == (CowU32)0x0) {
                uVar6 = uVar4;
              }
              else {
                uVar6 = uVar4 - uVar4 % (CowU32)param_4;
              }
              uVar3 = cow_bridge_1031981f(g, COW_IMG(COW_ADDR_LIFT_103123AC), 3u, (const CowU32[]){ rd32((uint32_t)(piVar1 + 4u * (uint32_t)(4))), param_1, uVar6 }, g->ecx, g->edx, g->eax, 12u);
              if ((uVar3 == 0xffffffff) || (uVar4 = uVar4 - uVar3, uVar3 < uVar6)) {
                wr32((uint32_t)(piVar1 + 4u * (uint32_t)(3)), rd32((uint32_t)(piVar1 + 4u * (uint32_t)(3))) | 0x20);
                goto L_10312406;
              }
              goto L_103123bd;
            }
            iVar2 = cow_bridge_10318b86(g, COW_IMG(COW_ADDR_LIFT_103123CF), 2u, (const CowU32[]){ (int)rd8((uint32_t)param_1), piVar1 }, g->ecx, g->edx, g->eax, 0u);
            if (iVar2 == -1) goto L_10312406;
            param_1 = param_1 + 1;
            param_4 = (CowU32)rd32((uint32_t)(piVar1 + 4u * (uint32_t)(6)));
            uVar4 = uVar4 - 1;
            if ((int)param_4 < 1) {
              param_4 = (CowU32)0x1;
            }
          }
          else {
            uVar3 = uVar4;
            if (uVar6 <= uVar4) {
              uVar3 = uVar6;
            }
            cow_bridge_103169e0(g, COW_IMG(COW_ADDR_LIFT_10312368), 3u, (const CowU32[]){ rd32((uint32_t)piVar1), param_1, uVar3 }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)(piVar1 + 4u * (uint32_t)(1)), rd32((uint32_t)(piVar1 + 4u * (uint32_t)(1))) - uVar3);
            wr32((uint32_t)piVar1, rd32((uint32_t)piVar1) + uVar3);
            uVar4 = uVar4 - uVar3;
    L_103123bd:
            param_1 = param_1 + uVar3;
          }
        } while (uVar4 != 0);
      }
      g->eax = (CowU32)(param_3); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 4 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 0.
   Arguments: 1 register argument(s) [ecx], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10312305(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10312305: push ebp */
    g->ebp = g->esp;                       /* 0x10312306: mov ebp, esp */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x10312308: push ecx */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10312309: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1031230a: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1031230b: push edi */
    g->edi = param_3;   /* 0x1031230c: the value the entry loaded and the decompiler dropped */
    cow_lift_10312305(g, param_1, param_2, param_3, param_4);

    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 5 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
