/* f_0x1002d9a0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1002d9a0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1002d9a0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU16 uVar1;
    CowU32 uVar2;
    uVar1 = rd16((uint32_t)param_1);
      while (uVar1 != 0xffff) {
        if ((short)uVar1 < 0) {
          if ((uVar1 >> 4 & 0xf) == 0) {
            param_1 = param_1 + 9;
          }
          else if ((uVar1 >> 4 & 0xf) == 1) {
            param_1 = param_1 + 0x17;
          }
        }
        else {
          uVar2 = (CowU32)rd16((uint32_t)(param_1 + 2u * (uint32_t)(1)));
          if (uVar1 < 0x4354) {
            if (uVar1 == 0x4353) {
              param_1 = param_1 + uVar2 + 6;
            }
            else if (uVar1 == 0x43) {
              param_1 = param_1 + uVar2 * 5 + 2;
            }
            else if (uVar1 == 0x54) {
              cow_bridge_1002da70(g, COW_IMG(COW_ADDR_LIFT_1002DA06), 2u, (const CowU32[]){ uVar2, param_1 + 2 }, g->ecx, g->edx, g->eax, 0u);
              param_1 = param_1 + uVar2 * 0xf + 2;
            }
          }
          else if (uVar1 == 0x5453) {
            cow_bridge_1002db20(g, COW_IMG(COW_ADDR_LIFT_1002DA48), 2u, (const CowU32[]){ uVar2, param_1 + 2 }, g->ecx, g->edx, g->eax, 0u);
            param_1 = param_1 + uVar2 * 5 + 0xc;
          }
        }
        uVar1 = rd16((uint32_t)param_1);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 1 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 4.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1002d9a0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1002d9a0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1002d9a1: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->esi = (uint32_t)(rd32(A)); }   /* 0x1002d9a2: register esi, replayed as the entry ran it */
    g->ebx = g->ecx;   /* 0x1002d9a6: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esi); g->eax = (g->eax & 0xFFFF0000u) | (uint16_t)(rd16(A)); }   /* 0x1002d9a8: register eax, replayed as the entry ran it */
    cow_lift_1002d9a0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
