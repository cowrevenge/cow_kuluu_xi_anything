/* f_0x1027a310 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1027a310 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1027a310(Guest* g, CowU32 param_1, int32_t param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU32 puVar2;
    CowU32 puVar3;
    int iVar4;
    CowU32 uVar5;
    if ((param_1 == (CowU32)0x0) || ((param_2 == 0 && (param_3 == (CowU32)0x0)))) {
        wr32(COW_IMG(COW_ADDR_LIFT_1099D208), 0);
        g->eax = (CowU32)(0); return;
      }
      puVar2 = (CowU32)cow_bridge_1028a380(g, COW_IMG(COW_ADDR_LIFT_1027A33A), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, g->eax, 0u);
      if (puVar2 == (CowU32)0x0) {
        puVar2 = (CowU32)cow_bridge_10275da0(g, COW_IMG(COW_ADDR_LIFT_1027A356), 4u, (const CowU32[]){ 1u, 1u, 272316396u, 2176u }, g->ecx, g->edx, g->eax, 0u);
        if (puVar2 == (CowU32)0x0) {
          g->eax = (CowU32)(0); return;
        }
        wr8((uint32_t)puVar2, 0);
      }
      puVar3 = (CowU32)cow_bridge_1028a600(g, COW_IMG(COW_ADDR_LIFT_1027A36C), 1u, (const CowU32[]){ param_3 }, g->ecx, g->edx, g->eax, 0u);
      if (puVar3 == (CowU32)0x0) {
        puVar3 = (CowU32)cow_bridge_10275da0(g, COW_IMG(COW_ADDR_LIFT_1027A388), 4u, (const CowU32[]){ 1u, 1u, 272316396u, 2186u }, g->ecx, g->edx, g->eax, 0u);
        if (puVar3 == (CowU32)0x0) {
          cow_bridge_10276110(g, COW_IMG(COW_ADDR_LIFT_1027A3A1), 3u, (const CowU32[]){ puVar2, COW_IMG(COW_ADDR_LIFT_103B37EC), 0x88d }, g->ecx, g->edx, g->eax, 12u);
          g->eax = (CowU32)(0); return;
        }
        wr8((uint32_t)puVar3, 0);
      }
      wr8((uint32_t)param_1, 0);
      if (rd32(COW_IMG(COW_ADDR_LIFT_1099D208)) == 0) {
        cow_bridge_10312031(g, COW_IMG(COW_ADDR_LIFT_1027A3C7), 4u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_10350FF8), puVar2, param_3 }, g->ecx, g->edx, g->eax, 0u);
        wr32(COW_IMG(COW_ADDR_LIFT_1099D208), rd32(COW_IMG(COW_ADDR_LIFT_1099D208)) + 1);
        cow_bridge_10276110(g, COW_IMG(COW_ADDR_LIFT_1027A3E4), 3u, (const CowU32[]){ puVar2, COW_IMG(COW_ADDR_LIFT_103B37EC), 0x89b }, g->ecx, g->edx, g->eax, 0u);
        uVar5 = 0x89c;
      }
      else {
        if (rd32(COW_IMG(COW_ADDR_LIFT_1099D208)) == 1) {
          iVar4 = (int)param_1 - (int)param_3;
          do {
            cVar1 = rd8((uint32_t)param_3);
            wr8((uint32_t)(param_3 + 1u * (uint32_t)(iVar4)), cVar1);
            param_3 = param_3 + 1;
          } while (cVar1 != '\0');
          wr32(COW_IMG(COW_ADDR_LIFT_1099D208), rd32(COW_IMG(COW_ADDR_LIFT_1099D208)) + 1);
          cow_bridge_10276110(g, COW_IMG(COW_ADDR_LIFT_1027A420), 3u, (const CowU32[]){ puVar2, COW_IMG(COW_ADDR_LIFT_103B37EC), 0x8a4 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10276110(g, COW_IMG(COW_ADDR_LIFT_1027A430), 3u, (const CowU32[]){ puVar3, COW_IMG(COW_ADDR_LIFT_103B37EC), 0x8a5 }, g->ecx, g->edx, g->eax, 24u);
          g->eax = (CowU32)(1); return;
        }
        if (rd32(COW_IMG(COW_ADDR_LIFT_1099D208)) != 2) {
          if (puVar2 != (CowU32)0x0) {
            cow_bridge_10276110(g, COW_IMG(COW_ADDR_LIFT_1027A46C), 3u, (const CowU32[]){ puVar2, COW_IMG(COW_ADDR_LIFT_103B37EC), 0x8b2 }, g->ecx, g->edx, g->eax, 0u);
          }
          if (puVar3 == (CowU32)0x0) {
            wr32(COW_IMG(COW_ADDR_LIFT_1099D208), 0);
            g->eax = (CowU32)(0); return;
          }
          cow_bridge_10276110(g, COW_IMG(COW_ADDR_LIFT_1027A47C), 3u, (const CowU32[]){ puVar3, COW_IMG(COW_ADDR_LIFT_103B37EC), 0x8b3 }, g->ecx, g->edx, g->eax, 40u);
          wr32(COW_IMG(COW_ADDR_LIFT_1099D208), 0);
          g->eax = (CowU32)(0); return;
        }
        cow_bridge_10312031(g, COW_IMG(COW_ADDR_LIFT_1027A44F), 4u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_10350FF8), puVar2, puVar3 }, g->ecx, g->edx, g->eax, 0u);
        wr32(COW_IMG(COW_ADDR_LIFT_1099D208), rd32(COW_IMG(COW_ADDR_LIFT_1099D208)) + 1);
        cow_bridge_10276110(g, COW_IMG(COW_ADDR_LIFT_1027A49D), 3u, (const CowU32[]){ puVar2, COW_IMG(COW_ADDR_LIFT_103B37EC), 0x8ad }, g->ecx, g->edx, g->eax, 12u);
        uVar5 = 0x8ae;
      }
      cow_bridge_10276110(g, COW_IMG(COW_ADDR_LIFT_1027A4B4), 3u, (const CowU32[]){ puVar3, COW_IMG(COW_ADDR_LIFT_103B37EC), uVar5 }, g->ecx, g->edx, g->eax, 12u);
      g->eax = (CowU32)(1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1027a310(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1027a310: push ebx */
    { uint32_t A = (uint32_t)(g->esp + 0x8u); g->ebx = (uint32_t)(rd32(A)); }   /* 0x1027a311: register ebx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1027a315: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1027a316: push esi */
    cow_lift_1027a310(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
