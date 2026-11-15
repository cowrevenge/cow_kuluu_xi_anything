/* f_0x100c2d00 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100c2d00 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100c2d00(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 pcVar1;
    char cVar2;
    if (param_2 != (CowU32)0x0) {
        do {
          cVar2 = rd8((uint32_t)param_2);
          if (cVar2 == '\0') {
            wr8((uint32_t)param_1, rd8((uint32_t)param_2));
            g->eax = (CowU32)(param_1); return;
          }
          if (cVar2 < '\0') {
            wr8((uint32_t)param_1, cVar2);
    L_100c2d5f:
            cVar2 = rd8((uint32_t)(param_2 + 1u * (uint32_t)(1)));
            param_1 = param_1 + 1;
            param_2 = param_2 + 1;
          }
          else if (cVar2 == '\x7f') {
            switch(rd8((uint32_t)(param_2 + 1u * (uint32_t)(1)))) {
            default:
              wr8((uint32_t)param_1, '\x7f');
              break;
            case '4':
            case '5':
            case '6':
            case -0x80:
            case -0x7f:
            case -0x7c:
            case -0x7a:
            case -0x79:
            case -0x78:
            case -0x74:
            case -0x71:
            case -0x6e:
            case -0x6c:
            case -0x68:
            case -0x67:
            case -0x66:
            case -0x60:
            case -0x5f:
            case -0x5e:
            case -0x5d:
            case -0x5c:
            case -0x5b:
            case -0x5a:
            case -0x59:
            case -0x58:
            case -0x57:
            case -0x56:
            case -0x55:
            case -0x54:
            case -0x50:
            case -0x4f:
            case -0x4b:
            case -0x49:
              wr8((uint32_t)param_1, '\x7f');
              pcVar1 = param_2 + 1;
              param_1 = param_1 + 1;
              param_2 = param_2 + 1;
              wr8((uint32_t)param_1, rd8((uint32_t)pcVar1));
              break;
            case '8':
              wr8((uint32_t)param_1, '\x7f');
              wr8((uint32_t)(param_1 + 1u * (uint32_t)(1)), rd8((uint32_t)(param_2 + 1u * (uint32_t)(1))));
              pcVar1 = param_2 + 2;
              param_1 = param_1 + 2;
              param_2 = param_2 + 2;
              wr8((uint32_t)param_1, rd8((uint32_t)pcVar1));
            }
            goto L_100c2d5f;
          }
          wr8((uint32_t)param_1, cVar2);
          param_1 = param_1 + 1;
          param_2 = param_2 + 1;
        } while (param_2 != (CowU32)0x0);
      }
      g->eax = (CowU32)((CowU32)0x0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(edx), cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 1 register argument(s) [edx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100c2d00(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->edx;   /* edx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->ecx = param_3;   /* 0x100c2d00: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100c2d04: push esi */
    cow_lift_100c2d00(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
