/* f_0x101a1580 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101a1580 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101a1580(Guest* g, int32_t param_1, CowU32 param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU32 pcVar2;
    CowU32 uVar3;
    CowU32 uVar4;
    CowU32 uVar5;
    if (param_2 != (CowU32)0x0) {
        uVar3 = 0xffffffff;
        pcVar2 = param_2;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          cVar1 = rd8((uint32_t)pcVar2);
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        uVar4 = ~uVar3 - 1;
        if (param_3 < 0x97) {
          pcVar2 = (CowU32)((int32_t)rd32((uint32_t)(param_1 + 0x618)) * 0x97 + param_1);
          for (uVar5 = uVar4 >> 2; pcVar2 = pcVar2 + 4, uVar5 != 0; uVar5 = uVar5 - 1) {
            wr32((uint32_t)pcVar2, rd32((uint32_t)param_2));
            param_2 = param_2 + 4;
          }
          for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            wr8((uint32_t)pcVar2, rd8((uint32_t)param_2));
            param_2 = param_2 + 1;
            pcVar2 = pcVar2 + 1;
          }
          wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x618)) * 0x97 + uVar4 + 4 + param_1), 0);
          wr32((uint32_t)(param_1 + 0x5ec + (int32_t)rd32((uint32_t)(param_1 + 0x618)) * 4), ~uVar3);
          g->eax = (CowU32)(1); return;
        }
        cow_bridge_1018fdf0(g, COW_IMG(COW_ADDR_LIFT_101A161B), 3u, (const CowU32[]){ param_2, (int32_t)rd32((uint32_t)(param_1 + 0x618)) * 0x97 + param_1 + 4, 0x96 }, g->ecx, g->edx, g->eax, 0u);
        wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x618)) * 0x97 + param_1 + 0x9a), 0);
        wr32((uint32_t)(param_1 + 0x5ec + (int32_t)rd32((uint32_t)(param_1 + 0x618)) * 4), 0x97);
      }
      g->eax = (CowU32)(1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebp], frame pointer no, 0 locals, pops [ebp], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101a1580(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x101a1580: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101a1581: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->esi = (uint32_t)(rd32(A)); }   /* 0x101a1582: register esi, replayed as the entry ran it */
    g->ebp = g->ecx;   /* 0x101a1586: the value the entry loaded and the decompiler dropped */
    cow_lift_101a1580(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 2 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
