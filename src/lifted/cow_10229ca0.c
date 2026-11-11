/* f_0x10229ca0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10229ca0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10229ca0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    if (param_2 != (CowU32)0x0) {
        iVar1 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_103865E0) + param_1 * 8));
        switch(iVar1) {
        case 0:
          wr32((uint32_t)param_2, rd32((uint32_t)(param_3 + 4)));
          return;
        case 1:
          wr32((uint32_t)param_2, (CowU32)rd8((uint32_t)(param_3 + 10)));
          return;
        case 2:
          wr32((uint32_t)param_2, (CowU32)rd16((uint32_t)(param_3 + 8)));
          return;
        case 3:
          wr32((uint32_t)param_2, rd32((uint32_t)(param_3 + 0xc)));
          return;
        case 4:
          wr32((uint32_t)param_2, (CowU32)rd16((uint32_t)(param_3 + 0x10)));
          return;
        case 5:
          wr32((uint32_t)param_2, (CowU32)rd16((uint32_t)(param_3 + 0x12)));
          return;
        case 6:
          wr32((uint32_t)param_2, (CowU32)rd16((uint32_t)(param_3 + 0x48)));
          return;
        case 7:
        case 8:
        case 9:
        case 10:
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x1c:
        case 0x1d:
        case 0x1e:
        case 0x1f:
        case 0x20:
        case 0x21:
        case 0x22:
        case 0x23:
        case 0x24:
        case 0x25:
        case 0x26:
        case 0x27:
        case 0x28:
        case 0x29:
        case 0x2a:
        case 0x2b:
        case 0x2c:
        case 0x2d:
        case 0x2e:
        case 0x2f:
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
          wr32((uint32_t)param_2, (CowU32)rd8((uint32_t)(iVar1 + 0x11 + param_3)));
          return;
        case 0x37:
          wr32((uint32_t)param_2, rd32((uint32_t)(param_3 + 0x14)));
          return;
        case 0x38:
          wr32((uint32_t)param_2, rd32((uint32_t)(param_3 + 0x4c)));
          return;
        case 0x39:
          wr32((uint32_t)param_2, (CowU32)rd16((uint32_t)(param_3 + 0x4a)));
          return;
        case 0x3a:
          wr32((uint32_t)param_2, rd32((uint32_t)(param_3 + 0x50)));
          return;
        case 0x3b:
          wr32((uint32_t)param_2, rd32((uint32_t)(param_3 + 0x54)));
          return;
        case 0x3c:
          wr32((uint32_t)param_2, rd32((uint32_t)(param_3 + 0x58)));
          return;
        case 0x3d:
          wr32((uint32_t)param_2, rd32((uint32_t)(param_3 + 0x5c)));
          return;
        case 0x3e:
          wr32((uint32_t)param_2, rd32((uint32_t)(param_3 + 0x60)));
          return;
        case 0x3f:
        case 0x40:
        case 0x41:
        case 0x42:
        case 0x43:
        case 0x44:
        case 0x45:
        case 0x46:
        case 0x47:
        case 0x48:
        case 0x49:
        case 0x4a:
        case 0x4b:
        case 0x4c:
        case 0x4d:
        case 0x4e:
        case 0x4f:
        case 0x50:
        case 0x51:
        case 0x52:
        case 0x53:
        case 0x54:
        case 0x55:
        case 0x56:
        case 0x57:
          wr32((uint32_t)param_2, (CowU32)rd8((uint32_t)(iVar1 + 0x25 + param_3)));
          return;
        case 0x58:
          wr32((uint32_t)param_2, rd32((uint32_t)(param_3 + 0x80)));
          return;
        case 0x59:
          wr32((uint32_t)param_2, (CowU32)rd8((uint32_t)(param_3 + 0xb)));
          return;
        case 0x5a:
          wr32((uint32_t)param_2, rd32((uint32_t)(param_3 + 0x84)));
          return;
        case 0x5b:
          wr32((uint32_t)param_2, rd32((uint32_t)(param_3 + 0x88)));
          return;
        case 0x5c:
          wr32((uint32_t)param_2, rd32((uint32_t)(param_3 + 0x8c)));
          return;
        case 0x5d:
          wr32((uint32_t)param_2, rd32((uint32_t)(param_3 + 0x90)));
          return;
        case 0x5e:
          wr32((uint32_t)param_2, rd32((uint32_t)(param_3 + 0x94)));
          return;
        case 0x5f:
          wr32((uint32_t)param_2, rd32((uint32_t)(param_3 + 0x98)));
          return;
        case 0x60:
          wr32((uint32_t)param_2, rd32((uint32_t)(param_3 + 0x9c)));
          return;
        default:
          wr32((uint32_t)param_2, 0);
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10229ca0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->eax = param_2;   /* 0x10229ca0: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10229ca4: push esi */
    cow_lift_10229ca0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
