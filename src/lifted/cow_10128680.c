/* f_0x10128680 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10128680 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10128680(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    int iVar3;
    iVar3 = 0;
      cVar1 = rd8((uint32_t)param_1);
      while (cVar1 != '\0') {
        if (cVar1 == '\x7f') {
          switch(rd8((uint32_t)(param_1 + 1u * (uint32_t)(1)))) {
          case '4':
          case '5':
          case '6':
            param_1 = param_1 + 3;
            break;
          case '8':
            param_1 = param_1 + 4;
            break;
          case -5:
          case -4:
          case '1':
          case '2':
          case '3':
          case '7':
            param_1 = param_1 + 2;
            break;
          default:
            param_1 = param_1 + 1;
          }
        }
        else if (cVar1 == '\x1e') {
          param_1 = param_1 + 2;
        }
        else if (cVar1 == '\x1f') {
          param_1 = param_1 + 2;
        }
        else {
          iVar2 = cow_bridge_1011da80(g, COW_IMG(COW_ADDR_LIFT_101286D7), 1u, (const CowU32[]){ param_1 }, g->ecx, g->edx, g->eax, 4u);
          param_1 = param_1 + iVar2;
        }
        iVar3 = iVar3 + 1;
        cVar1 = rd8((uint32_t)param_1);
      }
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(iVar3) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10128680(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10128680: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x8u); g->esi = (uint32_t)(rd32(A)); }   /* 0x10128681: register esi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10128685: push edi */
    g->edi = 0u;   /* 0x10128686: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esi); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x10128688: register eax, replayed as the entry ran it */
    cow_lift_10128680(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
